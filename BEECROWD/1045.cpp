#include <iostream>
using namespace std;


int main(){
    //crie espaço na memória para receber 3 variáveis, a, b e c, dotipo flutiante (double)
    double a, b,c;
    //Leia essas variáveis
    cin >> a >> b >> c;
    //Crie espaço na memoria para receber 3 variáveis, maior, meio, menor
    double maior, meio,menor;
    //compare entre "a", "b" e "c" quem é o maior o menor e o do meio
    //Compare se a for maior que b e c
    if(a >= b && a >= c){
        maior = a;
        //compare se b > c
        if (b >= c){
            meio = b;
            menor = c;
        }else{
            meio = c;
            menor = b;
        }
    }// Caso contrario se b for maior
    else if(b >= a && b >= c){
        maior = b;
        //comapre se a > c
        if (a >= c){
            meio = a;
            menor = c;
        }else{
            meio = c;
            menor = a;
        }
    }//compare se C é maior
    else if(c >= b && c >= a){
        maior = c;
        //compare se b > a
        if (b >= a){
            meio = b;
            menor = a;
        }else{
            meio = a;
            menor = b;
        }
    }

    // Compare agora se não forma triangulo
    if(maior >= (meio + menor)){
        cout << "NAO FORMA TRIANGULO" << endl;
    }else{
        //compare agora se forma triangulo retangulo
        if(maior * maior == meio * meio + menor * menor){
            cout << "TRIANGULO RETANGULO" << endl;
        }
        //Compare se é um trianngulo obtusangulo
        if(maior * maior > meio * meio + menor * menor){
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        //compare se é triangulo acutangulo
        if(maior * maior < meio * meio + menor * menor){
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        //compare se é equitaleto
        if(maior == menor && maior == meio && meio == menor){
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        //Compare se é isoceles - 2 lados iguais apenas
        if((maior==meio && meio != menor)){
            cout << "TRIANGULO ISOSCELES" << endl;
        }else if((maior==menor && meio != menor)){
            cout << "TRIANGULO ISOSCELES" << endl;
        }else if((menor==meio && meio != maior)){
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
}