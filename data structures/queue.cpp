#include <iostream>

#include <queue> // importando biblioteca da fila.
// to-do, implementar minha própia fila futuramente.

using namespace std;

int main(){

    // criando uma fila do tipo string.
    queue <string> skills;

    skills.push("dash");
    skills.push("double jump");
    skills.push("ultimate");

    // autodescritivo.
    cout << "tamanho da fila: " << skills.size() << "\n";
    cout << "frente da fila: " << skills.front() << "\n";
    cout << "ultimo da fila: " << skills.back() << "\n";
    
    // apagando a lista inteira
    while(!skills.empty()){
        cout << "frente atual da fila: " << skills.front() << "\n";
        skills.pop();
    }

    return 0;
}