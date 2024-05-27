#include <iostream>

using namespace std;

void collatz(int num){
    cout << num << " ";
    if(num !=  1){
        if(num%2 == 0){
            num = num / 2;
        } else {
            num = num * 3 + 1;
        }
        
        collatz(num);
    }
}

int main(){
    
    int num;
    cout << "Defina um numero: ";
    cin >> num;
    
    collatz(num);
    
    return 0;
}