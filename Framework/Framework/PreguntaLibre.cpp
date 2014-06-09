
#include "PreguntaLibre.hpp"

PreguntaLibre::PreguntaLibre(std::string pregunta,std::string texto):Pregunta(pregunta) {
	PreguntaLibre::texto = texto;
}
PreguntaLibre::~PreguntaLibre() {
}

void PreguntaLibre::adicionarTexto(std::string texto) {
	PreguntaLibre::texto = texto;
}

std::string PreguntaLibre::getTexto() {
	return PreguntaLibre::texto;
}
