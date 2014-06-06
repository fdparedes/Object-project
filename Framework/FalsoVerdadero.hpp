
#ifndef FALSOVERDADERO_HPP_
#define FALSOVERDADERO_HPP_

#include <string>

class FalsoVerdadero{
private:
	std::string pregunta;
	bool respuesta;

public:
	FalsoVerdadero();
	~FalsoVerdadero();

	void adicionarPregunta(std::string pregunta,bool respuesta);
	void cambiarRespuesta();


};

#endif /* FALSOVERDADERO_HPP_ */
