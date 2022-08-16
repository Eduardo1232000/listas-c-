#include <iostream>
using namespace std;

template <class T>
class Nodo_lista_listas{
public:
    T dato;
    Nodo_lista_listas<T>*siguiente;
    Nodo_lista_listas<T>*anterior;
    Nodo_lista_listas<T>*hijo;
    Nodo_lista_listas(T dato){
        this->dato = dato;
        this->siguiente = NULL;
        this->anterior = NULL;
        this->hijo = NULL;
    }
};

template <typename T>
class Lista_listas{
private:
public:
    Nodo_lista_listas<T> *inicio;
    Nodo_lista_listas<T> *final;
    Nodo_lista_listas<T> *actual;
    Nodo_lista_listas<T> *hijo_actual;

    void insertar(T dato){
        Nodo_lista_listas<T>* nuevo = new Nodo_lista_listas<T>(dato);
        nuevo->dato = dato;
        if (this->inicio == NULL){
            this->inicio = new Nodo_lista_listas<T>(dato);
            this->final = new Nodo_lista_listas<T>(dato);
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
    void insertar_hijo(T padre, T hijo){
        Nodo_lista_listas<T>* nuevo_hijo = new Nodo_lista_listas<T>(hijo);
        nuevo_hijo->dato = hijo;
        if(this->inicio ==NULL){
            cout<<"no se puede insertar hijo, porque la lista esta vacia"<<endl;
        }else{
            actual = inicio;
            while(actual!=NULL){
                if(actual->dato == padre){
                    cout<<actual->dato<<"es igual a padre"<<endl;
                    if(actual->hijo==NULL){
                        cout<<actual->dato<<" no tiene hijos"<<endl;
                        actual->hijo = nuevo_hijo;
                        return;
                    }
                    else{
                        cout<<actual->dato<<" tiene hijos"<<endl;
                        this->hijo_actual = actual->hijo;
                        while(hijo_actual->siguiente != NULL){
                            hijo_actual = hijo_actual->siguiente;
                        }
                        hijo_actual->siguiente = nuevo_hijo;
                        return;
                    }
                }else{
                    actual= actual->siguiente;
                }
            }
            cout<<"No se pudo insertar hijo porque no existe el padre"<<endl;
        }
        
        
    }

    void mostrar(){
        Nodo_lista_listas<T>* actual = this->inicio;
        if(actual!=NULL){
            cout<<"[";
            while(actual != NULL){
                if (actual!=NULL){
                    cout<<actual->dato;

                    //IMPRIMIENDO HIJOS
                    if (actual->hijo!=NULL){
                        hijo_actual= actual->hijo;
                        cout<<":{";
                        while(hijo_actual->siguiente!=NULL){
                            cout<<hijo_actual->dato<<",";
                            hijo_actual= hijo_actual->siguiente;
                        }
                        cout<<hijo_actual->dato<<"}";
                    }
                    if (actual->siguiente!=NULL){
                        cout<<", ";
                    } 
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