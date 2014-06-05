
#ifndef SELECCIONMULTIPLE_HPP_
#define SELECCIONMULTIPLE_HPP_

#include <string>
#include <vector>
class SeleccionMultiple {
private:
	std::vector<std::string> preguntas;
	std::vector<bool> respuestas;
public:
	SeleccionMultiple();
	~SeleccionMultiple();
	void adicionarPregunta(std::string pregunta,bool respuesta);

};


#endif /* SELECCIONMULTIPLE_HPP_ */
