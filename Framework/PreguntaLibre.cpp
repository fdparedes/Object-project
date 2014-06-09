
#include "PreguntaLibre.hpp"

//Inicializa una pregunta y el texto es el que ingresa el usuario del test
PreguntaLibre::PreguntaLibre(std::string pregunta,std::string texto):Pregunta(pregunta) {
	PreguntaLibre::texto = texto;
}
PreguntaLibre::~PreguntaLibre() {
}
//Agrega un nuevo texto en el caso que se desee modificar lo ingresado por el contructor
void PreguntaLibre::adicionarTexto(std::string texto) {
	PreguntaLibre::texto = texto;
}
//retorna lo que haya sido creado por el usuario
std::string PreguntaLibre::getTexto() {
	return PreguntaLibre::texto;
}
