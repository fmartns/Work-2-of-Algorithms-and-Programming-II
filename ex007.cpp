#include <iostream>
using namespace std;

void collatz(int num, int temp){
    cout << temp << " ";
    if(temp != 1){
        if(temp%2 == 0){
            temp = temp / 2;
        } else {
            temp = temp * 3 + 1;
        }
        
        collatz(num, temp);
    }
}

int main(){
    
    int num;
    cout << "Digite um número para verificar a sequência de Collatz: ";
    cin >> num;
    collatz(num, num);
    
    
    return 0;
}