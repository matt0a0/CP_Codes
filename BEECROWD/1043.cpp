#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    //Crie espaço na mem para a variavel real A
    double a;
    //Crie espaço na memória para a variável B
    double b;
    //Crie espaço na memória para a variável C
    double c;
    //Crie espaço na memória para uma variavel texto - String
    string texto = "";
    // Crie e variavel real calculo na memória
    double calculo;
    // Leia as 3 variáveis
    cin >> a >> b >> c;
    //Compare as 3 variáveis a partir da definição de um triangulo
    // Caso a + b > c
    if((a+b) > c && (a+c) > b && (c+b) > a){
        // agora atribua o calculo do perímetro a essa variável (a + b + c)
        calculo = a + b + c;
        // atribua a variavel texto, o texto Perimetro = 
        texto = "Perimetro = ";
    }//Caso contrario calcule a area do trapézio com C SENDO A ALTURA
    else{
        //realize o calculo do trapezio
        //atribua a variável calc
        calculo = ((a + b) * c)/2.0;
        // atribua a variavel texto, o texto Area = 
        texto = "Area = ";
    }
    //Escreva por fim o valor obtivo com precisao de 1 CASA DECIMAL
    cout << fixed << setprecision(1);
    cout << texto << calculo << endl; 
}