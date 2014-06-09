
#include "Opcion.hpp"

//contructor recibe un item y recibe un valor de verdad
//para saber si ese item ingresado es verdader o falso
Opcion::Opcion(std::string item,bool valor) {
	Opcion::item=item;
	Opcion::valor=valor;
}

Opcion::~Opcion() {
}
<<<<<<< HEAD
//Cambia el valor de verdad que contiene este item
=======

>>>>>>> 9918980b25f7213742513963b0977979a1dfecd5
void Opcion::cambiarBoolOpcion() {
	Opcion::valor = !Opcion::valor;
}
//Metodo que cambia el contenido del item
void Opcion::cambiarItemOpcion(std::string item) {
	Opcion::item = item;
}
//Funcion que retorna el item de esta opcion
std::string Opcion::getItemOpcion() {
	return Opcion::item;
}
//Metodo que retorna el valor de verdad de este item
bool Opcion::getValorOpcion() {
	return Opcion::valor;
}
