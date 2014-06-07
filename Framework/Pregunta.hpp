#ifndef PREGUNTA_HPP_
#define PREGUNTA_HPP_

#include <string>
template <typename TipoRespuesta>

class Pregunta{
private:
	std::string pregunta
	TipoRespuesta tipoRespuesta;
public:
	Pregunta(std::string texto);
	~Pregunta();
};

#endif /* PREGUNTA_HPP_ */
