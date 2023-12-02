#include <iostream>
using namespace std;


int main(){
    //Crie espaço na memoria para dois valores inteiros
    int a;
    int b;
    // Leia esses valores
    cin >> a >> b;
    //Compare se são multiplos ( resto de a dividido por b é zero ou o contrario)
    if(a%b==0 || b%a==0){
        //Escreva que são multiplos
        cout << "Sao Multiplos\n";
    }//caso contrário
    else{
        // escreva que não não multiplos
        cout << "Nao sao Multiplos\n";
    }
    
}