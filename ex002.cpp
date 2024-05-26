#include <iostream>

using namespace std;

int indiceNumero(int array[], int tamanho, int num, int cont=0, int indice=0){
    if(cont < tamanho){
        if(array[cont] == num){
            indice = cont;
        } else {
            return indiceNumero(array, tamanho, num, ++cont, indice); 
        }
    }
    
    return indice;
}

int main(){
    
    int tamanho = 5;
    int array[tamanho] = {23, 1, 45, 98, 24};
    int num;
    cout << "Digite um número: (Dentre 23, 1, 45, 98 e 24)";
    cin >> num;
    int indice = indiceNumero(array, tamanho, num);
    cout << "O indice da primeira ocorrência do número " << num << " é " << indice;
    return 0;
}