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

class Pregunta{
private:
	std::string pregunta;

public:
	Pregunta();
	~Pregunta();
	void tipoRespuesta(int respuesta);
};

#endif /* PREGUNTA_HPP_ */
