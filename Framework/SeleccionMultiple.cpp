
#include "SeleccionMultiple.hpp"

SeleccionMultiple::SeleccionMultiple() {
}
SeleccionMultiple::~SeleccionMultiple() {
}
void SeleccionMultiple::adicionarPregunta(std::string pregunta,
		bool respuesta) {
	SeleccionMultiple::preguntas.push_back(pregunta);
	SeleccionMultiple::respuestas.push_back(respuesta);
}
