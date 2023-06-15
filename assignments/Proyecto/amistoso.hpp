//Esta clase esta declarada en el archivo amistoso.cpp y es hija de la clase personaje
//la clase amistoso define a los personajes que son amistosos, es decir, que no atacan, y que narran la historia.
//el estatus es si habla o no, y el nombre es el nombre del personaje.
#pragma once
#include "personaje.hpp"

class amistoso: public personaje
{
    public:
        //constructores
        amistoso();
        amistoso(std::string,std::string,std::string,bool,int);
        //metodos
        //los metodos son los getters y setters de los atributos, y los metodos de atacar y hablar.
        void set_nombre(std::string);
        std::string get_nombre();
        void set_descripcion(std::string);
        std::string get_descripcion();
        //void set_ubicacion(std::string); No necesitamos ubicacion
       // std::string get_ubicacion(); No necesitamos ubicacion
        void set_estatus(bool);
        bool get_estatus();
       void set_puntos(int);
        int get_puntos();
        void set_historia(std::string);//metodo para cambiar la historia
        std::string get_historia();//metodo para obtener la historia
        //metodos virtuales
        void imprimecaract() override; //metodo virtual que imprime las caracteristicas del personaje
        void hablar() override; 
        int juega() override;
        void recibeInteraccion(int) override;
    protected:
        //atributos
        //los atributos son el nombre en string y los puntos de salud que regenera el item en int.
        /*Segun yo como se uso herencia, no es necesario declarar los atributos de la clase personaje
        std::string nombre;
        std::string descripcion;
        std::string ubicacion;
        bool estatus;
        */
        int puntos; //Que es esto?
        std::string historia;
  
};


