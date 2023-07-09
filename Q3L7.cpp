#include <iostream>

using namespace std;

/*/Escreva uma função que recebe 2 números inteiros n1 e n2 como entrada e 
retorna a soma de todos os números inteiros contidos no intervalo [n1,n2]. Use esta 
função em um programa que lê n1 e n2 do usuário e imprime a soma.
*/
int soma1(int nu1, int nu2);

int main(){
    int n1, n2, soma;

    cout << "informe o valor do numero 1: " << endl;
    cin >> n1;
    cout << "informe o valor do numeor 2: " << endl;
    cin >> n2;

    soma = soma1(n1, n2);

    cout << "soma dos numeros entre os valores dados: " << soma << endl;

}

int soma1(int nu1, int nu2){
    int i, soma = 0;

    for(i=nu1;i<=nu2;i++){
        soma += i;
    }
    return soma;

}