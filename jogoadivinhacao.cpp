#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <string.h>

using namespace std;



int main (){

    cout << "******************************************"<< endl;
    cout << "*    Bem-Vindos ao jogo da adivinhação   *"<< endl;
    cout << "******************************************"<< endl;
    cout << "*   Tente advinhar qual o numero que eu  *"<< endl;
    cout << "*    estou pensando de 1 à 100 e você    *"<< endl;
    cout << "*      terá 5 chances para conseguir     *"<< endl;
    cout << "******************************************"<< endl;

    int numeroSecreto, chute, acertou, totalDeTentativas;
    
    srand(time(0));
    numeroSecreto = rand() % 100;
    
    cout << numeroSecreto;

    cout << "Qual é o seu chute?";
    cin >> chute;

    cout << "O valor do seu chute é : " << chute;

    if(chute == numeroSecreto){
        cout << "Parabéns! Você acertou o numero secrteto!" << endl;
    }else if(chute > numeroSecreto){
        cout << "Seu chute foi meior que o número secreto!" << endl;
    }else{
        cout << "Seu chute foi menor que o número secreto!" << endl;
    }

}