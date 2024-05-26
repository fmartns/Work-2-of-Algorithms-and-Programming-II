#include <iostream>
using namespace std;

int contadorAbreParenteses(const string &equacao, int tamanho, int indice=0, int cont=0) {
    if (indice < tamanho) {
        if (equacao[indice] == '(') {
            cont++;
        }
        return contadorAbreParenteses(equacao, tamanho, indice + 1, cont);
    }
    return cont;
}

int contadorFechaParenteses(const string &equacao, int tamanho, int indice=0, int cont=0) {
    if (indice < tamanho) {
        if (equacao[indice] == ')') {
            cont++;
        }
        return contadorFechaParenteses(equacao, tamanho, indice + 1, cont);
    }
    return cont;
}

int main(){
    
    string equacao;
    cout << "Digite uma equação: ";
    getline(cin, equacao);
    
    int abre = contadorAbreParenteses(equacao, equacao.length());
    int fecha = contadorFechaParenteses(equacao, equacao.length());
    cout << "Há " << abre << " parênteses abertos e " << fecha << " parênteses fechados." << endl;
    if(abre > fecha || fecha > abre){
        cout << "Há um erro. Analise sua equação.";
    }
    
    return 0;
}