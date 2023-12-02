#include <iostream>
using namespace std;


int main(){
    //Cire espaço para armazenar hora final e inicial, e minuto final e inicial
    int hora_inicial, minuto_inicial, hora_final, minuto_final;
    //leia as vairáveis
    cin >> hora_inicial >> minuto_inicial >> hora_final >> minuto_final;
    // crie a vairavel para receber a operação entre as horas e os minutos
    int hora=0, minuto=0;
    hora = hora_final - hora_inicial;
    minuto = minuto_final - minuto_inicial;
    if(hora > 0){
        if(minuto == 0){
            minuto = 0;
        }else if(minuto < 0){
            hora = hora - 1;
            minuto = minuto + 60;
        }
    }else if(hora == 0){
        if(minuto == 0){
            hora = 24;
            minuto = 0;
        }else if(minuto < 0){
            hora = hora + 24 - 1;
            minuto = minuto + 60;
        }
    }else if(hora < 0){
        if(minuto==0){
            hora = hora + 24;
        }else if(minuto > 0){
            hora = hora + 24;
        }else if(minuto < 0){
            hora = hora + 24 - 1;
            minuto = minuto + 60;
        }
    }
   
    cout << "O JOGO DUROU " << hora << " HORA(S) E " << minuto << " MINUTO(S)" << endl; 
}