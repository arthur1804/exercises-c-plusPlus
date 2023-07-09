#include <iostream>

using namespace std;

/*Elaborar um algoritmo que leia um vetor de 10 posições de inteiros e chame uma 
função MinMax. Esta função deve receber o vetor lido e, por referência, duas variáveis 
inteiras, min e max. O objetivo da função é buscar os valores do menor e maior 
elementos do vetor e atribuir às variáveis min e max respectivamente.*/

void MinMax(int *v, int *pmin, int *pmax);

int main(){
    int v[10], i, min, max;

    for(i=0;i<10;i++){
        cout << "digite o inteiro " << i << endl;
        cin >> v[i];
    }

    MinMax(v, &min, &max);

    cout << "valor maximo: " << max << endl;
    cout << "valor minimo: " << min << endl;

}

void MinMax(int *v, int *pmin, int *pmax){
    int i, menor, maior;
    menor = maior = v[0];
    for(i=1;i<10;i++){
        if(v[i] < menor){
            menor = v[i];
        }
        if(v[i]>maior){
            maior = v[i];
        }
    }

    *pmax = maior;
    *pmin = menor;

}