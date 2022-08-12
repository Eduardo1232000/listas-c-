#include <iostream>
using namespace std;

class Nodo_simple{
public:
    int dato;
    Nodo_simple *siguiente;
    Nodo_simple(int dato)
    {
        this->dato = dato;
        this->siguiente = NULL;
    }
};

class Nodo_doble{
public:
    int dato;
    Nodo_doble *siguiente;
    Nodo_doble *anterior;
    Nodo_doble(int dato)
    {
        this->dato = dato;
        this->siguiente = NULL;
    }
};