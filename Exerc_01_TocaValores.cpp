#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

// Método ou função para trocar o valor de dois numeros
void trocaValores(int* p_a, int* p_b)
    {
        int auxiliar;
        auxiliar = *p_a;
        *p_a = *p_b;
        *p_b = auxiliar;
    }

// Trocando valores usando apontadores
int main()
    {
    int a, b;
  

        cout << "\n";
        cout << "Introduza um numero: ";
        cin >> a;
        cout << "Introduza mais um numero: ";
        cin >> b;

        cout << "\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";

        cout << "\n";
        cout << "O primeiro numero introduzido foi o ----------------------------------> " << a << endl;
        cout << "O segundo numero introduzido foi o -----------------------------------> " << b << endl;
        cout << "\n";

        trocaValores(&a, &b);
        
        cout << "XXXXXXXXXXXXXXXXXXXXXXXXXX Depois de efetuada a Troca ";
        cout << "XXXXXXXXXXXXXXXXXXXXXXXXXX\n\n";
        cout << "O primeiro numero introduzido ficou com o valor-----------------------> " << a << endl;
        cout << "O segundo numero introduzido ficou com o valor -----------------------> " << b << endl;
        cout << "\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n\n\n\n\n\n";


    }



