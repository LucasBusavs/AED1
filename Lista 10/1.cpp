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
        Data(){
            dia = 1;
            mes = 1;
            ano = 1;
            hora = 0;
            min = 0;
        }
        
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
    private:
        string nome;
        string cpf;
        Data cadastro;

    public:
        Cliente(){
            nome = "";
            cpf = "";
        }

        string getNome(){ return nome;}
        string getCPF(){ return cpf;}
        Data getCadastro(){ return cadastro; }
        
        void cadastrar(){
            string nome, cpf;
            int dia, mes, ano;
            int hora, min;
            cout << "Entre com o nome do cliente: ";
            cin >> nome;
            while(!setNome(nome)){
                cout << "Nome invalido, Entre novamente: ";
                cin >> nome;
            }
            cout << "Entre com o CPF do cliente: ";
            cin >> cpf;
            while(!setCPF(cpf)){
                cout << "CPF invalido, Entre novamente: ";
                cin >> cpf;
            }
            cout << "Entre com a data do cadastro(dia mes ano): ";
            cin >> dia >> mes >> ano;
            while(!cadastro.setData(dia, mes, ano)){
                cout << "Data invalida. Entre novamente com a data do cadastro(dia mes ano): ";
                cin >> dia >> mes >> ano;
            }
            cout << "Entre com o horario do cadastro(hora minuto): ";
            cin >> hora >> min;
            while(!cadastro.setHorario(hora, min)){
                cout << "Horario invalido. Entre novamente com o horario do cadastro(hora minuto): ";
                cin >> hora >> min;
            }
            cout << "CADASTRO REALIZADO COM SUCESSO" << endl;
        }

        void info(){
            cout << "Nome: " << nome << endl;
            cout << "CPF: " << cpf << endl;
            cadastro.mostraData();
            cadastro.mostraHorario();
        }

    private:
        bool setNome(string nome){
            if(nome.length() > 0){
                this->nome = nome;
                return true;
            }
            return false;
        }
        bool setCPF(string cpf){
            if(cpf.length() == 11){
                this->cpf = cpf;
                return true;
            }
            return false;
        }
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
    Cliente cliente;
    /*
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
    */
    //cliente.cadastrar();
    cliente.info();

    return 0;
}