
#ifndef FALSOVERDADERO_HPP_
#define FALSOVERDADERO_HPP_

#include "Pregunta.hpp"

class FalsoVerdadero:Pregunta{
private:
	bool respuesta;

public:
	FalsoVerdadero(bool valor);
	virtual ~FalsoVerdadero();

	void cambiarSeleccion();

	bool getSeleccion();

};

#endif /* FALSOVERDADERO_HPP_ */
