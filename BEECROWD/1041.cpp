#include <iostream>
using namespace std;


int main(){
    //Crie 2 espaços na memória, x (double) e y (double)
    double x,y;
    //Leia ambos os valores
    cin >> x >> y;
    //Crie um espaço na memória para armazenar uma string de nome res
    string res = "";
    //Compare se ambos são iguais a zero
    if(x==0 && y == 0){
        // atribua a variavel res o valor "Origem"
        res = "Origem";
    }//caso contrario compare se x é igual a zero e y não
    else if(x==0 && y!= 0){
        //atribua a cariavel res o valor "Eixo Y"
        res = "Eixo Y";
    }//caso contrario compare se x é diferente de 0 e y é igual a zero
    else if( x!=0 && y==0){
        // atribua a cariavel res o valor "Eixo X"
        res = "Eixo X";
    }//caso contrario compare se X > 0
    else if(x > 0){
        // agora compare se y > 0
        if( y > 0){
            //atribua a res o valor Q1
            res = "Q1";
        }// caso contrario atribua a res o valor Q4
        else{
            res = "Q4";
        }
    }// caso contrario compare se x < 0
    else if( x < 0){
         // agora compare se y > 0
        if( y > 0){
            //atribua a res o valor Q2
            res = "Q2";
        }// caso contrario atribua a res o valor Q3
        else{
            res = "Q3";
        }
    }
    // Escreva a resposta com uma quebra de linha
    cout << res << endl;
    
}