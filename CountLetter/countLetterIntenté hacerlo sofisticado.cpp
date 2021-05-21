//Introducir una frase y después una letra, cuyas apariciones en la frase se contarán
//WIP ESTO NO FUNCIONA PARA NADA
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string getPhrase() {
    string input;
    cout<<"Introduzca una frase"<<"\n";
    getline(cin, input);
    return input;
}
string getLetter() {
    string input;
    cout<<"Introduzca una letra para contar"<<"\n";
    check:
    getline(cin, input);
    if ((input.length()) == 1) {
        return input;
    }
    else {
        cout<<"Introduzca solo un caracter"<<"\n";
        goto check;
    }   
}
bool isSame(int e) {
    if((getPhrase()[e]) == (getLetter()[0])) {
        return true;
    }
    else {
        return false;
    }
}
string countLetter() {  //acá se podía usar un range-defined loop pero no entiendo la documentación
    int count = 0;
    for(int i = 0; i < (getPhrase().length()); i++) {
        if (isSame(i) == true) {
            count++;
        }
    }
    stringstream preoutput;
    preoutput <<"La letra "<< getLetter() <<" se repite "<< count << " veces en esta frase" << "\n";
    string output = (preoutput.str());
    return output;
}
int main() {
    printf("%s\n", countLetter()); //JAJAJAJAJAJAJJAJAJAJAJAJAJASJAJSAJSAJDFsfrhgiljmergikrjm fffffffffnrfgjmnernergikerjgmeriogjmdflkgdgrjgdkftjgshbdfmgeribmrirmimrimi
    return 0;
}