#include <iostream>
using namespace std;

template <class T>
class Nodo_pila{
public:
    T dato;
    Nodo_pila<T>*siguiente;
    Nodo_pila<T>*anterior;
    Nodo_pila(T dato){
        this->dato = dato;
        this->siguiente = NULL;
    }
};

template <typename T>
class Pila{
private:
public:
    Nodo_pila<T> *inicio;
    Nodo_pila<T> *final;
    Nodo_pila<T> *actual;

    //insertar 
    void push(T dato){
        Nodo_pila<T>* nuevo = new Nodo_pila<T>(dato);
        nuevo->dato = dato;
        if (this->inicio == NULL){
            this->inicio = new Nodo_pila<T>(dato);
            this->final = new Nodo_pila<T>(dato);
        }else{
            actual = inicio;
            nuevo->siguiente= inicio;
            this->inicio = nuevo;
        }
    }

    //eliminar
    void pop(){
        this->inicio = this->inicio->siguiente;
    }

    void mostrar(){
        Nodo_pila<T>* actual = this->inicio;
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

    void peek(){
        cout<<inicio->dato<<endl;
    }

    void mostrar_final(){
        cout<<final->dato<<endl;
    }
};