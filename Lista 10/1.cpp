#include <iostream>
#include <string>
using namespace std;

#define ANO_ATUAL 2023

class Data {
    private:
        int dia;
        int mes;
        int ano;
        int hora;
        int min;
    
    public:
        int getDia(){return dia;}
        int getMes(){return mes;}
        int getAno(){return ano;}
        int getHora(){return hora;}
        int getMin(){return min;}
        bool setData(int dia, int mes, int ano){
            return(setAno(ano) && setMes(mes) && setDia(dia));
        }
        bool setHorario(int hora, int min){
            return (setHora(hora) && setMin(min));
        }
    
    private:
        bool setDia(int dia){
            //Fevereiro
            if(this->mes == 2){
                //Ano bissexto
                if(this->ano % 4 == 0){
                    if(dia>=1 && dia <=29){
                        this->dia = dia;
                        return true;
                    }
                }
                else{
                    if(dia>=1 && dia <=28){
                        this->dia = dia;
                        return true;
                    }
                }
            }
            //(Abril e Junho) || (Setembro e Novembro)
            else if((this->mes % 2 == 0 && this->mes < 7) || (this->mes % 2 == 1 && this->mes > 7)){
                if(dia>=1 && dia <=30){
                    this->dia = dia;
                    return true;
                }
            }
            //Janeiro, Março, Maio, Julho, Agosto, Outubro, Dezembro
            else{
                if(dia>=1 && dia <=31){
                    this->dia = dia;
                    return true;
                }
            }
            return false;
        }
        bool setMes(int mes){
            if(mes>=1 && mes<= 12){
                this->mes=mes;
                return true;
            }
            return false;
        }
        bool setAno(int ano){
            if(ano >= 0 && ano<=ANO_ATUAL){
                this->ano = ano;
                return true;
            }
            return false;
        }
        bool setHora(int hora){
             //Formato 24 horas
            if(hora >= 0 && hora<=23){
                this->hora = hora;
                return true;
            }
            return false;
        }
        bool setMin(int min){
            if(min >= 0 && min <= 59){
                this->min = min;
                return true;
            }
            return false;
        }
    
    public:
        void mostraData(){
            cout << dia << "/" << mes << "/" << ano << endl;
        }
        void mostraHorario(){
            cout << hora << ":" << min <<endl;
        }
};

class Cliente{
    string nome;
    string cpf;
    Data cadastro;
};

class Veiculos {
    private:
        int cod;
        string placa;
        string modelo;
        Data entrada;
        Data saida;
        float preco;
        Cliente cliente;

};

int main(){
    Data data;
    int dia, mes, ano;
    int hora, min;
    cout << "running"<<endl;
    cin >> dia >> mes >> ano;
    while(!data.setData(dia, mes, ano)){
        cin >> dia >> mes >> ano;
    }
    data.mostraData();
    cin >> hora >> min;
    while(!data.setHorario(hora, min)){
        cin >> hora >> min;
    }
    data.mostraHorario();


    return 0;
}