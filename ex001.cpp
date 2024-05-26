#include <iostream>

using namespace std;

int encontrarMaiorNumero(int array[], int tamanho, int cont=0, int maiorNumero=0){
    if(cont < tamanho){
        if(array[cont] > maiorNumero){
            maiorNumero = array[cont];
        }
        
        return encontrarMaiorNumero(array, tamanho, ++cont, maiorNumero);
    }
    
    return maiorNumero;
}

int main(){
    
    int tamanho = 5;
    int array[tamanho] = {23, 1, 45, 98, 24};
    int maior = encontrarMaiorNumero(array, tamanho);
    cout << "Maior número: " << maior;
    return 0;
}