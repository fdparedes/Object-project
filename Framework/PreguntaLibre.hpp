
#ifndef PREGUNTALIBRE_HPP_
#define PREGUNTALIBRE_HPP_

#include <string>

class PreguntaLibre{
private:
	std::string pregunta;
	std::string respuesta;
public:
	PreguntaLibre();
	~PreguntaLibre();

	void adicionarPregunta(std::string pregunta);
	void adicionarRespuesta(std::string respuesta);

	std::string getPregunta();
	std::string getRespuesta();

};


#endif /* PREGUNTALIBRE_HPP_ */
