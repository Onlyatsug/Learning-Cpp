#include <iostream>
// importando biblioteca da pilha.
#include <stack> // planejo implementar minha própria,
                 // assim que aprender as ferramentas necessárias.
using namespace std;

int main(){

    stack <string> itens; // crinando uma pilha de inteiros.

    // usando método .push da pilha para adicionar itens.
    itens.push("glasses");
    itens.push("key");
    itens.push("potion");
    itens.push("knife");

    // ver tamanho atual da pilha.
    cout << "tam_pilha: " << itens.size() << "\n";

    // ver item do topo.
    cout << "top_item: " << itens.top() << "\n";

    // tirando um elemento da pilha.
    itens.pop(); // perceba-se que somento o elemento do topo sai.
    cout << "new_top_item: " << itens.top() << "\n";



    return 0;
}