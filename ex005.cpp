#include <iostream>

using namespace std;

void inverterArray(int array[], int final, int inicio=0){
    if(inicio >= final){
        return;
    }
    
    int temporario = array[inicio];
    array[inicio] = array[final];
    array[final] = temporario;
    
    inverterArray(array, final-1, inicio+1);
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
    cout << "Array: ";
    imprimirArray(array, tamanho);
    cout << endl;
    inverterArray(array, tamanho-1);
    cout << "Array Invertida: ";
    imprimirArray(array, tamanho);
    return 0;
}