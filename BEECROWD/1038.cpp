#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    //Crie uma variável que receberá um código inteiro
    int code;
    //leia o valor do código
    cin >> code;
    //crie uma variável que irá ler a quantidade de itens
    int amount;
    //leia essa quantidade de itens
    cin >> amount;
    // compare se o valor do código é 1
    // crie uma variável total, que ira receber as muitiplicaçoes entre a quantidade e o preço do produto
    float total=0;
    if(code == 1 ){
        //faça a multiplicação entre o preço do produto com o código 1 e a quantidade de itens e atribua a variavel total
        total = amount * 4.00;
    }//caso contrario verifique se o código é 2
    else if(code == 2){
         //faça a multiplicação entre o preço do produto com o código 2 e a quantidade de itens e atribua a variavel total
        total = amount * 4.50;
    }//caso contrario verifique se o código é 3
    else if( code == 3){
         //faça a multiplicação entre o preço do produto com o código 3 e a quantidade de itens e atribua a variavel total
        total = amount * 5.00;
    }//caso contrario verifique se o código é 4
    else if(code == 4){
         //faça a multiplicação entre o preço do produto com o código 4 e a quantidade de itens e atribua a variavel total
        total = amount * 2.00;
    }//caso contrario verifique se o código é 5
    else if(code == 5){
         //faça a multiplicação entre o preço do produto com o código 5 e a quantidade de itens e atribua a variavel total
        total = amount * 1.50;
    }
    //Escreva o valor do total, acompanhado da string "Total: R$ " com precisão de 2 casas decimais
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;

}