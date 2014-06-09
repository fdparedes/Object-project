#ifndef PREGUNTA_HPP_
#define PREGUNTA_HPP_

#include <string>
//Clase pregunta es la clase padre y contiene diferentes
//tipos de respuesta que heredan de pregunta
class Pregunta{
protected:
	std::string pregunta;
public:
	//Contructor inicializa pregunta con una pregunta
	Pregunta(std::string pregunta);
	~Pregunta();
	//retorna la pregunta que esta contenida aqui
	std::string getPregunta();
	//Modifica la pregunta que haya sido guardada anteriormente
	void setPregunta(std::string pregunta);
};

#endif /* PREGUNTA_HPP_ */
