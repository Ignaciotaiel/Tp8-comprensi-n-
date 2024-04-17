#include<iostream>
#include <string>
using namespace std;

string comprimirtexto(string & texto) {
    string textocomprimido;
    char caracteractual = texto[0];
    int contador = 1;

    for (int i = 1; i < texto.size(); i++) {
        if (texto[i] == caracteractual) {
            contador++;
        } else {
            textocomprimido += caracteractual;
            if (contador > 1) {   
                textocomprimido += "{" +                  to_string(contador) + "}";
            }
            caracteractual = texto[i];
            contador = 1;
        }
    }

  
    textocomprimido += caracteractual;
    if (contador > 1) {
        textocomprimido += "{" + to_string(contador) + "}";
    }

    return textocomprimido;
}

int main() {
    string texto;
    getline(cin, texto);
    string textocomprimido = comprimirtexto(texto);
    cout << textocomprimido << endl;
    
    return 0;
}