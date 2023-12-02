#include <iostream>
using namespace std;


int main(){
    double d=0;
    cin >> d;
    int aux =0;
    aux = int(d);
    cout << "NOTAS:\n";
    cout << aux / 100 << " nota(s) de R$ 100.00\n";
    cout << (aux % 100)/50 << " nota(s) de R$ 50.00\n";
    cout << ((aux % 100)%50)/20 << " nota(s) de R$ 20.00\n";
    cout << (((aux % 100)%50)%20)/10 << " nota(s) de R$ 10.00\n";
    cout << ((((aux % 100)%50)%20)%10)/5 << " nota(s) de R$ 5.00\n";
    cout << (((((aux % 100)%50)%20)%10)%5)/2 << " nota(s) de R$ 2.00\n";
    cout << "MOEDAS:\n";
    cout << (((((aux % 100)%50)%20)%10)%5)%2 << " moeda(s) de R$ 1.00\n";
    //Para os centavos
    int aux_real =0;
    aux_real = (d - aux) * 100;
    cout << aux_real / 50 << " moeda(s) de R$ 0.50\n";
    cout << (aux_real % 50) / 25 << " moeda(s) de R$ 0.25\n";
    cout << ((aux_real % 50) % 25) / 10 << " moeda(s) de R$ 0.10\n";
    cout << (((aux_real % 50) % 25) % 10) / 5 << " moeda(s) de R$ 0.05\n";
    cout << ((((aux_real % 50) % 25) % 10) % 5)/1 << " moeda(s) de R$ 0.01" << endl;

}