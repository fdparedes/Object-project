#include "SeleccionMultiple.hpp"
#include <iostream>

//Inicializa el contructor de Pregunta con una pregunta no se inicializa el vector
//con el metodo adicionarOpcionOpcinoes se agregan respuestas al vector
SeleccionMultiple::SeleccionMultiple(std::string pregunta) :
		Pregunta(pregunta) {

}

SeleccionMultiple::~SeleccionMultiple() {
}

//Se crea una opcion de respuesta y se le asigna su item y su valor de verdad
//Se agrega al vector
void SeleccionMultiple::adicionarOpcionOpciones(std::string item, bool valor) {
	Opcion opcion(item, valor);
	SeleccionMultiple::opciones.push_back(opcion);
}
//Se modifica el valor de verdad de una opcion segun la posicion dada
void SeleccionMultiple::cambiarBoolOpciones(int posicionPregunta){
	SeleccionMultiple::opciones[posicionPregunta].cambiarBoolOpcion();
}
//Se modifica un item de una opcion que se encuentra en una posicion dada
void SeleccionMultiple::cambiarItemOpciones(int posicionPregunta, std::string item) {
	Opcion opcion = SeleccionMultiple::opciones[posicionPregunta];
	opcion.cambiarItemOpcion(item);
}
//Retorna el item de una posicion dada
std::string SeleccionMultiple::getItemOpciones(int posicionPregunta) {
	return SeleccionMultiple::opciones[posicionPregunta].getItemOpcion();
}
//retorna el valor de verdad de una opcion dada
bool SeleccionMultiple::getBoolOpciones(int posicionPregunta) {
	return SeleccionMultiple::opciones[posicionPregunta].getValorOpcion();
}
//retorna la cantidad de datos que contiene el vector de opciones
int SeleccionMultiple::getSizeOpciones() {
	return SeleccionMultiple::opciones.size();
}
//Cuenta la cantidad de aciertos que hay con las respuestas ingresadas por el usuario
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
//imprime las opciones en la terminal
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
//Metodo que interactua con usuario para saber que opciones va a marcar o desmarcar
void SeleccionMultiple::cambiarOpcion() {
	int h;
	while (true) {
		std::cout << SeleccionMultiple::pregunta << std::endl;
		imprimirTerminal();
		std::cout << "***********************" << std::endl;
		std::cout << "(1) Marcar una opcion. " << std::endl;
		std::cout << "(2) Salir. " << std::endl;
		std::cout << "***********************" << std::endl;
		std::cout << "Seleccion: ";
		std::cin >> h;
		if (h == 1) {
			std::cout << "Que respuesta desea marcar: ";
			std::cin >> h;
			cambiarBoolOpciones(h);
		} else if (h == 2)
			break;
		else
			std::cout << "Opcion no valida." << std::endl;
	}

}
//Verifica si las respuestas dadas en una pregunta conresponde a las respuestas ingresadas por el usuario
//Si algun valor de una opcion pregunta no corresponde con una respuesta retorna false
bool SeleccionMultiple::verificarRespuesta(SeleccionMultiple respuesta){
	if(contarAciertos(respuesta)==getSizeOpciones())
		return true;
	return false;
}
