#include <iostream>
#include "LISTA_SIMPLE.cpp"
#include "LISTA_DOBLE.cpp"
#include "COLA.cpp"
#include "PILA.cpp"
#include "LISTA_CIRCULAR.cpp"
#include "LISTA_LISTAS.cpp"

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
    //lista_simple->dimension();
    cout<<"Lista Simple de Enteros: ";
    lista_simple->mostrar();
    lista_simple->buscar("nick");
    
    //lista_simple->dimension();
    //lista_simple->mostrar_posicion(2);

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
    Lista_circular<string>* lista = new Lista_circular<string>();
    
    lista_cirular->insertar(1);
    lista_cirular->mostrar();

    lista_cirular->insertar(2);
    lista_cirular->mostrar();

    lista_cirular->insertar(3);
    lista_cirular->mostrar();

    lista_cirular->mostrar_inicial();
    lista_cirular->mostrar_final();
    

    lista->insertar("admin,admin,1000,22");
    
    
    lista->insertar("eduardo,reyes,1001,23");
    
    //lista->mostrar();
    
    lista->insertar("alexander,gonzalez,1002,24");
    lista->insertar("alex,gon,1003,4");
    lista->mostrar();
    
    lista->mostrar();
    lista->modificar_datos("admin", "admin","admin,admin_MODIFICADO,1000,22");
    lista->mostrar();
    
    //lista->eliminar("admin","admin");
    //lista->eliminar("eduardo", "reyes");
    lista->eliminar("alex", "gon");
    lista->mostrar();
    */

//EJEMPLO DE LISTA DE LISTAS (DOBLEMENTE ENLAZADA)========================================================
    /*
    Lista_listas<string>* listas =new Lista_listas<string>(); 
    listas->insertar("comun");
    listas->insertar("raro");
    listas->insertar("epico");
    listas->insertar("legendario");
    listas->mostrar();
    cout<<endl;
    listas->insertar_hijo("comun","pistola");
    listas->insertar_hijo("comun","escopeta");
    listas->insertar_hijo("comun", "francotirador");
    listas->insertar_hijo("raro","espada");
    listas->insertar_hijo("legendario", "dinamita");

    listas->mostrar();
    */

    return 0;
}