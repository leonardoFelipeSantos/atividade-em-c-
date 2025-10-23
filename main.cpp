#include <iostream> // Substitui <stdio.h> para entrada e Saída
#include <cstdlib>   // Substitui <stdlib.h> para std:system

// Funcao principal do programa (padrão cc+)
int main() { 


    // Imprime natela usando std : :cout
    std::cout << "Oí, mundo!";


    // Pausa o programa apos executar 
    // Adicionamos  uma quebra  de linha para a mensagem "pause" não ficar colada
    std::cout << "\n";
    std::system("pause"); // Em C++, é boa prática usar std::system
    
    return 0; // int main() deve retornar 0
}