#include <iostream>
using namespace std;


int main(){
    double values =0;
    int counter =0;
    for (int i=0; i < 6; i++){
        cin >> values;
        if(values >=0){
            counter ++;
        }
    }
    cout << counter << " valores positivos" << endl;
}