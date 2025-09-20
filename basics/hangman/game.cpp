#include <iostream>
#include <cstring>

//to-do: tratar case das letras e entrada não númerica.

using namespace std;

int main(){
    char answer[30]; // palavra a ser adivinhada.
    int opt_answer; // opção escolhida pelo player.
    char player_answer[30]; // palavra escolhida pelo player.
    char player_char_answer; // letra escolhida pelo player.
    int attempts = 3; // quantidade de vidas.
    int correct = 0; // quantidade de letras certas.
    
    cout << "Insira a palavra a ser adivinhada: ";
    cin >> answer;
    // obtendo a quantidade de letras da palavra.
    int len = 0;
    while(answer[len] != '\0'){
        len++;
    }
    // criando a palavra visual, aquela que contém apenas as letras já adivinhadas.
    char visual_answer[30];
    for(int x = 0; x < len; x++){
        visual_answer[x] = '_';
    }
    system("clear");
    // loop do jogo
    while(attempts > 0 && correct < len){ // enquanto a vida não acabar e os acertos serem menor que a palavra.
        // imprimir "gráficos".
        cout << "Vidas restantes: " << attempts;
        cout << "\n\n\n";
        cout << visual_answer;
        cout << "\n\n\n";
        // verifica se falta só uma letra
        if(correct + 1 == len){
            cout << "Adivinhe a palavra agora: ";
            cin >> player_answer;
            if(strcmp(player_answer, answer) == 0){ // strcmp compara de 2 strings são iguais.
                correct = len;
            } else {
                attempts = 0;
            }
            break;
        } else {
            cout << "[1]. Inserir letra \n[2]. Adivinhar palavra \nEscolha: ";
            cin >> opt_answer;
        }
        
        // escolha do player
        switch(opt_answer){
            case 1:
            // se errar perde vida ou atualiza a resposta visual.
                // ao faltar 1 letra correta o player é obrigado a adivinhar a palavra.
                system("clear");
                cout << "Vidas restantes: " << attempts;
                cout << "\n\n\n";
                cout << visual_answer;
                cout << "\n\n\n";
                cout << "Digite a Letra: ";
                cin >> player_char_answer;

                // lógica da letra.
                bool is_on;
                is_on = false;
                for(int x = 0; x < len; x++){
                    if(player_char_answer == answer[x]){
                        visual_answer[x] = answer[x];
                        correct++;
                        is_on = true;
                    }
                }
                if(is_on){
                    cout << "Acertou a letra! \n";
                    system("clear");
                } else {
                    system("clear");
                    cout << "Errou a letra! \n";
                    attempts--;
                }
                break;
            case 2:
                // se errar perde tudo ou ganha.
                system("clear");
                cout << "Vidas restantes: " << attempts;
                cout << "\n\n\n";
                cout << visual_answer;
                cout << "\n\n\n";
                cout << "Digite a Palavra: ";
                cin >> player_answer;
                
                // lógica para verificar se adivinhou com sucesso.
                if(strcmp(player_answer, answer) == 0){ // strcmp compara de 2 strings são iguais.
                    correct = len;
                } else {
                    attempts = 0;
                }
                break;

            default:
                // caso não exista a opção
                system("clear");
                cout << "Opção Inválida!\n\n";
                break;
        }
    }
    // verificação final do resultado!
    if(correct == len){
        system("clear");
        cout << "Certa resposta!\n";
    } else {
        system("clear");
        cout << "Errou mané!\n";
    }
    return 0;
}