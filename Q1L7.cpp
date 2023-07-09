#include <iostream>

using namespace std;

/*
Numa disciplina são dadas duas provas e dois trabalhos, mas a média é calculada
considerando-se apenas a maior nota de prova e a maior nota de trabalho. Elabore um
algoritmo que, dadas as quatro notas de um aluno, informe a sua média. Para isso, utilize
duas funções: uma que determine o maior valor entre as notas (de provas ou de
trabalhos) e outra que calcule a média aritmética das duas maiores notas
*/
float maiornota(float n1, float n2, float n3, float n4);
float mediaAritmetica(float maiorNota1, float maiorNota2);

int main(){
    float nota1, nota2, nota3, nota4, maiorNota1, maiorNota2;

    cout << "informe sua nota 1:" << endl;
    cin >> nota1;
    cout << "informe sua nota 2:" << endl;
    cin >> nota2;
    cout << "informe sua nota 3:" << endl;
    cin >> nota3;
    cout << "informe sua nota 4:" << endl;
    cin >> nota4;

    maiorNota1 = maiornota(nota1, nota2, nota3, nota4);
    maiorNota2 = maiornota(nota1, nota2, nota3, nota4);
    
    if (maiorNota1 == nota1 || maiorNota1 == nota2) {
        if (maiorNota2 == nota1 || maiorNota2 == nota2) {
            maiorNota2 = maiornota(nota3, nota4, maiorNota1, maiorNota2);
        } else {
            maiorNota2 = maiornota(nota1, nota2, maiorNota1, maiorNota2);
        }
    } else {
        maiorNota2 = maiornota(nota1, nota2, nota3, nota4);
    }

    float media = mediaAritmetica(maiorNota1, maiorNota2);

    cout << "media das maiores notas " << media << endl;

}

float maiornota(float n1, float n2, float n3, float n4){
    float maior = n1;

    if(n2>maior){
        maior = n2;
    }else if(n3>maior){
        maior = n3;
    }else if(n4>maior){
        maior = n4;
    }

    return maior;
}

float mediaAritmetica(float maiorNota1, float maiorNota2){
    return (maiorNota1 + maiorNota2)/2.0;
}

