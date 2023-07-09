#include <iostream>

using namespace std;

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media);

int main(){
    float n1, n2, n3, media;
    int aulas, faltas;
    char sit;

    cout << "digite a nota 1: " << endl;
    cin >> n1;
    cout << "digite a nota 2: " << endl;
    cin >> n2;
    cout << "digite a nota 3: " << endl;
    cin >> n3;

    cout << "informe o numero de faltas: " << endl;
    cin >> faltas;
    cout << "informe o numero de aulas: " << endl;
    cin >> aulas;

    sit = situacao(n1, n2, n3, faltas, aulas, &media);

    if(sit == 'A'){
        cout << "\n\tmedia: " << media << " e situacao = aprovado";
    }else if(sit == 'R'){
         cout << "\n\tmedia: " << media << " e situacao = reprovado";
    }else{
         cout << "\n\tmedia: " << media << " e situacao = reprovado por faltas";
    }



}

char situacao(float p1, float p2, float p3, int faltas, int aulas, float* media){
    char sit;
*media = (p1+p2+p3)/3;

if((faltas<=aulas*0.25)&&(*media>=6.0)){
    sit = 'A';
}
else if((faltas<=aulas*0.25)&&(*media<6.0)){
    sit = 'R';
}else{
    if(faltas>aulas*0.25){
    sit = 'F';
    
    }
}
return sit;
}