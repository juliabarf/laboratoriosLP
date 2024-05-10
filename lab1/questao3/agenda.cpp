#include <iostream>
#include <string>
using namespace std;

class Agenda{
    public:
        void setnomeAgenda(){
            string nome;
            int i = 0;
            while(i < 3){
                cout << "Insira o nome: " << endl;
                getline(cin, nome);
                names[i] = nomeAgenda(nome);
                i++;
            };
        };
        void getnomeAgenda(){
            for(int i = 0; i < 3; i++)
                cout << names[i] << endl;
        };
        string nomeAgenda(string nome){
            if (nome.length() < 10){
                    return nome;
                }else{
                    cout << "O programa só aceita nomes com até 10 caracteres\n";
                    nome = nome.substr(0, 9);
                    return nome; 
            };
    };
    private:
        string names[3];
};

int main(){
    Agenda agenda;

    agenda.setnomeAgenda();
    agenda.getnomeAgenda();

    return 0;
};