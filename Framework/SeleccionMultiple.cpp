
#include "SeleccionMultiple.hpp"

SeleccionMultiple::SeleccionMultiple() {
	
}
SeleccionMultiple::virtual~SeleccionMultiple() {
	delete(this);
}

	SeleccionMultiple();
	~SeleccionMultiple();
	void 
	bool getBoolItem(int posicionPregunta);
	
void SeleccionMultiple::adicionarOpcionOpciones(Opciones opcion) {
	SeleccionMultiple::opciones.push_back(opcion);
}

void SeleccionMultiple::cambiarBoolOpciones(int posicionPregunta, bool valorRespuesta){
	SeleccionMultiple::opciones[posicionPregunta]=this->cambiarBoolOpcion(valorRespuesta);
}

void SeleccionMultiple::cambiarItemOpciones(int posicionPregunta, std::string item) {
	SeleccionMultiple::opciones[posicionPregunta]=this->cambiarItemOpcion(item);
}

void eliminarOpcionOpciones(int posicionPregunta){
	SeleccionMultiple::opciones.erase(opciones.begin()+posicionPregunta);
}
std::string getItemOpciones(int posicionPregunta){
	std::string item;
	item = SeleccionMultiple::opciones[posicionPregunta].getItemOpcion();
	return item;
}

bool getBoolOpciones(int posicionPregunta){
	bool valor;
	valor = SeleccionMultiple::opciones[posicionPregunta].getValorOpcion();
	return valor;
}

