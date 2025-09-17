#include <iostream>

using namespace std;

int main(){

    int n = 10;
    char a = 'B';

    // teste lógico: > < <= >= == !=
    if(n >= 10){
        cout << "Passou!" << "\n";
    } else {
        cout << "Não Passou!" << "\n";
    }

    // +operadores: and or not
    if((n > 5 && a == 'A') || !(n != 10)){
        cout << "Algo deu certo ai!" << "\n";
    } else {
        cout << "Nadinha deu bom!" << "\n";
    }

    // calculando nota.
    int n1, n2, nota;
    string res;
    
    cout << "Digite n1: ";
    cin >> n1;
    
    cout << "Digite n2: ";
    cin >> n2;
    
    nota = n1 + n2;
    
    // operador ternário para testes.
    (nota >= 60) ? res = "Aprovado" : res = "Reprovado"; // equivale a um if e else.

    cout << "\n Situação: " << res << "\n";

    // fundo do poço.

    goto inicio;
    cout << "Vou ser pulado!"
    inicio:

    // switch case.
    switch(a){
        case a == 'A';
            // ...
            break
        case a == 'B';
            // ...
            break
        default:
            // ...
    }


    return 0;
}