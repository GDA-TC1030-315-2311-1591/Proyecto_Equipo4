/*
Esta clase define a los personajes que son guerreros, es decir, que atacan al jugador.
 Incluyendo al mismo jugador en esta clase, define metodos de ataque y curacion. 
*/
#include "guerrero.hpp"

//Constructores
guerrero::guerrero(){
    puntosSaludTotal = 0;
    puntosSaludActual = 0;
    maxAtaque = 0;
}
guerrero::guerrero(double _puntosSaludTotal, double _puntosSaludActual, double _maxAtaque,std::string _nombre, std::string _descripcion,bool _estatus){
    this->puntosSaludTotal = _puntosSaludTotal;
    this->puntosSaludActual = _puntosSaludActual;
    this->maxAtaque = _maxAtaque;
    this-> nombre = _nombre;
    this-> estatus = _estatus;
    this-> descripcion = _descripcion;
};
void guerrero::set_puntosSaludTotal(double puntosSaludTotal){
    this->puntosSaludTotal = puntosSaludTotal;
}
double guerrero::get_puntosSaludTotal(){
    return puntosSaludTotal;
}
void guerrero::set_puntosSaludActual(double puntosSaludActual){
    this->puntosSaludActual = puntosSaludActual;
}
double guerrero::get_puntosSaludActual(){
    return puntosSaludActual;
}
void guerrero::set_maxAtaque(double maxAtaque){
    this->maxAtaque = maxAtaque;
}
double guerrero::get_maxAtaque(){
    return maxAtaque;
}
void guerrero::set_nombre(std::string _nombre){
    this->nombre = _nombre;
}
std::string guerrero::get_nombre(){
    return nombre;
}
void guerrero::set_descripcion(std::string _descripcion){
    this->descripcion = _descripcion;
}
std::string guerrero::get_descripcion(){
    return descripcion;
}
void guerrero::set_estatus(bool _estatus){
    this->estatus = _estatus;
}
bool guerrero::get_estatus(){
    return estatus;
}
//Metodos virtuales
void guerrero::imprimecaract(){
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Descripcion: " << descripcion << std::endl;
    std::cout << "Puntos de salud: " << puntosSaludActual << std::endl;
    std::cout << "Puntos de ataque: " << maxAtaque << std::endl;
}

// DECLARAMOS LOS SIGUIENTES METODOS VIRTUALES
/*        void hablar() override;
        int juega() override;
        void recibeInteraccion(int) override;
        // un metodo de imprimir la barra de vida del guerrero con el nombre del guerrero en void.
        double CalculoBarraVida();//metodo para calcular la barra de vida
        void imprimirBarraVida(); // intentaremos meter una libreria que haga esto visualmente mas bonito.
        // un metodo de saber si esta vivo o no el guerrero en bool.
        bool estaVivo();
        // un metodo de curacion que use las pociones item en void.
        void curacion();
        // un metodo para que los amistosos le den vida.*/
void guerrero::hablar(){
    std::cout << "Soy " << nombre << " y te voy a dar en tu madre" << std::endl;
}

int guerrero::juega(){
    int opcion;
    std::cout << "¿Que quieres hacer?" << std::endl;
    std::cout << "1. Atacar" << std::endl;
    std::cout << "2. Curar" << std::endl;
    std::cin >> opcion;
    return opcion;
}

void guerrero::recibeInteraccion(int ataque){
    puntosSaludActual = puntosSaludActual - ataque;
}

double guerrero::CalculoBarraVida(){
    double barraVida = (puntosSaludActual/puntosSaludTotal)*100;
    return barraVida;
}

void guerrero::imprimirBarraVida(){
    std::cout << "La barra de vida de " << nombre << " es: " << CalculoBarraVida() << std::endl;
}

bool guerrero::estaVivo(){
    if(puntosSaludActual < 0){
        return false;
    }
    else{
        return true;
    }
}

void guerrero::curacion(){
    if(puntosSaludActual < puntosSaludTotal){
        puntosSaludActual = puntosSaludActual + 10;
    }
    else{
        puntosSaludActual >= puntosSaludTotal;
    }
}





