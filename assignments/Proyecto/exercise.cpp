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

#include "amistoso.hpp"
#include "guerrero.hpp"
using namespace std;



int main() 
{
  srand(time(NULL));
  std::cout << "Hello World \n";
          //aqui defino un codigo que randomiza un numero entre 1 y 0
          //si el numero es 1 entonces el personaje esta vivo
          //si el numero es 0 entonces el personaje esta muerto
          //el numero random se guarda en la variable random
          //declaro un arreglo para randomizar los numeros
          int randomEam[4];
          
          for (int i = 1; i < 4; i++) {
            randomEam[i] = rand() % 2;
            cout << randomEam[i] << endl;

          }
          std::cout << random << std::endl;
          cout<< "En el reino de Elandria, un lugar de maravillas y peligros, ha surgido un conflicto entre dos antiguas\n"
          "facciones: los Guerreros del Amanecer y los Guardianes de la Amistad. Durante siglos, \n estos dos grupos han coexistido en"
          "paz, pero recientemente, una traicion maligna ha amenazado con sumir al reino en la oscuridad\n" << endl;
          cout<< "Tu mision es ayudar a los Guardianes de la amistad a derrotar a los Guerreros del Amanecer y restaurar la paz en el reino de Elandria." << endl;
          cout<< "Para lograr esto, debes encontrar a los miembros de los Guerreros del Amanecer y convencerlos de una manera brutal de que\n"
          "traicionen a su bando y te ayuden en tu mision\n" << endl;
          //instanciamos una clase guerrero
          //guerrero::guerrero(double _puntosSaludTotal, double _puntosSaludActual, double _maxAtaque,std::string _nombre, std::string _descripcion,bool _estatus){
          guerrero Jugador(100,100,10,"En un rincón remoto de un reino encantado, nació un guerrero llamado Baldo, el Guerrero Tambaleante." 
          "\nDesde pequeño, se destacó por su torpeza y falta de coordinación, pero también por su carácter optimista \ny su sentido del "
          "humor inigualable. Mientras otros guerreros blandían espadas con destreza y elegancia, \nBaldo luchaba con su espada tambaleante,"
          " más propensa a golpear accidentalmente a sus aliados\n que a los enemigos. Sin embargo, su ineptitud se compensaba con su "
          "creatividad desbordante.\n", "Con su confianza desbordante, Baldo se acercó a la piedra y, en lugar de levantarla con gracia,"
          " tropezó y cayó justo encima de ella.\n Para sorpresa de todos, la piedra salió disparada por los aires y se estrelló en el"
          " castillo del Rey Mago.\n El castillo mágico se llenó de destellos y chispas, lo que enfureció al Rey Mago y a sus seguidores.\n "
          "Creyeron que los guerreros habían lanzado deliberadamente la piedra para desafiar su autoridad. La rivalidad entre los \n"
          "guerreros y los magos alcanzó su punto máximo. Comenzaron a lanzarse hechizos y a blandir espadas, causando estragos en todo "
          "el reino.\n Pero en medio de la batalla caótica, Baldo se dio cuenta de su error y decidió intervenir.",true);
          //decimos los puntos de vida del jugador para que este los conozca junto con su vida maxima y su ataque maximo
          //implementamos el metodo imprime para jugador
          Jugador.imprimecaract();
          //instanciamos una clase amistoso que te cuente un poco que vas a hacer
          //amistoso(std::string,std::string,std::string,bool,int);

          amistoso introductorio();



          //guerrero Enemigo(100,100,10,"Enemigo","Este es el Enemigo",true);
          //instanciamos una clase amistoso
}
