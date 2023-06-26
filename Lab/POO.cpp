#include <iostream>

struct Data{
    int dia;
    int mes;
    int ano;
};

class Exame{
    public:
        int id;
        char cpf[14];
        char nome[100];
        Data dataExame;
        bool resultado;

        Exame(){
            id = 0;
            cpf[0] = '\0';
            nome[0] = '\0';
            dataExame.dia = 0;
            dataExame.mes = 0;
            dataExame.ano = 0;
            resultado = false;
        }
        void imprimir(){
            //cout << "Id: " << id << endl;
        }
};

int main(){
    

    return 0;
}