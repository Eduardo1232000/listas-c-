#include <iostream>
#include "LISTA_SIMPLE.cpp"
#include "LISTA_DOBLE.cpp"
#include "COLA.cpp"
#include "PILA.cpp"
#include "LISTA_CIRCULAR.cpp"

using namespace std;

int main() {
    
    //a partir de aqui se puede escribir codigo"
    
//EJEMPLO DE PILA (DOBLEMENTE ENLAZADA)===================================================================
    /*
    Pila<int>* pila = new Pila<int>();
    pila->push(1);
    pila->push(2);
    pila->push(3);
    pila->push(4);
    pila->push(5);
    pila->mostrar();
    pila->pop();
    pila->mostrar();
    pila->pop();
    pila->mostrar();
    pila->pop();
    pila->mostrar();
    pila->pop();
    pila->mostrar();
    */

//EJEMPLO DE COLA (DOBLEMENTE ENLAZADA)===================================================================
    /*
    Cola<int>* cola = new Cola<int>();
    cola->enqueue(1);
    cola->enqueue(2);
    cola->enqueue(3);
    cola->enqueue(4);
    cola->enqueue(5);
    cola->mostrar();
    cola->dequeue();
    cola->mostrar();
    cola->dequeue();
    cola->mostrar();
    cola->dequeue();
    cola->mostrar();
    cola->dequeue();
    cola->mostrar();
    */

// EJEMPLO DE LISTA SIMPLE================================================================================
   /* 
    Lista_simple<int> *lista_simple = new Lista_simple<int>();
    lista_simple->insertar(5);
    lista_simple->insertar(4);
    lista_simple->insertar(3);
    lista_simple->dimension();
    cout<<"Lista Simple de Enteros: ";
    lista_simple->mostrar();
    cout<<"PRIMER DATO: ";
    lista_simple->mostrar_inicial();
    cout<<"ULTIMO DATO: ";
    lista_simple->mostrar_final();
    lista_simple->dimension();
    lista_simple->mostrar_posicion(2);

    cout<<""<<endl;
    */

//EJEMPLO DE LISTA DOBLE==================================================================================
    /*
    Lista_doble <int> *lista_doble = new Lista_doble <int>();
    lista_doble->insertar(5);
    lista_doble->insertar(4);
    lista_doble->insertar(3);
    cout<<"Lista Doble de Enteros: ";
    lista_doble->mostrar();

    cout<<""<<endl;

    Lista_doble <string>* listanombre_doble = new Lista_doble <string>();
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
    */

//EJEMPLO DE LISTA CIRCULAR (DOBLEMENTE ENLAZADA)=========================================================    
    /*
    Lista_circular<int>* lista_cirular = new Lista_circular<int>();
    lista_cirular->insertar(1);
    lista_cirular->mostrar();
    lista_cirular->insertar(2);
    lista_cirular->mostrar();
    lista_cirular->insertar(3);
    lista_cirular->mostrar();

    lista_cirular->mostrar_inicial();
    lista_cirular->mostrar_final();
    */

    return 0;
}