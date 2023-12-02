#include <iostream>
using namespace std;


int main(){
    // crie espaço na memoria apra armazenar uma variável do tipo int
    int cell_number;
    //leia essa variável
    cin >> cell_number;
    //Crie uma variável que armazene o nome do estado, do tipo string
    string state = "";
    //Compare se é de algum dos estados citados de uma única vez
    if(cell_number == 61){
        state = "Brasilia";
    }else if(cell_number == 71 ){
        state = "Salvador";
    }else if(cell_number == 11 ){
        state = "Sao Paulo";
    }else if (cell_number == 21){
        state = "Rio de Janeiro";
    }else if(cell_number == 32 ){
        state = "Juiz de Fora";
    }else if(cell_number == 19){
        state = "Campinas";
    }else if(cell_number == 27){
        state = "Vitoria";
    }else if(cell_number == 37){
        state = "Belo Horizonte";
    }else{
        state = "DDD nao cadastrado";
    }
    cout << state << endl;
}