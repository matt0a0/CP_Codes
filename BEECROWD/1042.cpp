#include <iostream>
using namespace std;


int main(){
    //Crie 3 espaços na memória do computador a b c, de valores inteiros
    int a,b,c;
    //leia os 3 valores
    cin >> a >> b >> c;
    //Crie uma mariavel auxiliar chamada maior, na memória, do tipo inteiro
    int maior;
    //Crie uma mariavel auxiliar chamada medior, na memória, do tipo inteiro
    int medio;
    //Crie uma mariavel auxiliar chamada menor, na memória, do tipo inteiro
    int menor;
    maior =0;
    medio =0;
    menor=0;
    //Compare se a é maior que b e c
    if(a>b && a>c){
         //atribua a variavel maior o valor a
        maior = a;
        //compare se b é maior que c
        if (b > c){
            //atribua medio a b e menor a c
            medio = b;
            menor = c;
        }//caso contrario medio a c e menor para b
        else{
            medio = c;
            menor = b;
        }
    }// caso contrario Compare se B é maior que a  e c
    else if(b > a && b>c){
        //atribua a variavel maior o valor a
        maior = b;
        //compare se a é maior que c
        if (a > c){
            //atribua medio a b e menor a c
            medio = a;
            menor = c;
        }//caso contrario medio a c e menor para b
        else{
            medio = c;
            menor = a;
        }
    }//caso contrario compare se b > a
    else{
        //atribua c como maior
        maior = c;
        //comapre se a > b
        if(a > b){
            // atribua a o medio e b o menor
            medio = a;
            menor = b;
        }// caso contrario atribua b o medio e a o menor
        else{
            medio = b;
            menor = a;
        }
    }
    // Escreva em ordem do menor para o maior com quebra de linha em cada um
    cout << menor << endl << medio << endl << maior << endl;
    // Escreva na ordem em que foram lidos
    cout << endl << a << endl << b << endl << c << endl;
}