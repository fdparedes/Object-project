/*
 * Prueba.hpp
 *
 *  Created on: 30/05/2014
 *      Author: Franco Paredes
 *      		Natalia Barrera
 *      		Andres Quintero
 */
#ifndef _PRUEBA_HPP
#define _PRUEBA_HPP

#include <string>
class Prueba {
private:
	std::string nombre;
	std::string descripcion;
	std::string objetivos;

public:
	Prueba();
	~Prueba();
	std::string getNombre();
	std::string getDescripcion();
	std::string getObjetivos();
	void setNombre(std::string nombre);
	void setDescripcion(std::string descripcion);
	void setObjetivos(std::string objetivos);
};
#endif
