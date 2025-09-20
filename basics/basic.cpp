#include <iostream> // biblioteca para comandos básicos de entrada e saída.

// indicando onde está as bibliotecas utilizadas.
using namespace std;

// define é usado na criação de macros que por sua vez, vão permitir as opções abaixo.
#define pi 3.1415; // criando uma constante.
#define comprimentar cout << "Bom dia!\n"; // associando um comando a uma constante.

int n1 = 5; // variável global

// função principal do programa.
int main(){
    
    // print.
    cout << "Hello world!" << "\n";

    // variáveis locais da função main.
    int idade = 15, ano_nasc = 2010;
    char tipo_sangue = 'A';
    double preciso;
    float menos_preciso;
    bool existe = false;
    string nome = "Joãozinho";

    cout << idade << "\n";
    cout << tipo_sangue << "\n";
    cout << existe << "\n";
    cout << nome<< "\n";

    // entrada do teclado.
    //cin >> nome;

    cout << "Olá " <<nome << "\n";

    // usando uma constante, magia da "macro".
    comprimentar

    // operadores matemáticos: + - / * % ().
    int n2 = 10;
    int n3 = n1 + n2; // soma de variáveis.
    cout << n3 << "\n";

    // incremento.
    n1 += 1;
    n3 *= 2;

    n2++; // pós incremento. utiliza primeiro e incrementa depois.
    --n2; // pré decremento.

    cout << ++n1 << "\n";

    // invertendo um valor
    n1 = -n1

    return 0;
}