#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    // Crie quatro espaços na memória de numeros de ponto flutuante(double)
    double n1,n2,n3,n4;
    //Leia essas variáveis
    cin >> n1 >> n2 >> n3 >>n4;
    //Crie um espaço na mem para a média
    double media = 0;
    //Calcule a média atribuindo os pesos  2, 3, 4 e 1 e atribua esse calculo a variável "media"
    media = (n1*2 + n2*3 + n3*4 + n4*1)/10.0;
    //formate a saída para ter apenas uma casa de precisão
    cout << fixed << setprecision(1);
    //Escreva a média
    cout << "Media: "<< media << endl;
    // Crie uma string resposta com a atribuição 
    string resposta = "Aluno reprovado.";
    //Compare se media >= 7
    if(media >= 7.0){
        // Atribua a variavel resposta Aluno aprovado
        resposta = "Aluno aprovado.";
    }//Caso contrário compare se media >= 5 e <= 6.9
    else if(media>= 5 &&  media <=6.9){
        //Atribua a resposta como Aluno em exame
        resposta = "Aluno em exame.";
        // escreva que o aluno está em exame
        cout << resposta << endl;
        //Crie um espaço na mem para a nova nota do aluno (double)
        double nova_nota;
        //leia a nova nota
        cin >> nova_nota;
        //Escreva a nova nota do exame
        cout << "Nota do exame: " << nova_nota << endl;
        // Calcule a nova média a partir da soma da média anterior a essa nova nota e divida por 2
        media = (media + nova_nota)/2.0;
        //Compare se nova media >=5
        if(media >= 5){
            // Mude a resposta para Aprovado
            resposta = "Aluno aprovado.";
        }// Caso contrario mude a resposta agora para reprovado
        else{
            resposta = "Aluno reprovado.";
        }
        //eSCREVA A resposta
        cout << resposta << endl;
        //Escreva a media final do alino
        cout << "Media final: " << media << endl;
        // Finalize a execução do código aqui
        return 0;
    }//Caso contrario apenas mantenha a resposta em Aluno reprovado
    //Escreva agora a resposta
    cout << resposta << endl;
}