#include <iostream>

using namespace std;

/*. Escreva uma função chamada Troca que troque os valores dos parâmetros 
recebidos. Essa função não deve ter retorno.
*/
void troca(int *a, int *b);

int main(){
    int valor1, valor2;

    cout << "informe o primeiro valor: " << endl;
    cin >> valor1;
    cout << "informe o segundo valor: " << endl;
    cin >> valor2;

    cout << "\nvalor original: " << valor1 << " e " << valor2;

    troca(&valor1, &valor2);

    cout << "\nvalor trocado: " << valor1 << " e " << valor2;
}

void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}