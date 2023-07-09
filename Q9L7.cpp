#include <iostream>

using namespace std;

/*Crie um algoritmo para manipular vetores. O seu programa deve implementar 
uma função chamada inverteVetor, que recebe como parâmetro dois vetores V1 e V2, 
ambos de tamanho N. A função deve copiar os elementos de V1 para V2 na ordem 
inversa. Ou seja, se a função receber V1 = {1,2,3,4,5}, a função deve copiar os elementos 
para V2 na seguinte ordem: V2 = {5,4,3,2,1}. Além disso, a função também deve retornar 
o maior valor encontrado em V1. A função deve possuir a seguinte assinatura: int 
inverteVetor(int *v1, int *v2, int n); Elabore um teste da função no main.*/

int inverteVetor(int *v1, int *v2, int n);

int main(){
    int i, recebe, n; 

    cout << "\ninforme o valor de n: ";
    cin >> n;

    int v1[n], v2[n];
    cout << "alimente o vetor 1: " << endl;
    for(i=0;i<n;i++){
        cout << "\ndigite o valor de " << i+1;
        cin >> v1[i];
    }

    recebe = inverteVetor(v1, v2, n);

    cout << "\nO maior valor de v1 eh: " << recebe << "\nV2{ ";
    for(int i = 0; i < n; i++){
        cout << v2[i];
}

}

int inverteVetor(int *v1, int *v2, int n){
    int maior = v1[0];
    for(int i = (n-1);i >=0;i--){
        v2[ n-(i+1) ] = v1[i];
        if(maior < v1[i]){
            maior = v1[i];
        }
    }

    return maior;
}