#include <iostream>
#include <string>

using namespace std;

/*Escreva uma função que receba uma string e uma letra e retorne um vetor de
inteiros contendo as posições (índices no vetor da string) onde a letra foi encontrada e
um inteiro contendo o tamanho do vetor criado (total de letras iguais encontradas).
Utilize o retorno de um vetor para retornar os índices e um ponteiro para guardar o
tamanho do vetor. Elabore um algoritmo que teste a função supracitada. */

int* encontrar(string& palavra, char letra, int& tamanho);

int main() {
    string palavra;
    char letra;
    int tamanho = 0;
    int* v;

    cout << "Digite a palavra: " << endl;
    getline(cin, palavra);

    cout << "Digite a letra desejada: " << endl;
    cin >> letra;

    v = encontrar(palavra, letra, tamanho);

    cout << "\nPosicao(s) da letra: ";
    for (int i = 0; i < tamanho; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Fim do programa!" << endl;

    delete[] v;

    return 0;
}

int* encontrar(string& palavra, char letra, int& tamanho){
    int* vetor = new int[palavra.length()];
    tamanho = 0;
    size_t i;

    for(i=0;i<palavra.length();i++){
        if(palavra[i]==letra){
            vetor[tamanho] = i;
            tamanho++;
        }
    }

    return vetor;


}