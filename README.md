
# Exercises C++
**1 :**
* Crie duas variáveis do tipo *double* **v1** e **v2**;
* Receba um valor do usuário e atribua a **v1**;
* Crie um ponteiro que aponte para a **v1**;
* Imprima as váriáveis **v1** e **v2**;

**Minha resposta:**  
```cpp
#include <iostream>
using namespace std;
int main()
{
    int num;  // Declarando váriável de tipo inteiro;
    cout << "Digite um numero: "; // Requerindo um número a partir do usuário(você)
    cin >> num; // Recebendo o valor digitado acima na váriavel de tipo inteiro chamada "num"
    if(num%2 == 0) // IF checando se o número é par utilizando a expressão de resto == 0
        cout <<"1"<<endl; // Retornando 1 caso o número seja par
    else
        cout <<"0"<<endl; // Retornando 0 caso o número seja impar
    return 0; // Finalizando o código com um return 0; 
}
```
```
Fiz o que eu entendi da explicação XD
```

**2 :**
* Receba um valor inteiro do usuário;
* Usando os operadores de resto **(%)** e igualdade **(==)**;
* imprima 1 caso o número seja par;
* ou 0 caso seja impar;

**Minha resposta:**  
```cpp
#include <iostream>
using namespace std;
int main()
{
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
```

## Acessos rápidos

* [ C++ ](https://pt.wikipedia.org/wiki/C%2B%2B) 

## Licensa desse documento

Copyright 2022 Onaissac

