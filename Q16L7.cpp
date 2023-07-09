#include <iostream>

using namespace std;

/* Escreva uma função que receba como parâmetros dois vetores de inteiros: x1 e
x2 e as suas respectivas quantidades de elementos: n1 e n2. A função deverá retornar
um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a união de
x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3. Sendo x1 = {1, 3, 5, 6, 7} e
x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 4, 5, 6, 7, 8}. Assinatura da função:
int* uniao(int *x1, int *x2, int n1, int n2, int* qtd); */

int* uniao(int *x1, int *x2, int n1, int n2, int* qtd);

int main(){
    int n1, n2, i, qtd;

    cout << "\ndigite o tamanho do vetor 1: ";
    cin >> n1;
    cout << "\ndigite o tamanho do vetor 2: ";
    cin >> n2;

    int v1[n1], v2[n2];

    for(i=0;i<n1;i++){
        cout << "\nalimente o vetor 1: ";
        cin >> v1[i];
    }

    for(i=0;i<n2;i++){
        cout << "\nalimente o vetor 2: ";
        cin >> v2[i];
    }

    
    int *v3 = uniao(v1, v2, n1, n2, &qtd);

    cout << "\nvalores do vetor uniao: ";
    for(i=0;i<qtd;i++){
        cout << "\n" << v3[i];
    }

    delete[] v3;

}

int* uniao(int *x1, int *x2, int n1, int n2, int* qtd){
    *qtd = n1 + n2;
    int i;
    int* v3 = new int[*qtd];

    for(i=0;i<n1;i++){
        v3[i] = x1[i];
    }

    for(i=0;i<n2;i++){
        v3[n1 + i] = x2[i];
    }

    return v3;

}