#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


int main(){
    double a, b, c;
    cin >> a >> b >> c;
    double delta =0;
    delta = (b * b) - (4 * a * c);
    string res = "Impossivel calcular";
    if(delta < 0 || a == 0){
        cout << res << endl;
    }else{
        double x1 = 0;
        x1 = ((b * -1) + sqrt(delta)) / (2.0 * a);
        double x2 = 0;
        x2 = ((b * -1) - sqrt(delta)) / (2.0 * a);
        cout << fixed << setprecision(5);
        cout << "R1 = " << x1 << endl;
        cout << "R2 = " << x2 << endl;
    }
}