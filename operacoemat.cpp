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
    altura = 1,70;
    genero = 'M';
    nome = "Leo Felipe dos Santos Pinto";

    cout << fixed << setprecision(5);
    cout << "IDADE: " << idade << endl;
    cout << "SALARIO: " << altura << endl;
    cout << "ALTURA: " << altura << endl;
    cout << "GENERO: " << genero << endl;
    cout << "NOME: " << nome << endl;

    return 0;

}