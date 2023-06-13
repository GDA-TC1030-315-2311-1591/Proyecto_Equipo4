//aqui declaramos las funciones de la clase amistoso

#include "amistoso.hpp"
#include <iostream>
#include <iomanip>
//constructor por default
amistoso::amistoso() : personaje() {
    puntos = 0;
    historia = "";
    // Resto de la inicialización de atributos, si es necesario
}
//constructor sobrecargado
amistoso::amistoso(std::string _nombre ,std::string _descripcion,  std::string _ubicacion ,  std::string _historia, bool _estatus,int _puntos) {
    nombre = _nombre;
    descripcion = _descripcion;
    ubicacion = _ubicacion;
    historia = _historia;
    estatus = _estatus;
    puntos = _puntos;
    // Resto de la inicialización de atributos, si es necesario
}


//metodos de la clase amistoso getters y setters
void amistoso::set_nombre(std::string _nombre){
    nombre = _nombre;
};
std::string amistoso::get_nombre(){
    return nombre;
};
void amistoso::set_descripcion(std::string _descripcion){
    descripcion = _descripcion;
};
std::string amistoso::get_descripcion(){
    return descripcion;
};  
void amistoso::set_ubicacion(std::string _ubicacion){
    ubicacion = _ubicacion;
};
std::string amistoso::get_ubicacion(){
    return ubicacion;
};  
void amistoso::set_puntos(int _puntos){
    puntos = _puntos;
};
int amistoso::get_puntos(){
    return puntos;
};
void amistoso::set_historia(std::string _historia){
    historia = _historia;
};
std::string amistoso::get_historia(){
    return historia;
};
//metodos virtuales //Pienso que falta algo aqui en los metodos en el cpp
void amistoso::hablar(){
    if (estatus == true){
        std::cout << "Hola, soy " << nombre << " y estoy aqui para ayudarte." << std::endl;
    }
    else{
        std::cout << "No tengo ganas de hablar." << std::endl;
    }
};
int amistoso::juega(){ // 
    std::cout << "No tengo ganas de jugar." << std::endl;
};
void amistoso::recibeInteraccion(int _interaccion){
    if (_interaccion == 1){
        std::cout << "Hola, soy " << nombre << " y estoy aqui para ayudarte." << std::endl;
    }
    else{
        std::cout << "No tengo ganas de hablar." << std::endl;
    }
};





//metodos de la clase amistoso getters y setters
/*void amistoso::set_historia(std::string _historia){
    historia = _historia;
};

std::string amistoso::get_historia(){
    return historia;
};

void amistoso::set_estatus(bool _estatus){
    estatus = _estatus;
};

bool amistoso::get_estatus(){
    return estatus;
};

void amistoso::set_nombre(std::string _nombre){
    nombre = _nombre;
};

std::string amistoso::get_nombre(){
    return nombre;
};


void amistoso::hablar(){
    if (estatus == true){
        std::cout << "Hola, soy " << nombre << " y estoy aqui para ayudarte." << std::endl;
    }
    else{
        std::cout << "No tengo ganas de hablar." << std::endl;
    }
};

int amistoso::juega(){ // 
    std::cout << "No tengo ganas de jugar." << std::endl;
};
*/






  /*public:
    amistoso();
    amistoso(bool, std::string);
    void set_estatus(bool);
    bool get_estatus();
    void set_nombre(std::string);
    std::string get_nombre();
    void hablar() override;
    void juega() override;
    void recibeInteraccion(int) override;
};
*/

