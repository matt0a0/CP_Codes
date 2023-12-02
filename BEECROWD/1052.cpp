#include <iostream>
using namespace std;


int main(){
    //Cire espaço para um único valor inteiro
    int value;
    //Crie espaço para um texto
    string month = "";
    //Leia o valor inteiro
    cin >> value;
    //Compare em qual mês estaremos
    if(value == 1){
        month = "January";
    }else if(value == 2){
        month = "February";
    }else if(value == 3){
        month = "March";
    }else if(value == 4){
        month = "April";
    }else if(value == 5){
        month = "May";
    }else if(value == 6){
        month = "June";
    }else if(value == 7){
        month = "July";
    }else if(value == 8){
        month = "August";
    }else if(value == 9){
        month = "September";
    }else if(value == 10){
        month = "October";
    }else if(value == 11){
        month = "November";
    }else if(value == 12){
        month = "December";
    }
    cout << month << endl;

}