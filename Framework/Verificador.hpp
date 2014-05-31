/*
 * Verificador.hpp
 *
 *  Created on: 30/05/2014
 *      Author: Franco Paredes
 *      		Natalia Barrera
 *      		Andres Quintero
 */
#include "Solucion.hpp"
#include "Puntaje.hpp"

class Verificador {
	int ID;
public:
	Verificador(int id) :
			ID(id) {
	}
	void getID(int id){
		ID=id;
	}
	template<typename T>
	void comparar(T obj1,T obj2){
		//Implementar...
	}
};
