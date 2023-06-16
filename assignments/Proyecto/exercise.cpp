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
  
  std::string line;
  srand(time(NULL));
  int numescogido;
          //aqui defino un codigo que randomiza un numero entre 1 y 0
          //si el numero es 1 entonces el personaje esta vivo
          //si el numero es 0 entonces el personaje esta muerto
          //el numero random se guarda en la variable random
          //declaro un arreglo para randomizar los numeros
          int randomEam[4];
          for (int i = 1; i < 4; i++) {
            randomEam[i] = rand() % 2;
          }
          int randomPextra[15];
          for (int i = 1; i < 15; i++) {
            randomPextra[i] = rand() % 31;
          }



          //inicia la historia
          cout<< "En el reino de Elandria, un lugar de maravillas y peligros, ha surgido un conflicto entre dos antiguas\n"
          "facciones: los Guerreros del Amanecer y los Guardianes de la Amistad. Durante siglos, \n estos dos grupos han coexistido en"
          "paz, pero recientemente, una traicion maligna ha amenazado con sumir al reino en la oscuridad" << endl;
           std::getline(std::cin, line);
          cout<< "Tu mision es ayudar a los Guardianes de la amistad a derrotar a los Guerreros del Amanecer y restaurar la paz en el reino de Elandria." << endl;
           std::getline(std::cin, line);
          cout<< "Para lograr esto, debes encontrar a los miembros de los Guerreros del Amanecer y convencerlos de una manera brutal de que\n"
          "traicionen a su bando y te ayuden en tu mision\n" << endl;
           std::getline(std::cin, line);
          //instanciamos una clase guerrero
          //guerrero::guerrero(double _puntosSaludTotal, double _puntosSaludActual, double _maxAtaque,std::string _nombre, std::string _descripcion,bool _estatus){
          guerrero Jugador(100,100,10,"Baldo\n", "Con su confianza desbordante, Baldo se acercó a la piedra y, en lugar de levantarla con gracia,"
          " tropezó y cayó justo encima de ella.\n Para sorpresa de todos, la piedra salió disparada por los aires y se estrelló en el"
          " castillo del Rey Mago.\n El castillo mágico se llenó de destellos y chispas, lo que enfureció al Rey Mago y a sus seguidores.\n "
          "Creyeron que los guerreros habían lanzado deliberadamente la piedra para desafiar su autoridad. La rivalidad entre los \n"
          "guerreros y los magos alcanzó su punto máximo. Comenzaron a lanzarse hechizos y a blandir espadas, causando estragos en todo "
          "el reino.\n Pero en medio de la batalla caótica, Baldo se dio cuenta de su error y decidió intervenir.\n",true);
          //decimos los puntos de vida del jugador para que este los conozca junto con su vida maxima y su ataque maximo
          //implementamos el metodo imprime para jugador
          //creamos un apuntador a la clase guerrero 
          while (Jugador.get_puntosSaludActual() >= 0)
          {

          Jugador.imprimecaract();
                     std::getline(std::cin, line);

          //instanciamos una clase amistoso que te cuente un poco que vas a hacer
          //amistoso(std::string,std::string,std::string,bool,int);
          amistoso introductorio1("Hada flora", "Hola, soy el hada flora, y te voy a ayudar en tu mision. \npara encontrar el diamante que acabe con la guerra tienes que Asesinar a los demas guerreros ", "Te aumentare tu ataque maximo en: ",true,randomPextra[1]);
          //implementamos el metodo imprime para introductorio
          introductorio1.imprimecaract();
                    Jugador = randomPextra[1] + Jugador;

                     std::getline(std::cin, line);

          //friend guerrero operator+(int aumento, guerrero &t);  
          amistoso introductorio2("Hada Titania", "Hola, soy el hada Titania, y te voy a ayudar en tu mision. \nTe aumentare tu vida maxima en 20", "suerte en tu mision!\n\n",true,0);
          introductorio2.imprimecaract();
                    Jugador = ++Jugador;

                     std::getline(std::cin, line);

          cout<< "Ahora que ya sabes lo que tienes que hacer, es hora de que te pongas en marcha."<< endl;
          cout<< "Te diriges al bosque de los arboles parlantes, donde se encuentra el primer guerrero que debes convencer a la mala."<< endl;
          cout<< "Al llegar al bosque, te encuentras con un arbol parlante que te dice: \n"<< endl;
          std::getline(std::cin, line);


          amistoso introductorio3("Arbol parlante"," Un arbol sabio que se encuentra en el bosque, y trafica hadas para aumentar poderes", "Te aumentarle el ataque si tienes suerte\n",true,0);
          introductorio3.imprimecaract();
                     std::getline(std::cin, line);
          //hay que hacer un codigo que pida un numero 0 o 1 y que si es igual a randomEam aumente el ataque del jugador
          cout<< "El arbol parlante te dice escoge un numero 0 o 1: \n"<< endl;
          cin>>numescogido;
          if (numescogido == randomEam[1])
          {
            cout<< "El arbol parlante te dice: \n"<< endl;
            cout<< "Felicidades, has tenido suerte, tu ataque aumenta en: "<<randomPextra[2]<< endl;
            Jugador = randomPextra[2] + Jugador;
            Jugador.get_maxAtaque();
          }
          else
          {
            cout<< "El arbol parlante te dice: \n"<< endl;
            cout<< "Lo siento, no has tenido suerte, tu ataque no aumenta, y no solo eso te intenta secuestrar y te roba bastantes puntos de ataque en total:"<<randomPextra[2]<< endl;
            Jugador = Jugador - randomPextra[2] ;
          }
                     std::getline(std::cin, line);
          cout<< "Despues de esto, te diriges a la cueva de los murcielagos, donde se encuentra el primer guerrero que debes convencer a la mala."<< endl;
          cout<< "Al llegar a la cueva, te encuentras con vampiro que te dice: \n"<< endl;
          std::getline(std::cin, line);
          //declaramos el objeto vampiro que es un objeto de guerrero
          guerrero vampiro(150, 150, 30,"Edwardo","Con su tez pálida y ojos penetrantes, posee una apariencia seductora y enigmática. Su figura es esbelta y elegante, pero oculta una fuerza sobrenatural.",true);

          //implementamos el metodo imprime para vampiro
          vampiro.imprimecaract();
                     std::getline(std::cin, line);
          //inicia la primera batalla con el vampiro
          while (vampiro.get_puntosSaludActual() > 0 && Jugador.get_puntosSaludActual() > 0)
          {
  
          int menos = vampiro.generarRandom(vampiro);
          
          cout<< "El vampiro te ataca y te quita: "<< menos<< " puntos de vida"<< endl;
          //utilizando la sobrecarga -=
          Jugador -= menos;
          std::getline(std::cin, line);
          Jugador.juega();
          

          
            
          }

          break;








          //guerrero Enemigo(100,100,10,"Enemigo","Este es el Enemigo",true);
          //instanciamos una clase amistoso
}
}