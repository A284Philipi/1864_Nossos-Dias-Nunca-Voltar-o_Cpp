#include <iostream>
#include <string>
#include <math.h>
#include <list>

using namespace std;

int main()
{
    //LIFE IS NOT A PROBLEM TO BESOLVED
    int tamanho, cont = 0;
    list<string> lista;
    list<string>::iterator it;
    lista.push_back("L");
    lista.push_back("I");
    lista.push_back("F");
    lista.push_back("E");
    lista.push_back(" ");
    lista.push_back("I");
    lista.push_back("S");
    lista.push_back(" ");
    lista.push_back("N");
    lista.push_back("O");
    lista.push_back("T");
    lista.push_back(" ");
    lista.push_back("A");
    lista.push_back(" ");
    lista.push_back("P");
    lista.push_back("R");
    lista.push_back("O");
    lista.push_back("B");
    lista.push_back("L");
    lista.push_back("E");
    lista.push_back("M");
    lista.push_back(" ");
    lista.push_back("T");
    lista.push_back("O");
    lista.push_back(" ");
    lista.push_back("B");
    lista.push_back("E");
    lista.push_back(" ");
    lista.push_back("S");
    lista.push_back("O");
    lista.push_back("L");
    lista.push_back("V");
    lista.push_back("E");
    lista.push_back("D");
    cin >> tamanho;
    it = lista.begin();
    while (cont < tamanho){
        cout << *it;
        *it++;
        cont++;
    }
    cout <<endl;
    return 0;
}
