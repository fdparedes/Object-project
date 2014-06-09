
#include "Prueba.hpp"

Prueba::Prueba() {
}
Prueba::~Prueba() {
}

std::string Prueba::getNombre() {
	return Prueba::nombre;
}
std::string Prueba::getDescripcion() {
	return Prueba::descripcion;
}
std::string Prueba::getObjetivos() {
	return Prueba::objetivos;
}
void Prueba::setNombre(std::string nombre) {
	Prueba::nombre = nombre;
}
void Prueba::setDescripcion(std::string descripcion) {
	Prueba::descripcion = descripcion;
}
void Prueba::setObjetivos(std::string objetivos) {
	Prueba::objetivos = objetivos;
}

