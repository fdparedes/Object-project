
#include "SeleccionMultiple.hpp"

SeleccionMultiple::SeleccionMultiple() {
	SeleccionMultiple::cantidadItems=0;
}
SeleccionMultiple::virtual~SeleccionMultiple() {
	delete(this);
}
void SeleccionMultiple::adicionarRespuesta(std::string item,
		bool respuesta) {
	SeleccionMultiple::item.push_back(item);
	SeleccionMultiple::respuestas.push_back(respuesta);
	SeleccionMultiple::cantidadItems=SeleccionMultiple::incrementarCantidadItems();
}

int SeleccionMultiple::getCantidadItems(){
	return SeleccionMultiple::cantidadItems;
}
void SeleccionMultiple::incrementarCantidadItems(){
	SeleccionMultiple::cantidadItems++;
}
