#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double v1, v2; // Declarando 2(duas) váriáveis do tipo double; 
    cout << "Digite um numero: ";
    cin >> v1; // Recebendo um número do usuário e armazenando na váriavel v1; 
    double* ptr1 =& v2;  
    *ptr1 = v1;
    cout << "\nO valor de V2(dobro de v1) " << 2 * v2; // Ps. a expressão \n é pra uma quebra de linha
    cout << " \n\nO valor de V1 " << v1; 

    return 0;
}