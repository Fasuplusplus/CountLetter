//Introducir una frase y después una letra, cuyas apariciones en la frase se contarán
//WIP ESTO NO FUNCIONA PARA NADA
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string Phrase;
string Letter;
void getPhrase() {
    cout<<"Introduzca una frase"<<"\n";
    getline(cin, Phrase);
}
void getLetter() {
    cout<<"Introduzca una letra para contar"<<"\n";
    check:
    getline(cin, Letter);
    if ((Letter.length()) != 1) {
        cout<<"Introduzca solo un caracter"<<"\n";
        goto check;
    }   
}
bool isSame(int e) {
    if((Phrase[e]) == (Letter[0])) {
        return true;
    }
    else {
        return false;
    }
}
void countLetter() {  //acá se podía usar un range-defined loop pero no entiendo la documentación
    int count = 0;
    for(int i = 0; i < (Phrase.length()); i++) {
        if (isSame(i) == true) {
            count++;
        }
    }
    cout<<"La letra "<< Letter <<" se repite "<< count << " veces en esta frase" << "\n";
}
int main() {
    getPhrase();
    getLetter();
    countLetter();
    return 0;
}