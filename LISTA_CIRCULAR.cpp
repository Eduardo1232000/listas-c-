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

    string nickname;
    string password;
    int monedas; 
    int edad;
    int contador;
    //CUENTA LA LONGITUD DEL TEXTO INGRESADO
    int contarlongitud(string dato){
        contador=0;
        int respuesta;
        while(dato[contador]!=NULL){
            contador++;
        }
        return contador;
    }
    //SOLO FUNCIONA CON CADENAS : ADMIN,ADMIN,100,10
    //OBTIENE LOS DATOS DE NOMBRE: 1, PASSWORD: 2, MONEDAS: 3, Y EDAD: 4
    string obtener_valor(string cadena, int longitud,int requerido){
        contador=0;
        int comas=0;
        string respuesta;
        while(contador<longitud){
            if(cadena[contador]==','){
                comas++;
                if(comas == requerido){
                    return respuesta;
                }else{
                    contador++;
                }
            }else{
                if(comas==requerido-1){
                    respuesta+=cadena[contador];
                    contador++;
                    if(contador==longitud){
                        return respuesta;
                    }
                }else{
                    contador++;
                }    
            }
        }
        return("no se pudo");  
    }

    //SOLO FUNCIONA CON CADENAS : ADMIN,ADMIN,100,10
    string compararlogin(string elemento, string nick, string pass){
        edad= this->contarlongitud(actual->dato);
        nickname= obtener_valor(actual->dato,edad,1);
        //cout<<nickname<<endl;
        if (nick == nickname){
            password = obtener_valor(actual->dato,edad,2);
            //cout<<password<<endl;                
            if(pass == password){
                return actual->dato;
            }else{
                return"no";
            }
        }else{
            return"no";
        }
    }

