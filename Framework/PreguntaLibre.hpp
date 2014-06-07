
#ifndef PREGUNTALIBRE_HPP_
#define PREGUNTALIBRE_HPP_

#include <string>

class PreguntaLibre:Pregunta{
private:
	std::string texto;
public:
	PreguntaLibre(std::string texto);
	virtual ~PreguntaLibre();

	void adicionarTexto(std::string texto);
	std::string getTexto();

};

#endif /* PREGUNTALIBRE_HPP_ */
