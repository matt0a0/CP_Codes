#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Crie a variavel idade(inteiro)
    int idade;
    //leia a variavel idade
    cin >> idade;
    //crie a variável anos(inteiro)
    int anos;
    //Calcule quantos anos a pessoa tem, a partir da divisao entre a sua idade em dias e os dia do ano (idade/365)
    //atribuia esse calculo a variavel anos
    anos = (idade / 365);
    //crie a variável meses(inteiro)
    int meses;
    //Calcule a partir do resto dos anos a divisão por 12 meses (idade % 365) / 12
    //atribua a variavel meses
    meses = (idade % 365) / 30;
    //crie a variável dias(inteiro)
    int dias;
    //obtenha os dias a partir do resto dos meses (idade % 365) % 12
    dias = (idade % 365) % 30;
    // escreva no formado 1 ano(s) 1 mes(es) 5 dia(s) com quebras de linha
    cout << anos << " ano(s)\n" << meses << " mes(es)\n" << dias << " dia(s)" << endl;
    return 0;
}