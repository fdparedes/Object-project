/*
 * Pregunta.hpp
 *
 *  Created on: 4/06/2014
 *      Author: andres
 */

#ifndef PREGUNTA_HPP_
#define PREGUNTA_HPP_
#include <string>
#include "SeleccionMultiple.hpp"
#include "FalsoVerdadero.hpp"
#include "PreguntaLibre.hpp"
//Se debe implementar la hererncia de las demas clases...
//Faltan...
//FalsoVerdadero
//PreguntaLibre
class Pregunta: SeleccionMultiple {
private:
	std::string pregunta;

public:
	Pregunta();
	~Pregunta();
	void tipoRespuesta(int respuesta);
};

#endif /* PREGUNTA_HPP_ */
