#include <iostream>

using namespace std;

/*Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os endereços de 
duas variáveis inteiras, min e max, e deposite nessas variáveis o valor do menor 
elemento (mínimo) e do maior elemento (máximo) do vetor. Elabore um algoritmo que 
teste a função mm.*/

void mm(int v[], int n, int& min, int& max);

int main(){
    int max, min, n, i;

    cout << "\nqual o tamanho do vetor desejado? ";
    cin >> n;

    int v[n];
    for(i=0;i<n;i++){
        cout << "\nalimente o vetor n: ";
        cin >> v[i];
    }

    mm(v, n, min, max);

    cout << "\nminimo elemento: " << min;
    cout << "\nmaximo elemento: " << max;

}

void mm(int v[], int n, int& min, int& max) {
    if (n == 0) {
        return;
    }

    min = v[0];
    max = v[0];

    for(int i=0;i<n;i++){
        if(v[i]<min){
            min = v[i];
        }
        if(v[i]>max){
            max = v[i];
        }
    }
}