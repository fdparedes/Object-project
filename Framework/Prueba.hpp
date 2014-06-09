
#ifndef _PRUEBA_HPP
#define _PRUEBA_HPP

#include <string>
#include "Puntaje.hpp"

//Prueba hereda de puntaje  y contiene los objetivos nombre de la prueba y los puntos
//que el usuario haya adquirido en esa prueba
class Prueba:public Puntaje{
private:
	std::string nombre;
	std::string descripcion;
	std::string objetivos;

public:
	//Contructor inicializa la prueba con su nombre, descripcion y objetivos
	Prueba(std::string nombre, std::string descripcion, std::string objetivos);
	~Prueba();
	//Retorna el nombre de la prueba
	std::string getNombre();
	//Retorna la descripcion de la prueba
	std::string getDescripcion();
	//Retorna los objetivos de la prueba
	std::string getObjetivos();
	//Cambia el nombre de la prueba
	void setNombre(std::string nombre);
	//Cambia la descripcion de la prueba
	void setDescripcion(std::string descripcion);
	//Cambia los objetivos de la prueba
	void setObjetivos(std::string objetivos);
};
#endif
