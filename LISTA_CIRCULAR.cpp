#include <iostream>
using namespace std;

template <class T>
class Nodo_circular{
public:
    T dato;
    Nodo_circular<T>*siguiente;
    Nodo_circular<T>*anterior;
    Nodo_circular(T dato){
        this->dato = dato;
        this->siguiente = NULL;
    }
};

template <typename T>
class Lista_circular{
private:
public:
    Nodo_circular<T> *inicio;
    Nodo_circular<T> *final;
    Nodo_circular<T> *actual;

    void insertar(T dato){
        Nodo_circular<T>* nuevo = new Nodo_circular<T>(dato);
        nuevo->dato = dato;
        if (this->inicio == NULL){
            this->inicio = new Nodo_circular<T>(dato);
            this->inicio->anterior= inicio;
            this->inicio->siguiente= inicio;
            this->final = new Nodo_circular<T>(dato);
            cout<<"INICIO: "<<inicio->dato<<"->SIGUIENTE: "<<inicio->siguiente->dato<<endl;
        }else{
            actual = inicio;
            
            while(actual->siguiente!=inicio){
                
                
                actual = actual->siguiente;
                cout<<"ACTUAL: "<<actual->dato<<"->SIGUIENTE: "<<actual->siguiente->dato<<endl;
            } 

            if(actual == inicio){
                this->inicio->siguiente = nuevo;
                
                nuevo->anterior = final;
                this->final = nuevo;
                this-> final->siguiente = inicio;
                this->inicio->anterior = final;
            }else{
                actual->siguiente= nuevo;
                
                nuevo->anterior= final;
                this->final = nuevo;
                this->final->siguiente = inicio;
                this->inicio->anterior = final;                
            }
            
        }
    }

    void mostrar(){
        Nodo_circular<T>* actual = this->inicio;
        if(actual!=NULL){
            cout<<"[";
            if (inicio->siguiente== inicio){
                cout<<inicio->dato;
            }
            while(actual->siguiente != inicio){
                cout<<actual->dato<<", ";
                actual= actual->siguiente;  
            }
            if(actual != inicio){
                cout<<actual->dato;
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