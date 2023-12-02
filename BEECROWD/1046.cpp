#include <iostream>
using namespace std;


int main(){
    //Crie espaço na memoria para dois valores inteiros
    int inicial,final;
    //Atribua valores a esses espaços por meio da leitura dos inputs
    cin >> inicial >> final;
    //Crie um espaço na memoria para lidar com as operações entre o inicio e o fim
    int opr =0;
    // 1 Caso - Começa e termina no mesmo dia
    if(inicial < final ){
        opr = final - inicial;
    }// Caso contrario Caso 2 - Quando começa em um dia e termina em outro dia no mesmo horário
    else if (inicial==final){
        opr = 24;
    }//Caso contrario Caso 3, começa em um dia e termina no outro em outro horario
    else if(inicial > final){
        opr = (24 - inicial) + final;
    }
    //Escreva o resultado da operação
    cout << "O JOGO DUROU " << opr << " HORA(S)" << endl;
}