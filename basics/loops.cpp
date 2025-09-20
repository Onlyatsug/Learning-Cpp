#include <iostream>

using namespace std;

int main(){
    
    // loop enquanto
    int n = 1;
    while(n <= 10){
        cout << n << "\n";
        n++;
        if(n == 5){
            break;
        }
    }

    n = 2;
    // loop faça enquanto
    do{
        cout << "Vou ser executado pelo menos 1 vez!" << "\n";
        n--;
    } while(n > 0);



    // loop para

    int x, y;
    for(x = 0, y = 0; x <= 1000; x++, y += 2){
        cout << x << y << " Ebaa!" << "\n";
    }

    return 0;
}