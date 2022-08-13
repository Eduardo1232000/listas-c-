#include <iostream>
using namespace std;

template <class T>
class Nodo_simple{

public:
    T dato;
    Nodo_simple<T> *siguiente;
    Nodo_simple(T dato){
        this->dato = dato;
        this->siguiente = NULL;
    }
};

template <typename T>
class Lista_simple{
private:
public:
    Nodo_simple<T> *inicio;
    Nodo_simple<T> *final;
    Nodo_simple<T> *actual;

    void insertar(T dato){
        Nodo_simple<T>* nuevo = new Nodo_simple<T>(dato);
        nuevo->dato = dato;
        if (this->inicio == NULL){
            this->inicio = new Nodo_simple<T>(dato);
            this->final = new Nodo_simple<T>(dato);
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
        Nodo_simple<T>* actual = this->inicio;
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
        cout<<inicio->dato<<endl;
    }

    void mostrar_final(){
        cout<<final->dato<<endl;
    }
};
