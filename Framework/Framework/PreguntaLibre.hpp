
#ifndef PREGUNTALIBRE_HPP_
#define PREGUNTALIBRE_HPP_

#include <string>
#include "Pregunta.hpp"

class PreguntaLibre: public Pregunta{
private:
	std::string texto;
public:
	PreguntaLibre(std::string pregunta,std::string texto);
	~PreguntaLibre();

	void adicionarTexto(std::string texto);
	std::string getTexto();

};

#endif /* PREGUNTALIBRE_HPP_ */
