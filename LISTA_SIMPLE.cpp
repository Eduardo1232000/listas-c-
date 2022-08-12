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

class Lista{
private:
public:
    Nodo *cabeza;
    Nodo *actual;
    void agregar(int dato){
        Nodo* nuevo = new Nodo(dato);
        nuevo->dato = dato;
        if (this->cabeza == NULL){
            this->cabeza = new Nodo(dato);
        }else{
            actual = cabeza;
            while(actual->siguiente!=NULL){
                actual= actual->siguiente;
            }
            actual->siguiente= nuevo;
        }
    }

    void mostrar(){
        Nodo* actual = this->cabeza;
        if(actual!=NULL){
            cout<<"[";
            while(actual != NULL){
                if (actual->siguiente!=NULL){
                    cout<<actual->dato<<", ";
                    actual= actual->siguiente;
                }else{
                    cout<<actual->dato;
                    actual= actual->siguiente;
                }
            }
            cout<<"]"<<endl;
        }else{
            cout<<"Vacio";
        }
    }


};


//pruebas
int main() {
    //a partir de aqui se puede escribir codigo"
    Lista *l = new Lista();
    Lista *lista1 = new Lista();

    
    l->agregar(1);
    l->agregar(2);
    l->agregar(3);
    l->agregar(4);
    cout<<"Lista 1: ";
    l->mostrar();
    lista1->agregar(5);
    lista1->agregar(4);
    lista1->agregar(3);
    cout<<"Lista 2: ";
    lista1->mostrar();


    return 0;
}