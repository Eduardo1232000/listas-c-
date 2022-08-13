#include <iostream>
using namespace std;

template <class T>
class Nodo_cola{

public:
    T dato;
    Nodo_cola<T> *siguiente;
    Nodo_cola<T> *anterior;
    Nodo_cola(T dato){
        this->dato = dato;
        this->siguiente = NULL;
        this->anterior = NULL;
    }
};

template <typename T>
class Cola{
private:
public:
    Nodo_cola<T> *inicio;
    Nodo_cola<T> *final;
    Nodo_cola<T> *actual;

    //insertar
    void enqueue(T dato){
        Nodo_cola<T>* nuevo = new Nodo_cola<T>(dato);
        nuevo->dato = dato;
        if (this->inicio == NULL){
            this->inicio = new Nodo_cola<T>(dato);
            this->final = new Nodo_cola<T>(dato);
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

    //eliminar
    void dequeue(){
        this->inicio = this->inicio->siguiente; 
    }

    

    void mostrar(){
        Nodo_cola<T>* actual = this->inicio;
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


    //mostrar inicial
    void peek(){
        cout<<inicio->dato<<endl;
    }

    void mostrar_final(){
        cout<<final->dato<<endl;
    }
};
