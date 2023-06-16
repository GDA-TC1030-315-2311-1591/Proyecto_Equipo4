/*
Esta clase define a los personajes que son guerreros, es decir, que atacan al jugador.
 Incluyendo al mismo jugador en esta clase, define metodos de ataque y curacion. 
*/
#include "guerrero.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <random>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

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
        std::cout << "Vida maxima: " << puntosSaludTotal << std::endl;
    std::cout << "Puntos de salud actuales: " << puntosSaludActual << std::endl;
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



void guerrero::juega(guerrero &t, guerrero &t2){
                if (t.get_puntosSaludActual() > 0)
          {  

    int opcion;
    bool repetir = true;
        while (repetir) {
    std::cout << "¿Que quieres hacer?" << std::endl;
    std::cout << "1. Atacar" << std::endl;
    std::cout << "2. Curar" << std::endl;
    std::cout << "Que opcion deseas?: " << std::endl;
    std::cin >> opcion;
 
        try {
            if(opcion != 1 && opcion != 2){
                    throw std::runtime_error("Opcion invalida porfavor re introduzca la opcion en valores de 1 o 2");
                }
            else{
            repetir = false;
            }
                
            }
            catch (std::runtime_error &e) {
                std::cout << e.what() << std::endl;
            }
    if (opcion == 1){
        int df = t.maxAtaque;

        int puntosDeAtaque = rand() %df;
        std::cout << "Atacaste y hiciste: " << puntosDeAtaque <<" puntos de daño"<< std::endl;
        t2.puntosSaludActual =  t2.puntosSaludActual - puntosDeAtaque;
    }
    else if (opcion == 2 && puntosSaludActual < puntosSaludTotal){
            int puntosDecuracion = rand() % 32;
            t.puntosSaludActual = t.puntosSaludActual + puntosDecuracion;
        std::cout << "Te curaste: " << puntosDecuracion <<" tienes un porcentage de vida de: " <<t.CalculoBarraVida() << "%"<< std::endl;
    }
            
          
}}} // fin del metodo juega





void guerrero::recibeInteraccion(int ataque){
    puntosSaludActual = puntosSaludActual - ataque;
}

double guerrero::CalculoBarraVida(){
    if (puntosSaludActual < 0){
        puntosSaludActual = 0;
    }
    double barraVida = (puntosSaludActual/puntosSaludTotal)*100;
    return barraVida;
}

void guerrero::imprimirBarraVida(){
    std::cout << "La barra de vida de " << nombre << " es: " << CalculoBarraVida() << "%" << std::endl;
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

// un metodo para que los amistosos le den vida.

// un metodo para que los amistosos te suban el ataque con la funcion friend y el +
    guerrero operator+(int aumento, guerrero &t){
        
        t.maxAtaque = t.maxAtaque + aumento;
        guerrero *JugadorP = &t;
        std::cout << "tu ataque maximo ahora es de: "<< t.maxAtaque << std::endl;
        return *JugadorP;
    }
// un metodo para que los amistosos te suben la puntosde salud total con la funcion friend y el ++
    guerrero operator++(guerrero &t){
        t.puntosSaludTotal = t.puntosSaludTotal + 20;
        if (t.puntosSaludActual < t.puntosSaludTotal){
            t.puntosSaludActual = t.puntosSaludTotal;
        }
        guerrero *JugadorP = &t;
        
        std::cout << "tu puntos de salud total ahora es de: "<< t.puntosSaludTotal << std::endl;
        return *JugadorP;
    }

    // un metodo para que los amistosos te bajen el ataque con la funcion friend y el -

    guerrero operator-(guerrero &t,int disminucion){
        t.maxAtaque = t.maxAtaque - disminucion;
        guerrero *JugadorP = &t;
        std::cout << "tu ataque maximo ahora es de: "<< t.maxAtaque << std::endl;
        return *JugadorP;
    }
    // un metodo para generar randoms de ataque y curacion
    
    int guerrero::generarRandom(guerrero &t){
        double s = t.get_maxAtaque();
        double *atv = &s;
        srand(time(NULL));
        int random = rand() % (int)*atv;
        return random;
    }
    //        friend guerrero operator--(guerrero &t);
    // un metodo para que los amistosos te bajen la puntosde salud actual con la funcion friend y el --
        void operator-=(guerrero &t,  int menos){
         t.puntosSaludActual -= menos;
         t.imprimirBarraVida();
    }

    void operator+=(guerrero &t, int mas)
    {
        t.puntosSaludActual = t.puntosSaludActual + mas;
        if (t.puntosSaludActual > t.puntosSaludTotal){
            t.puntosSaludActual = t.puntosSaludTotal;
        }
    }











