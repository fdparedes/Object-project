
#include "PreguntaLibre.hpp"
//Incompleto..
//Revisar error..
PreguntaLibre::PreguntaLibre();
PreguntaLibre::~PreguntaLibre();

void PreguntaLibre::adicionarRespuesta(std::string respuesta) {
	PreguntaLibre::respuesta=respuesta;
}

std::string PreguntaLibre::getRespuesta() {
	return PreguntaLibre::respuesta;
}

