
#include "Pregunta.hpp"

Pregunta::Pregunta(std::string texto) {
	Pregunta::pregunta = texto;
}
Pregunta::~Pregunta() {
	delete(this);
}

