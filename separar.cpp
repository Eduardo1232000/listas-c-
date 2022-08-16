#include <iostream>
using namespace std;



int contarvalores(string dato){
    int contador=0;
    int respuesta;
    while(dato[contador]!=NULL){
        contador++;
    }
    return contador;
}

string obtener_nombre(string cadena, int longitud,int requerido){
    int contador=0;
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



int main() {
    string nickname;
    string password;
    string monedas;
    string edad;
    int age;

    int valor;
    string dato;
    dato="eduardo8#,1234,1000,22";
    valor = contarvalores(dato);
    cout<<valor<<endl;

    edad = obtener_nombre(dato, valor,4); //1 para nickname, 2 para password, 3 para monedas, 4 para edad
    age= stoi(edad);
    cout<<edad<<endl;




}





















#include <iostream>
#include <fstream>
using namespace std;

template <class T>
class Nodo_simple{
private:
        string nickname;
        string password;
        int monedas;
        int edad;
    
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
    void buscar(string nick){
        //{ "nick": "", "password": "", "monedas": "", "edad": "" }
        this->actual = this->inicio;
        cout<<nick<<endl;
   
    }  

};
