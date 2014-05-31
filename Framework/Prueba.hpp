/*
 * Prueba.hpp
 *
 *  Created on: 30/05/2014
 *      Author: Franco Paredes
 *      		Natalia Barrera
 *      		Andres Quintero
 */
#include <iostream>
#include <string>

class prueba {
	int ID;
	std::string Nombre;
	std::string Descripcion;
	std::string Objetivos;

public:
	prueba() {
		ID = -1;
		Nombre = "Vacio";
		Descripcion = "Vacio";
		Objetivos = "Vacio";
	}

	void getID(int id) :
			ID(id) {
	}

	void getNombre(std::string nombre) :
			Nombre(nombre) {
	}

	void getDescripcion(std::string descripcion) :
			Descripcion(descripcion) {
	}

	void getObjetivos(std::string objetivos) :
			Objetivos(objetivos) {
	}

	template<typename T>
	void get_pregunta(int id, T obj) {
		//Implementar...
	}

	template<typename T>
	void crearPrueba(T prueba) {
		//Implementar...
	}

	virtual ~prueba() {
	}
};

