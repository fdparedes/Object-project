
#ifndef PREGUNTALIBRE_HPP_
#define PREGUNTALIBRE_HPP_

#include <string>
#include "Pregunta.hpp"
//Pregunta libre es un tipo de respuesta que hereda de pregunta
//contiene como respuesta un texto que haya sido ingresado por el usuario
//No contiene el metodo verificar respuesta porque depende de un psicologo
//que analice la respuesta
class PreguntaLibre: public Pregunta{
private:
	std::string texto;
public:
	//Inicializa una pregunta y el texto es el que ingresa el usuario del test
	PreguntaLibre(std::string pregunta,std::string texto);
	~PreguntaLibre();
	//Agrega un nuevo texto en el caso que se desee modificar lo ingresado por el contructor
	void adicionarTexto(std::string texto);
	//retorna lo que haya sido creado por el usuario
	std::string getTexto();

};

#endif /* PREGUNTALIBRE_HPP_ */
