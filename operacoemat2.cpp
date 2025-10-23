#include <iostream>
#include <iomanip>
#include <string> 
 
using namespace std;

int main()
{
    int idade;
    double salario, altura;
    char genero;
    string nome; 

    idade = 16;
    salario = 5.000;
    altura = 1,54;
    genero = 'M';
    nome = "Josué Argenis Fuentes Osorio";

    cout << fixed << setprecision(4);
    cout << "IDADE: " << idade << endl;
    cout << "SALARIO: " << salario << endl;
    cout << "ALTURA: " << altura << endl;
    cout << "GENERO: " << genero << endl;
    cout << "NOME: " << nome << endl;

    return 0;

} 


