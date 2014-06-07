
#include "PreguntaLibre.hpp"

PreguntaLibre::PreguntaLibre(std::string texto):PreguntaLibre::texto(texto){
}
PreguntaLibre::virtual~PreguntaLibre(){
	delete(this);
}

void PreguntaLibre::adicionarTexto(std::string texto) {
	PreguntaLibre::texto=texto;
}

std::string PreguntaLibre::getRespuesta() {
	return PreguntaLibre::texto;
}
