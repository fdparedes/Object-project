
#include "Pregunta.hpp"
//Contructor inicializa pregunta con una pregunta
Pregunta::Pregunta(std::string pregunta) {
	Pregunta::pregunta=pregunta;
}
Pregunta::~Pregunta() {
}
//retorna la pregunta que esta contenida aqui
std::string Pregunta::getPregunta(){
	return Pregunta::pregunta;
}

//Modifica la pregunta que haya sido guardada anteriormente
void Pregunta::setPregunta(std::string pregunta){
	Pregunta::pregunta=pregunta;
}

