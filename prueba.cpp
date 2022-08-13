#include <iostream>
using namespace std;


template<class T>
class Nodo_simple{
public:
    T dato;
    Nodo_simple<T> *siguiente;
    Nodo_simple(T dato){
        this->dato = dato;
        this->siguiente = NULL;
    }
};

template<class T>

class Lista{
    private:
public:
    Nodo_simple<T> *inicio;
    Nodo_simple<T> *final;
    Nodo_simple<T> *actual;

    void agregar(T dato){
        Nodo_simple<T>* nuevo = new Nodo_simple(dato);
        nuevo->dato = dato;
        if (this->inicio == NULL){
            this->inicio = new Nodo_simple(dato);
            this->final = new Nodo_simple(dato);
        }else{
            actual = inicio;
            while(actual->siguiente!=NULL){
                actual= actual->siguiente;
            }
            actual->siguiente= nuevo;
            this->final = nuevo;
        }
    }

    void mostrar(){
        Nodo_simple*<T> actual = this->inicio;
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

    void mostrar_inicial(){
        Nodo_simple<T>* actual = this->inicio;
        cout<<actual->dato<<endl;
    }

    void mostrar_final(){
        Nodo_simple*<T> actual = this->final;
        cout<<actual->dato<<endl;
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

    cout<<"ELEMENTO INICIAL:  ";
    l->mostrar_inicial();
    
    cout<<"ELEMENTO FINAL:  ";
    l->mostrar_final();
    return 0;
}