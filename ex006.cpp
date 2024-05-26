#include <iostream>
#include <string>

using namespace std;

string inverterPalavra(const string &palavra, int indice){
    if(indice < 0){
        return "";
    }
    return palavra[indice] + inverterPalavra(palavra, indice-1);
}

int main(){
    
    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;
    
    string invertida = inverterPalavra(palavra, palavra.length() -1);
    if(palavra == invertida){
        cout << "A palavra " << palavra << " é um palíndromo."; 
    } else {
        cout << "A palavra " << palavra << " não é um um palíndromo.";
    }
    
    return 0;
}