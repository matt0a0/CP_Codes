#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    double renda =0,renda_auxiliar=0;
    double ajuste = 0;
    cin >> renda;

    if(renda >= 0 && renda <=2000){
        cout << "Isento" << endl;
        return 0;

    }else if(renda > 2000 && renda <= 3000){
        renda_auxiliar = renda - 2000;
        ajuste = renda_auxiliar * 0.08;

    }else if(renda >3000 && renda <= 4500){
        renda_auxiliar = renda - 3000;
        ajuste = renda_auxiliar * 0.18 + 1000 * 0.08;

    }else if(renda > 4500){
        renda_auxiliar = renda - 4500;
        ajuste = renda_auxiliar * 0.28 + 1500 * 0.18 + 1000 * 0.08;

    }
    cout << fixed << setprecision(2);
    cout << "R$ " <<ajuste << endl;
}