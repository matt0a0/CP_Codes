#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    // Crie espaço na memória - double para a variavel salary
    double salary;
    // Leia a variavel salary
    cin >> salary;
    // crie a variavel percent_calc na memória com espaço double
    double percent_calc;
    //Crie na mem um espaço para uma string - Percent
    string percent = "";
    // COmpare se a o salario está entre 0 e 400
    if (salary >=0 && salary <= 400){
        // Faça o calculo da porcentagem a ser adicionada
        // Faça o calculo do salário com a adição da porcentagem
        // atribua a variavel percent o texto
        percent_calc = (salary * 15.0)/100.0;
        salary = salary + percent_calc;
        percent = "Em percentual: 15 %";

    }// caso contrario compare se esta entre 400.01 e 800
    else if(salary > 400 && salary <= 800){
        // Faça o calculo da porcentagem a ser adicionada
        // Faça o calculo do salário com a adição da porcentagem
        // atribua a variavel percent o texto
        percent_calc = (salary * 12.0)/100.0;
        salary = salary + percent_calc;
        percent = "Em percentual: 12 %";

    }// Caso contrario compare se o slario esta > 800 e <= 1200
    else if(salary > 800 && salary <= 1200){
        // Faça o calculo da porcentagem a ser adicionada
        // Faça o calculo do salário com a adição da porcentagem
        // atribua a variavel percent o texto
        percent_calc = (salary * 10.0)/100.0;
        salary = salary + percent_calc;
        percent = "Em percentual: 10 %";

    }//caso contrario compare se esta > 1200 e <= 2000
    else if(salary > 1200 && salary <= 2000){
        // Faça o calculo da porcentagem a ser adicionada
        // Faça o calculo do salário com a adição da porcentagem
        // atribua a variavel percent o texto
        percent_calc = (salary * 7.0)/100.0;
        salary = salary + percent_calc;
        percent = "Em percentual: 7 %";

    }//caso contrario compare se acima de 2000
    else if(salary > 2000){
        // Faça o calculo da porcentagem a ser adicionada
        // Faça o calculo do salário com a adição da porcentagem
        // atribua a variavel percent o texto
        percent_calc =(salary * 4.0)/100.0;
        salary = salary + percent_calc;
        percent = "Em percentual: 4 %";
    }
    // set a precião para 2 casas decimais
    cout << fixed << setprecision(2);
    // escreva agora o novo salario
    cout << "Novo salario: " << salary << endl;
    // escreva o valor do reajuste calculado
    cout << "Reajuste ganho: " << percent_calc << endl;
    // escreva agora o que está armazenado na variável de string
    cout << percent << endl;
}