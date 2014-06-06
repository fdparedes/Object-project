
#include "SeleccionMultiple.hpp"

SeleccionMultiple::SeleccionMultiple() {
}
SeleccionMultiple::~SeleccionMultiple() {
}
void SeleccionMultiple::adicionarRespuesta(std::string item,
		bool respuesta) {
	SeleccionMultiple::item.push_back(item);
	SeleccionMultiple::respuestas.push_back(respuesta);
}
