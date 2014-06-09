
#include "Prueba.hpp"
//Contructor inicializa la prueba con su nombre, descripcion y objetivos
Prueba::Prueba(std::string nombre, std::string descripcion, std::string objetivos) {
	Prueba::nombre=nombre;
	Prueba::descripcion=descripcion;
	Prueba::objetivos=objetivos;
}
Prueba::~Prueba() {
}
//Retorna el nombre de la prueba
std::string Prueba::getNombre() {
	return Prueba::nombre;
}
//Retorna la descripcion de la prueba
std::string Prueba::getDescripcion() {
	return Prueba::descripcion;
}
//Retorna los objetivos de la prueba
std::string Prueba::getObjetivos() {
	return Prueba::objetivos;
}
//Cambia el nombre de la prueba
void Prueba::setNombre(std::string nombre) {
	Prueba::nombre = nombre;
}
//Cambia la descripcion de la prueba
void Prueba::setDescripcion(std::string descripcion) {
	Prueba::descripcion = descripcion;
}
//Cambia los objetivos de la prueba
void Prueba::setObjetivos(std::string objetivos) {
	Prueba::objetivos = objetivos;
}

