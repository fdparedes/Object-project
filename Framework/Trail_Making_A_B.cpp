#include "Trail_Making_A_B.hpp"
#include <iostream>

Trail_Making_A_B::Trail_Making_A_B(string pregunta, vector<string> elementos,
		vector<string> respuesta) :
		Pregunta(pregunta) {

	Trail_Making_A_B::elementos = elementos;
	Trail_Making_A_B::respuesta = respuesta;
	Trail_Making_A_B::veracidad = false;
}

Trail_Making_A_B::~Trail_Making_A_B() {
}

void Trail_Making_A_B::setElementos(vector<string> elementos) {
	this->elementos = elementos;
}

void Trail_Making_A_B::setRespuesta(vector<string> respuesta) {
	this->respuesta = respuesta;
}
void Trail_Making_A_B::anadirRespuestaUsuario(vector<string> respuestaUsuario) {
	this->respuestaUsuario = respuestaUsuario;
}

void Trail_Making_A_B::eliminarOpcion(int posicion) {
	this->respuestaUsuario.erase(this->respuestaUsuario.begin() + posicion);
}
void Trail_Making_A_B::checkRespuesta() {
	Trail_Making_A_B::veracidad = true;
	std::string opcion1,opcion2;
	for (int i = 0; i < cantidadElementos(); i++) {
		opcion1=Trail_Making_A_B::respuesta[i];
		opcion2=Trail_Making_A_B::respuestaUsuario[i];
		if (opcion1!= opcion2) {
			Trail_Making_A_B::veracidad = false;
			break;
		}
	}
}
bool Trail_Making_A_B::getVeracidad() {
	return veracidad;
}

int Trail_Making_A_B::cantidadElementos(){
	return this->elementos.size();
}

void Trail_Making_A_B::imprimirElementosTerminal(){
	for(int i=0;i<cantidadElementos();i++)
		std::cout<<this->elementos[i]<<" ";
	std::cout<<std::endl;
}
void Trail_Making_A_B::imprimirRespuestaUsuario(){
	for(int i=0;i<cantidadElementos();i++)
		std::cout<<this->respuestaUsuario[i]<<" ";
	std::cout<<std::endl;
}

void Trail_Making_A_B::intercambiarRespuestaUsuario(int posicion1,
		int posicion2) {
	if (posicion1 >= 0 && posicion1 < cantidadElementos() && posicion2 >= 0
			&& posicion2 < cantidadElementos()) {
		std::string temp = Trail_Making_A_B::respuestaUsuario[posicion1];
		Trail_Making_A_B::respuestaUsuario[posicion1] =
				Trail_Making_A_B::respuestaUsuario[posicion2];
		Trail_Making_A_B::respuestaUsuario[posicion2] = temp;
	}
}

void Trail_Making_A_B::setTiempo(int tiempo){
	Trail_Making_A_B::tiempo=tiempo;
}

int Trail_Making_A_B::getTiempo(){
	return Trail_Making_A_B::tiempo;
}
