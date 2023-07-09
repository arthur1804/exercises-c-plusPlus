#include <iostream>

using namespace std;

/*Escreva uma função hm que converta minutos em horas-e-minutos. A função 
recebe um inteiro mnts e os endereços de duas variáveis inteiras, h e m, e atribui valores 
a essas variáveis de modo que m seja menor que 60 e que 60*h + m seja igual a mnts. 
Elabore um algoritmo que teste a função hm
*/


int hm(int mnts, int& h, int& m);

int main() {
    int h, m;
    int minutos;

    cout << "Digite o valor total de minutos: ";
    cin >> minutos;

    hm(minutos, h, m);

    cout << "Horas: " << h << endl;
    cout << "Minutos: " << m << endl;

    return 0;
}

int hm(int mnts, int& h, int& m) {
    h = mnts / 60; // Obtém as horas inteiras
    m = mnts % 60; // Obtém os minutos restantes

    return mnts;
}