public:
    Nodo_circular<T> *inicio;
    Nodo_circular<T> *final;
    Nodo_circular<T> *actual;
    Nodo_circular<T> *aux;

    void insertar(T dato){
        Nodo_circular<T>* nuevo = new Nodo_circular<T>(dato);
        nuevo->dato = dato;
        //si esta vacia
        if (this->inicio == NULL){
            this->inicio = new Nodo_circular<T>(dato);
            this->final=inicio;
            this->inicio->anterior= inicio;
            this->inicio->siguiente= inicio;
            this->final->siguiente= inicio;
            this->final->anterior= inicio;
            this->final=inicio;
        }else{
            //si no esta vacia
            actual = inicio;
            //si el siguiente es diferente de inicio (incluye al primer valor)
            while(actual->siguiente!=inicio){               
                actual = actual->siguiente;
                //cout<<"ACTUAL: "<<actual->dato<<"->SIGUIENTE: "<<actual->siguiente->dato<<endl;
            } 
            //si el actual es inicio y el siguiente es inicio
            if(actual == inicio){
                this->inicio->siguiente = nuevo;     
                nuevo->anterior = final;
                this->final = nuevo;
                this-> final->siguiente = inicio;
                this->inicio->anterior = final;
                
            }else{
                //si el actual no es inicio
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
                cout<<"{";
                cout<<inicio->dato;
                cout<<"}";
            }
            while(actual->siguiente != inicio){
                cout<<"{";
                cout<<actual->dato<<"}, ";

                actual= actual->siguiente;  
            }
            if(actual != inicio){
                cout<<"{";
                cout<<actual->dato<<"}";                
            }            
            cout<<"]"<<endl;
        }else{
            cout<<"Vacio";
        }
    }

    //SOLO FUNCIONA CON CADENAS : ADMIN,ADMIN,100,10
    string login(string nick, string pass){
        this->actual  = this->inicio;
        //si la cadena no esta vacia 
        if(actual!=NULL){
            //si solo tiene 1 elemento la lista
            if(actual->siguiente== actual){
                //reutilice edad para no declarar mas variables
                nickname=compararlogin(actual->dato, nick, pass);
                return nickname;
            }
            while(actual->siguiente != inicio){
                cout<<actual->dato<<", "<<endl;
                nickname=compararlogin(actual->dato, nick, pass);
                if (nickname!="no"){
                    return nickname;
                }
                actual= actual->siguiente;  
            }
            //si tiene mas de un elemento este analiza el ultimo
            if(actual != inicio){
                nickname=compararlogin(actual->dato, nick, pass);
                return nickname;
            }
        }
        return "no";
    }

    //SOLO FUNCIONA CON CADENAS : ADMIN,ADMIN,100,10
    void modificar_datos(string nick, string pass, string cadena_nueva){
        this->actual  = this->inicio;
        //si la cadena no esta vacia 
        if(actual!=NULL){
            //si solo tiene 1 elemento la lista
            if(actual->siguiente== actual){
                //reutilice edad para no declarar mas variables
                nickname=compararlogin(actual->dato, nick, pass);
                if (nickname!="no"){
                    actual->dato=cadena_nueva;
                }
            }
            //SI TIENE MAS DE 1 ELEMENTO EXAMINA TODOS MENOS EL ULTIMO
            while(actual->siguiente != inicio){
                //cout<<actual->dato<<", "<<endl;
                nickname=compararlogin(actual->dato, nick, pass);
                if (nickname!="no"){
                    actual->dato=cadena_nueva;
                }
                actual= actual->siguiente;  
            }
            //si tiene mas de un elemento este analiza el ultimo
            if(actual != inicio){
                nickname=compararlogin(actual->dato, nick, pass);
                if (nickname!="no"){
                    actual->dato=cadena_nueva;
                }
                
            }
        }
    }

    

    //SOLO FUNCIONA CON CADENAS : ADMIN,ADMIN,100,10
    void eliminar(string nick, string pass){
        this->actual  = this->inicio;
        //si la cadena no esta vacia 
        if(actual!=NULL){
            //si solo tiene 1 elemento la lista
            if(actual->siguiente== actual){
                //reutilice edad para no declarar mas variables
                nickname=compararlogin(actual->dato, nick, pass);
                if (nickname!="no"){
                    actual->anterior->siguiente= actual->siguiente;
                    this->inicio= NULL;
                    this->final = NULL;
                    cout<<"yes"<<endl;
                    return;
                }
            }
            //SI TIENE MAS DE 1 ELEMENTO EXAMINA TODOS MENOS EL ULTIMO
            while(actual->siguiente != inicio){
                nickname=compararlogin(actual->dato, nick, pass);
                if (nickname!="no"){
                    //solo si es el primer elemento y la lista tiene 2 elementos
                    if(actual->siguiente== final and actual->anterior==final){
                        actual = actual->siguiente;
                        actual->siguiente= actual;
                        actual->anterior= actual;
                        inicio= this->actual;
                        final = this->actual;
                    }else{
                        if(actual==inicio){
                            inicio= actual->siguiente;
                        }
                        aux= actual->siguiente;
                        actual = actual->anterior;
                        actual->siguiente=aux;
                        aux= actual;
                        actual= actual->siguiente;
                        actual->anterior= aux;
                    }
                    //cout<<"yes"<<endl;
                    return;
                }
                actual= actual->siguiente;  
            }
            //si tiene mas de un elemento este analiza el ultimo
            if(actual != inicio){
                nickname=compararlogin(actual->dato, nick, pass);
                if (nickname!="no"){
                    if(actual->siguiente == inicio ){
                        if(actual->anterior==inicio){
                            this->actual= this->actual->anterior;
                            this->actual->siguiente =this->actual;
                            this->actual->anterior= this->actual;
                            this->inicio = this->actual;
                            this->final = this->actual;
                        }else{
                            if(actual== final){
                                final= actual->anterior;
                            }
                            aux= actual->siguiente;
                            actual = actual->anterior;
                            actual->siguiente=aux;
                            aux= actual;
                            actual= actual->siguiente;
                            actual->anterior= aux;

                        }  
                    }
                    //cout<<"yes"<<endl;
                    return;
                }
            }
        }
    }

    void mostrar_inicial(){
        cout<<inicio->dato<<endl;
    }

    void mostrar_final(){
        cout<<final->dato<<endl;
    }
};