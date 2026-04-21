#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale.h>

using namespace std;


int numero_Secreto;
int palpite;
int tentativas = 0;

void gerar_Numero_Secreto();
void jogar();
void verificar_Palpite();

int main() {
    system(pause);
  
    jogar();

    return 0;
}


void gerar_Numero_Secreto() {
    srand(time(0)); 
    numero_Secreto = rand() % 101; 
}


void jogar() {
    gerar_Numero_Secreto();

    cout << "--- JOGO DE ADIVINHACAO ---" << endl;
    cout << "Tente acertar o numero entre 0 e 100!" << endl;

    
    do {
        cout << "\nDigite seu palpite: ";
        cin >> palpite;

        
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Por favor, digite apenas numeros!" << endl;
            continue;
        }

        tentativas++; 
        verificar_Palpite(); 

    } while (palpite != numero_Secreto); 
}


void verificar_Palpite() {
    if (palpite == numero_Secreto) {
        cout << "BOA! Voce acertou em " << tentativas << " tentativas!" << endl;
    } 
    else if (palpite < numero_Secreto) {
        cout << "O numero secreto e MAIOR que " << palpite << "." << endl;
    } 
    else {
        cout << "O numero secreto e MENOR que " << palpite << "." << endl;
    }
}
