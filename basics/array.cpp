#include <iostream>

using namespace std;

int main(){

    int vetor[5]; // array que contém 5 inteiros.

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;

    // loop for + função sizeof que retorna o tamanho de bits do vetor.
    for(int x = 0; x < sizeof(vetor) / 4; x++){ //dividimos a função por 4, já que int representa 4 bits, retornando assim o tamanho do array.
        cout << vetor[x] << "\n";
    }
    // para evitar fazer esse processo, podemos criar uma var tamanho.
   
   // declarando e atribuindo
   int vetor2[5] = {100, 200, 300, 400, 500};


   // matrizes.
    int matriz[2][3];

    matriz[0][0] = 10;
    matriz[0][1] = 20;
    matriz[0][2] = 30;

    matriz[1][0] = 11;
    matriz[1][1] = 22;
    matriz[1][2] = 33;

    for(int x = 0; x < 2; x++ ){
        for(int y = 0; y < 3; y++){
            cout << "Row: " << x;
            cout << "\n";
            cout << "Col: " << y;
            cout << "\n";
            cout << "Valor: " << matriz[x][y];
            cout << "\n--------\n";
        }
    }
    for(int x = 0; x < 2; x++ ){
        for(int y = 0; y < 3; y++){
            cout << matriz[x][y] << " ";
        }
        cout << "\n";
    }
    
   
    return 0;
}