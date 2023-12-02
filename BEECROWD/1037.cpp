#include <iostream>
using namespace std;


int main(){
    //crie uma variavel com ponto flutuante na memória
    double val;
    //leia essa variável
    cin >> val;
    //Compare se o valor está ente 0 e 25
    if(val >= 0 && val <=25){
        cout << "Intervalo [0,25]" << endl;
    }//Caso contrario, compare se o valor esta entre 25.01 e 50
    else if(val >25 && val <= 50){
        cout << "Intervalo (25,50]" << endl;
    }//Caso contrario verifique se valor está entre 50.1 e 75
    else if(val >50 && val <= 75){
        cout << "Intervalo (50,75]" << endl;
    }//caso contrario compare se valor esta entre 75 e 100
    else if(val > 75 && val <= 100){
        cout << "Intervalo (75,100]" << endl;
    }//Caso contrario, imprima Fora do intervalo
    else{
        cout << "Fora de intervalo" << endl;
    }
}