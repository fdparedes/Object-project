
#include "Opcion.hpp"

Opcion::Opcion(std::string item,bool valor) {
	Opcion::item=item;
	Opcion::valor=valor;
}
Opcion::~Opcion() {
}
void Opcion::cambiarBoolOpcion() {
	Opcion::valor=!Opcion::valor;
}
void Opcion::cambiarItemOpcion(std::string item) {
	Opcion::item=item;
}
std::string Opcion::getItemOpcion() {
	return Opcion::item;
}
bool Opcion::getValorOpcion() {
	return Opcion::valor;
}
