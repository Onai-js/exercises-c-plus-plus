#include <iostream>
using namespace std;

int main()
{
    int num;  // Declarando váriável de tipo inteiro;
    cout << "Digite um numero: "; // Requerindo um número a partir do usuário(você)
    cin >> num; // Recebendo o valor digitado acima na váriavel de tipo inteiro chamada "num"
    if (num%2 == 0) // IF checando se o número é par utilizando a expressão de resto == 0
        cout <<"1"<<endl; // Retornando 1 caso o número seja par
    else
        cout <<"0"<<endl; // Retornando 0 caso o número seja impar
    return 0; // Finalizando o código com um return 0; 
}