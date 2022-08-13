#include <iostream>
using namespace std;

template <class T>
class Nodo_doble{
public:
    T dato;
    Nodo_doble<T>*siguiente;
    Nodo_doble<T>*anterior;
    Nodo_doble(T dato){
        this->dato = dato;
        this->siguiente = NULL;
    }
};

template <typename T>
class Lista_Doble{
private:
public:
    Nodo_doble<T> *inicio;
    Nodo_doble<T> *final;
    Nodo_doble<T> *actual;

    void insertar(T dato){
        Nodo_doble<T>* nuevo = new Nodo_doble<T>(dato);
        nuevo->dato = dato;
        if (this->inicio == NULL){
            this->inicio = new Nodo_doble<T>(dato);
            this->final = new Nodo_doble<T>(dato);
        }else{
            actual = inicio;
            while(actual->siguiente!=NULL){
                actual= actual->siguiente;
            } 
            actual->siguiente= nuevo;
            nuevo->anterior= final;
            this->final = nuevo;
        }
    }

    void mostrar(){
        Nodo_doble<T>* actual = this->inicio;
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
        Nodo_doble<T>* actual = this->inicio;
        cout<<actual->dato<<endl;
    }

    void mostrar_final(){
        Nodo_doble<T>* actual = this->final;
        cout<<actual->dato<<endl;
    }
};