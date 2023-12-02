#include <iostream>
using namespace std;


int main(){
    //Cire espaço na memória para receber 3 variáveis do tipo texto = String
    string tipo = "", especie = "", classe = "";
    //Agora leia essas 3 variáveis
    cin >> tipo >> especie >> classe;
    //Crie uma variavel para armazenar o tipo de animal que é
    string animal = "";
    //Compare se o Tipo é vertebrado ou invertebrado
    if(tipo == "vertebrado"){
        // Compare sua espécie
        if(especie == "ave"){
            //compare sua classe
            if(classe == "carnivoro"){
                animal = "aguia";
            }else if(classe == "onivoro"){
                animal = "pomba";
            }
        //Caso contrário compare com a outro tipo
        }else if(especie == "mamifero"){    
            //compare sua classe
            if(classe == "onivoro"){
                animal = "homem";
            }else if(classe == "herbivoro"){
                animal = "vaca";
            }
        }
    //Caso cxontrario compare se é invertebrado
    }else if(tipo == "invertebrado"){
        if(especie == "inseto"){
            //compare sua classe
            if(classe == "hematofago"){
                animal = "pulga";
            }else if(classe == "herbivoro"){
                animal = "lagarta";
            }
        }else if(especie == "anelideo"){
            if( classe =="hematofago"){
                animal = "sanguessuga";
            }else if(classe == "onivoro"){
                animal = "minhoca";
            }
        }
    }
    cout << animal << endl;

}