// este es el hpp de cuarto
using namespace std;
#include <iostream>
#include <string>


class cuarto{
    protected:
        //atributos
        //los atributos son el nombre la descripcion y la ubicacion en string.
        std::string nombre;
        std::string descripcion;
        std::string siguiente;
        //std::string ubicacion; La quite porque ya no necesitamos ubicacion

    public:
        //constructor default
        cuarto();
        //constructor con parametros
        //cuarto(std::string, std::string, std::string,bool); La quite porque ya no necesitamos ubicacion
        cuarto(std::string, std::string,std::string);
        //metodos
        //los metodos son los getters y setters de los atributos, y los metodos de atacar y hablar.
        void set_nombre(std::string);
        std::string get_nombre();
        void set_descripcion(std::string);
        std::string get_descripcion();
        //void set_ubicacion(std::string);
        //std::string get_ubicacion();
        void set_siguiente(std::string);

        std::string get_siguiente();
        //metodos virtuales
        virtual void imprimecaract() = 0;//metodo virtual que imprime las caracteristicas del cuarto
};
