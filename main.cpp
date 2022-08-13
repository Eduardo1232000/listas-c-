#include <iostream>
#include "LISTA_SIMPLE.cpp"
#include "LISTA_DOBLE.cpp"

using namespace std;

int main() {
    //a partir de aqui se puede escribir codigo"
    Lista_Simple<int> *lista_simple = new Lista_Simple<int>();
    Lista_Doble <int> *lista_doble = new Lista_Doble <int>();
    Lista_Doble <string>* listanombre_doble = new Lista_Doble <string>();

    lista_simple->insertar(5);
    lista_simple->insertar(4);
    lista_simple->insertar(3);
    cout<<"Lista Simple de Enteros: ";
    lista_simple->mostrar();

    cout<<""<<endl;

    lista_doble->insertar(5);
    lista_doble->insertar(4);
    lista_doble->insertar(3);
    cout<<"Lista Doble de Enteros: ";
    lista_doble->mostrar();

    cout<<""<<endl;

    
    listanombre_doble->insertar("Eduardo");
    listanombre_doble->insertar("Alexander");
    listanombre_doble->insertar("Reyes");
    listanombre_doble->insertar("Gonzalez");
    cout<<"Lista Doble de Strings: ";
    listanombre_doble->mostrar();
    cout<<"ELEMENTO INICIAL: ";
    listanombre_doble->mostrar_inicial();
    cout<<"ELEMENTO FINAL: ";
    listanombre_doble->mostrar_final();
    cout<<""<<endl;

    return 0;
}