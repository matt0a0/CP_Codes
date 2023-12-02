#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Crie a variável de tempo - Segundos(inteiro)
    int tempo;
    //Leia a variável de tempo 
    cin >> tempo;
    //Crie a variável horas
    int horas;
    //Realize o calculo para horas tempo / 3600
    //Atribua esse calculo para a variável horas
    horas = tempo/3600;
    //Crie a variável minutos
    int minutos;
    //Realize o calculo para obter os minutos (tempo % 3600) / 60
    //Atribua esse calculo para a variável minutos
    minutos = (tempo % 3600) / 60;
    //Crie a variável segundos
    int segundos;
    //Realize o calculo para obter os minutos (tempo % 3600) % 60
    //Atribua esse calculo para a variável segundos
    segundos = (tempo % 3600) % 60;
    //Ecreva uma saída com as variaveis : horas,minutos e segundos separadas por :
    cout << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}