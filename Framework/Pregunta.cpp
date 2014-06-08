
#include "Pregunta.hpp"

Pregunta::Pregunta(std::string pregunta) {
	Pregunta::pregunta=pregunta;
}
Pregunta::~Pregunta() {
}

std::string Pregunta::getPregunta(){
	return Pregunta::pregunta;
}


