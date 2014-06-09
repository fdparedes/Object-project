
#include "FalsoVerdadero.hpp"
#include <iostream>

FalsoVerdadero::FalsoVerdadero(std::string pregunta,bool valor):Pregunta(pregunta) {
	FalsoVerdadero::respuesta=valor;
}
FalsoVerdadero::~FalsoVerdadero() {
}

void FalsoVerdadero::cambiarSeleccion() {
	FalsoVerdadero::respuesta = !FalsoVerdadero::respuesta;
}

bool FalsoVerdadero::getSeleccion(){
	return  FalsoVerdadero::respuesta;
}

int FalsoVerdadero::contarAciertos(FalsoVerdadero respuesta) {
	int flag=0;
	if (FalsoVerdadero::respuesta == true && true == respuesta.getSeleccion()) {
		flag=1;
	} else if (FalsoVerdadero::respuesta == false
			&& false == respuesta.getSeleccion()) {
		flag = 1;
	}
	return flag;
}

void FalsoVerdadero::imprimirTerminal(){
	if (FalsoVerdadero::respuesta == true) {
		std::cout << "[X]Verdadero" << std::endl;
		std::cout << "[ ]Falso" << std::endl;
	} else {
		std::cout << "[ ]Verdadero" << std::endl;
		std::cout << "[X]Falso" << std::endl;
	}

}
