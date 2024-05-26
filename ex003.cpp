#include <iostream>

using namespace std;

int somaNumero(int array[], int tamanho, int limiar, int cont=0, int soma=0){
    if(cont < tamanho){
        if(array[cont] >= limiar){
            soma = soma + array[cont];
        }
            
        return somaNumero(array, tamanho, limiar, ++cont, soma); 
    }
    
    return soma;
}

int main(){
    
    int tamanho = 5;
    int array[tamanho] = {23, 1, 45, 98, 24};
    int limiar;
    cout << "Defina um limiar: ";
    cin >> limiar;
    int soma = somaNumero(array, tamanho, limiar);
    cout << "A soma de todos os números acima de " << limiar << ": " << soma;
    return 0;
}