#include <iostream>

using namespace std;

/*Elaborar o algoritmo da calculadora utilizando funções. Implementar as seguintes 
opções: soma, subtração, multiplicação e divisão.*/

int soma(int n1, int n2);

int subtracao(int n1, int n2);

int multiplicacao(int n1, int n2);

int divisao(int n1, int n2);

int main(){
    int n, numero, numero2, somar, sub, mult, div;

    cout << "\ndigite um numero:";
    cin >> numero;

    cout << "\ndigite a operacao(soma-1, sub-2, multi-3, div-4): ";
    cin >> n;

    cout << "\ndigite outro numero: ";
    cin >> numero2;

    switch(n){
        case 1:
            somar = soma(numero, numero2);
            cout << "resultado: " << somar << endl;
            break;
        case 2:
            sub = subtracao(numero, numero2);
            cout << "resultado: " << sub << endl;
            break;
        case 3:
            mult = multiplicacao(numero, numero2);
            cout << "resultado: " << mult << endl;
            break;
        case 4:
            div = divisao(numero, numero2);
            cout << "resultado: " << div << endl;
            break;
        default: cout << "valor invalido! " << endl;
    }
}

int soma(int n1, int n2){
    int somar;
    somar = n1 + n2;

    return somar;
}

int subtracao(int n1, int n2){
    int subt;
    subt = n1 - n2;
    
    return subt;
}

int multiplicacao(int n1, int n2){
    int mult;
    mult = n1*n2;

    return mult;
}

int divisao(int n1, int n2){
    int div;
    div = n1/n2;

    return div;
}