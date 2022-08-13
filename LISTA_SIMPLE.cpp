#include <iostream>
using namespace std;

template <class T>
class Nodo_simple{
private:
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
    int contador;
    int valor;
    T res;
    Nodo_simple<T> *inicio;
    Nodo_simple<T> *final;
    Nodo_simple<T> *actual;

    int size(){
        this->actual = this->inicio;
        contador=0;
        while(actual->siguiente!=NULL){
            contador++;
            this->actual= actual->siguiente;
        }
        contador++;
        return contador;
    }

    T posicion(int i){
        valor = this->size();
        contador=0;
        this->actual = this->inicio;
        if (i>=valor){
            return -1;
        }else{
            while (contador<i){
                actual= actual->siguiente;
                contador++;
            }
            return actual->dato;
        }       
    }  
    
public:

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

    void dimension(){
        valor = this->size();
        cout<<"SIZE DE LA LISTA: "<<valor<<endl;
    }
    
    void mostrar_posicion(int n){
        res = this->posicion(n);
        if (res==-1){
            cout<<"No existe ese valor"<<endl;
        }else{
            cout<<res<<endl;
        }
    }  
};
