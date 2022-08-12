#include <iostream>
#include "NODO.cpp"
using namespace std;

class Lista{
private:
public:
    Nodo_doble *inicio;
    Nodo_doble *final;
    Nodo_doble *actual;

    void agregar(int dato){
        Nodo_doble* nuevo = new Nodo_doble(dato);
        nuevo->dato = dato;
        if (this->inicio == NULL){
            this->inicio = new Nodo_doble(dato);
            this->final = new Nodo_doble(dato);
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
        Nodo_doble* actual = this->inicio;
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
        Nodo_doble* actual = this->inicio;
        cout<<actual->dato<<endl;
    }

    void mostrar_final(){
        Nodo_doble* actual = this->final;
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
    lista1->agregar(2);

    cout<<"Lista 2: ";
    lista1->mostrar();

    cout<<"ELEMENTO INICIAL:  ";
    lista1->mostrar_inicial();
    
    cout<<"ELEMENTO FINAL:  ";
    lista1->mostrar_final();

    return 0;
}