#include <iostream>

using namespace std;

int main(){

    // Criando uma enumeração chamada semana.
    enum semana{
        seg,
        ter,
        qua,
        qui,
        sex,
        sab,
        dom
    };

    semana dia_atual = seg;

    cout << "Dia da semana: " << dia_atual << "\n";

    return 0;
}