#include <iostream>
#include <string>
#define MAX 10

using namespace std;

struct Tutor {
    int id;
    string nome;
    string endereco;
};

struct Animal {
    int id;
    string nome;
    string especie;
    string idade;
};

// Procedimento para exibir um menu de instruções
void mostrarMenu() {
    cout << "\n#################### MENU ####################\n";
    cout << "1 - Para cadastrar um tutor.\n";
    cout << "2 - Para cadastrar um animal.\n";
    cout << "3 - Para listar os tutores cadastrados.\n";
    cout << "4 - Para listar os animais cadastrados.\n";
    cout << "5 - Para buscar o animal pelo id do tutor.\n";
    cout << "6 - Relatorio geral.\n";
    cout << "0 - Para sair.\n";
    cout << "##############################################\n\n";
    cout << "Digite sua opcao: ";
}

// Procedimento para cadastrar o tutor
void CadTutor(Tutor vet[], int i) {

    cout << "Digite o ID do tutor: ";
    cin >> vet[i].id;
    cin.ignore();

    cout << "Digite o nome do tutor: ";
    getline(cin, vet[i].nome);

    cout << "Digite o endereço do tutor: ";
    getline(cin, vet[i].endereco);
}

// Procedimento para cadastrar o animal
void CadAnimal(Animal vet[], int i) {
    cout << "Digite o ID do animal: ";
    cin >> vet[i].id;
    cin.ignore();
    cout << "Digite o nome do animal: ";
    getline(cin, vet[i].nome);
    cout << "Digite a especie do animal: ";
    getline(cin, vet[i].especie);
    cout << "Digite a idade do animal: ";
    getline(cin, vet[i].idade);
}

// Procedimento para mostrar os tutores cadastrados
void mostrarTutores(Tutor vet[], int n) {
  for (int i = 0; i<n; i++){
    cout << "-----------------------------------\n";
    cout << "ID: "<< vet[i].id << endl;
    cout << "Nome: " << vet[i].nome << endl;
    cout << "Endereco: " << vet[i].endereco << endl;
  }
cout << "-----------------------------------\n";
}

// Procedimento para mostrar os animais cadastrados
void mostrarAnimais(Animal vet[], int n) {
  for (int i = 0; i<n; i++){
    cout << "-----------------------------------\n";
    cout << "ID: "<< vet[i].id << endl;
    cout << "Nome: " << vet[i].nome << endl;
    cout << "Especie: " << vet[i].especie << endl;
    cout << "Idade: " << vet[i].idade << endl;
  }
cout << "-----------------------------------\n";
}

int main(){
    // Declarar um vetor de animais e tutores
    Tutor listaTutor [MAX];
    Animal listaAnimal [MAX];

    // Contador de tutores
    int contTutores = 0;
    int opcao;
    int contAnimais = 0;

    while(true) {
        mostrarMenu();
        cin >> opcao;

        if(opcao == 0){
            break;
        }

        switch(opcao) {
            case 1: //cadastrar um tutor
                CadTutor(listaTutor, contTutores);
                contTutores++;
                break;

            case 2://cadastrar um animal
                CadAnimal(listaAnimal, contAnimais);
                contAnimais++;
                break;
            case 3: //listar tutores
                mostrarTutores(listaTutor, contTutores);
                break;
            case 4: //listar Animais
                mostrarAnimais(listaAnimal, contAnimais);
                break;

            default:
                cout << "Opcao invalida. Digite novamente.\n\n";
                break;
                    }


    }
return 0;
            }









