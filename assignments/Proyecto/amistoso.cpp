//aqui declaramos las funciones de la clase amistoso

#include "amistoso.hpp"
#include <iostream>
#include <iomanip>
//constructor por default
amistoso::amistoso(){
    estatus = false; //ganas de hablar 
    nombre = "";
    historia = "";
};
//constructor sobrecargado
amistoso::amistoso(bool _estatus, std::string _nombre, std::string _historia){
    estatus = _estatus;
    nombre = _nombre;
    historia = _historia;
};


//metodos de la clase amistoso getters y setters
void amistoso::set_historia(std::string _historia){
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


