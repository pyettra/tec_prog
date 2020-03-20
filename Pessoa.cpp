#include <stdio.h>
#include "Pessoa.h"

// O arquivo do tipo .cpp funciona como a main do projeto. 

int main() {
    // Criação de objetos do tipo Pessoa.
    // Cada elemento criado a partir de uma classe é um Objeto.
    Pessoa Einstein(14, 3, 1879);
    Pessoa Newton(4, 1, 1643);

    Einstein.Calcula_Idade(17, 3, 2020);
    Newton.Calcula_Idade(17, 3, 2020);


    // Aqui, ainda não há encapsulamento da funcionalidade de printar o resultado.
    // Uma otimização possível é criar um método dentro da classe Pessoa para essa ação
    printf("Einstein teria %d\n", Einstein.informaIdade());
    printf("Newton teria %d\n", Newton.informaIdade());

    getchar();
    return 0;
}