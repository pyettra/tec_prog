#include <stdio.h>

// HEADER: arquivo que mantém informações referentes a classe. Tem a extensão .h e são necessários para
// compilação do projeto quando utilizados no arquivo principal (extensão .cpp).
// Obs: a extensão também pode ser do tipo .hpp
// É utilizado para diminuir o acoplamento e aumentar a coesão dos projetos, organizando-os.

struct Pessoa {
    // attributes
    private:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;

    // methods
    // Nessa primeira versão, fazemos a declaração dos métodos e sua estrutura dentro da classe Pessoa.h
    // Aqui, o header terá acesso tanto aos métodos como às variáveis da Pessoa
    public:
    Pessoa(int diaNa, int mesNa, int anoNa) {
        diaP = diaNa;
        mesP = mesNa;
        anoP = anoNa;
    }

    void Calcula_Idade(int diaAt, int mesAt, int anoAt) {
        idadeP = anoAt - anoP;

        if (mesP < mesAt) {
            idadeP = idadeP - 1;
        } else {
            if (mesP == mesAt) {
                if (diaP < diaAt) {
                    idadeP = idadeP - 1;
                }
            }
        }
    }

    int informaIdade() {
        return idadeP;
    }
};