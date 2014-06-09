#include "SeleccionMultiple.hpp"
#include <iostream>
SeleccionMultiple::SeleccionMultiple(std::string pregunta) :
		Pregunta(pregunta) {

}

SeleccionMultiple::~SeleccionMultiple() {
}

void SeleccionMultiple::adicionarOpcionOpciones(std::string item, bool valor) {
	Opcion opcion(item, valor);
	SeleccionMultiple::opciones.push_back(opcion);
}

void SeleccionMultiple::cambiarBoolOpciones(int posicionPregunta){
	SeleccionMultiple::opciones[posicionPregunta].cambiarBoolOpcion();
}

void SeleccionMultiple::cambiarItemOpciones(int posicionPregunta, std::string item) {
	Opcion opcion = SeleccionMultiple::opciones[posicionPregunta];
	opcion.cambiarItemOpcion(item);
}
std::string SeleccionMultiple::getItemOpciones(int posicionPregunta) {
	return SeleccionMultiple::opciones[posicionPregunta].getItemOpcion();
}
bool SeleccionMultiple::getBoolOpciones(int posicionPregunta) {
	return SeleccionMultiple::opciones[posicionPregunta].getValorOpcion();
}
int SeleccionMultiple::getSizeOpciones() {
	return SeleccionMultiple::opciones.size();
}

int SeleccionMultiple::contarAciertos(SeleccionMultiple respuesta) {
	int aciertos = 0;
	int tamanoOpciones = SeleccionMultiple::opciones.size()-1;

	for (int i = 0; i <= tamanoOpciones; i++) {
		if (SeleccionMultiple::opciones[i].getValorOpcion() == true && respuesta.getBoolOpciones(i) == true){
			aciertos++;
		}
		else if (SeleccionMultiple::opciones[i].getValorOpcion() == false && respuesta.getBoolOpciones(i) == false){
			aciertos++;
		}
	}

	return aciertos;
}
void SeleccionMultiple::imprimirTerminal() {
	for (int i = 0; i < getSizeOpciones(); i++) {
		std::cout << "[" << i << "] ";
		if (getBoolOpciones(i) == true)
			std::cout << "[X]";
		else
			std::cout << "[ ]";
		std::cout << getItemOpciones(i) << std::endl;
	}
}
