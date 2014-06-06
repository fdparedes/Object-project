
#ifndef PREGUNTALIBRE_HPP_
#define PREGUNTALIBRE_HPP_

#include <string>

class PreguntaLibre{
private:
	std::string respuesta;
public:
	PreguntaLibre();
	~PreguntaLibre();

	void adicionarRespuesta(std::string respuesta);

	std::string getRespuesta();

};


#endif /* PREGUNTALIBRE_HPP_ */
