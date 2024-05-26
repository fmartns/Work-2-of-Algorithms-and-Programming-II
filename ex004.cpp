#include <iostream>

using namespace std;

void substituirNumero(int array[], int tamanho, int num1, int num2, int cont=0){
    if(cont < tamanho){
        if(array[cont] == num1){
            array[cont] = num2;
        }
        
        substituirNumero(array, tamanho, num1, num2, ++cont);
    }
}

void imprimirArray(int array[], int tamanho, int cont=0){
    cout << array[cont] << " ";
    if(cont < tamanho-1){
        imprimirArray(array, tamanho, ++cont);
    }
}


int main(){
    
    int tamanho = 5;
    int array[tamanho] = {23, 1, 45, 98, 24};
    int num1;
    cout << "Escolha um número: ";
    cin >> num1;
    int num2;
    cout << "Sempre que aparecer um valor igual a " << num1 << " deve ser substituido por: ";
    cin >> num2;
    substituirNumero(array, tamanho, num1, num2);
    imprimirArray(array, tamanho);
    return 0;
}