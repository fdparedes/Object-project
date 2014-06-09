
#ifndef FALSOVERDADERO_HPP_
#define FALSOVERDADERO_HPP_

#include "Pregunta.hpp"

class FalsoVerdadero:public Pregunta{
private:
	bool respuesta;

public:
	FalsoVerdadero(std::string pregunta,bool valor);
    ~FalsoVerdadero();

	void cambiarSeleccion();

	bool getSeleccion();
	int contarAciertos(FalsoVerdadero respuesta);

	void imprimirTerminal();

};

#endif /* FALSOVERDADERO_HPP_ */
