#include <iostream>
using namespace std;

class Nodo
{
public:
    int dato;
    Nodo *siguiente;
    Nodo(int dato)
    {
        this->dato = dato;
        this->siguiente = NULL;
    }
};