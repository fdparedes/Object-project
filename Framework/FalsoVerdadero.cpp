
#include "FalsoVerdadero.hpp"
#include <iostream>

//El constructor recibe la pregunta que sera utilizada para el contructor de la pregunta
//el bool sera utilizado para inicializar el atributo
FalsoVerdadero::FalsoVerdadero(std::string pregunta,bool valor):Pregunta(pregunta) {
	FalsoVerdadero::respuesta=valor;
}
FalsoVerdadero::~FalsoVerdadero() {
}
//Este metodo cambia el valor que se tiene en el atributo respuesta
//Es decir si respuesta es igual a false cambia a true
//Si respuesta es iguala true cambia a false
void FalsoVerdadero::cambiarSeleccion() {
	FalsoVerdadero::respuesta = !FalsoVerdadero::respuesta;
}

//Retorna que valor contiene en respuesta
bool FalsoVerdadero::getSeleccion(){
	return  FalsoVerdadero::respuesta;
}

//Funcion que es llamada por una pregunta y retorna 1 si acerto o 0 si no acerto
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

//Imprime bajo un estandar si esta seleccionado verdadero o falso
void FalsoVerdadero::imprimirTerminal(){
	if (FalsoVerdadero::respuesta == true) {
		std::cout << "[X]Verdadero" << std::endl;
		std::cout << "[ ]Falso" << std::endl;
	} else {
		std::cout << "[ ]Verdadero" << std::endl;
		std::cout << "[X]Falso" << std::endl;
	}

}

//Cambiar opcion es un metodo implementado para la terminal que permite realizar un cambio de seleccion
//hasta que el usuario que esta respondiendo decida que esa es la respuesta que seleccionara
void FalsoVerdadero::cambiarOpcion(){
	int h;
	while (true) {
			std::cout << getPregunta() << std::endl;
			imprimirTerminal();
			std::cout << "************************" << std::endl;
			std::cout << " (1) Cambiar de opcion. " << std::endl;
			std::cout << " (2) Continuar. "<<std::endl;
			std::cout << "************************" << std::endl;
			std::cout << "Seleccion: ";
			std::cin >> h;
			if (h == 1) {
				cambiarSeleccion();
			} else
				break;
		}

}
//Funcion que es llamado por una pregunta y se le ingresa un objeto FalsoVerdadero
//retorna true si la pregunta y la respuesta tiene una respuesta igual
//retorna false si la pregunta y la respuesta son diferentes
bool FalsoVerdadero::verificarRespuesta(FalsoVerdadero respuesta) {
	if (respuesta.getSeleccion() == getSeleccion())
		return true;
	return false;
}
