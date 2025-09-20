#include <iostream>
#include <string.h>

using namespace std;

//prototipação de função.
void text(); // apresentando função futura.
void text(int y);
int sum(int a = 0, int b = 0); // possibilitando um valor padrão caso não receba nenhum parâmetro.
int fatorial(int n);

// main é a função principal do programa.
int main(int argc, char *argv[]){ // o argc armazena a quantidade de parâmentros passados e o *argc[] os argumentos.
    
    cout << argv[0] << "\n"; // o primeiro argumento, por padrão, é o nome do programa.
    cout << argv[1] << "\n"; // argumento passado ao executar o programa.

    cout << argc << "\n"; // quantidade da argumentos.

    // verifica se usuário passou parâmetro.
    if(argc > 1){
        if(!strcmp(argv[1], "lua")){ // compara a igualdade entre 2 strings.
            cout << "Louvada seja a Dama!\n";
        } else {
            cout << "Praise the Sun!\n";
        }
    }
    // execuntado função.
    text();
    cout << sum(4, 8) << "\n";
    cout << sum(4) << "\n";
    cout << sum() << "\n";
    text(4);
    cout << fatorial(8) << "\n";

    return 0;
}

// perceba-se que para uma função estar abaixo da main, devemos apresenta-lá anteriormente.
void text(){
    cout << "Hello world!\n";
}

// embora tenha o mesmo nome da anterior, o compilador diferencia por causa de diferentes parâmetros.
void text(int y){
    for(int x = 0; x < y; x++){
        cout << "One more time...\n";
    }
}

int sum(int a, int b){
    return a + b;
}

// recursão
int fatorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * fatorial(n-1);
}