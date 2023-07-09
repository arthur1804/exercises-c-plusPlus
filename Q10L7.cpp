
#include <iostream>

using namespace std;

/*Crie um algoritmo para manipular vetores. O seu programa deve implementar 
uma função chamada inverteVetor, que recebe como parâmetro dois vetores V1 e V2, 
ambos de tamanho N. A função deve copiar os elementos de V1 para V2 na ordem 
inversa. Ou seja, se a função receber V1 = {1,2,3,4,5}, a função deve copiar os elementos 
para V2 na seguinte ordem: V2 = {5,4,3,2,1}. Além disso, a função também deve retornar 
o maior valor encontrado em V1. A função deve possuir a seguinte assinatura: int 
inverteVetor(int *v1, int *v2, int n); Elabore um teste da função no main.*/

/*Em seguida, utilizando o algoritmo anterior implemente outra função chamada 
multiplicaEscalar, que recebe como parâmetro dois vetores V1 e V2 (ambos de tamanho 
N), e um número inteiro X. A função deve multiplicar cada um dos elementos de V1 por 
X e armazenar os resultados em V2. A função deve possui a seguinte assinatura: void 
multiplica_escalar(int *v1, int *v2, int x, int n); 
No main, utilize as funções inverteVetor e multiplicaEscalar para inverter um vetor de 
tamanho 10 fornecido pelo usuário e em seguida multiplicar esse vetor por um escalar 
também fornecido pelo usuário. Por último, o programa deverá exibir o vetor resultante.*/


int inverteVetor(int *v1, int *v2, int n);

void multiplica_escalar(int *v1, int *v2, int x, int n);

int main(){
    int i, recebe, n, x; 

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

    cout << "\ndigite o valor de x: ";
    cin >> x;
    multiplica_escalar(v1, v2, x, n);
     cout << "\nV2 {";
    for(int i=0; i < n; i++){
        cout << v2[i] << " ";
    }
    cout << "}";

    

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

void multiplica_escalar(int *v1, int *v2, int x, int n){
    int i;
    for(i=0; i < n; i++){
        v2[i] = v1[i] * x;
    }
}