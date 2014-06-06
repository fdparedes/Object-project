
#ifndef FALSOVERDADERO_HPP_
#define FALSOVERDADERO_HPP_

#include <string>

class FalsoVerdadero{
private:
	bool respuesta;

public:
	FalsoVerdadero();
	~FalsoVerdadero();

	void adicionarValorRespuesta(bool respuesta);
	void cambiarRespuesta();

	bool getRespuesta();

};

#endif /* FALSOVERDADERO_HPP_ */
