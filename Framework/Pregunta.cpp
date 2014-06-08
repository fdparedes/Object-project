
#include "Pregunta.hpp"

Pregunta::Pregunta(std::string texto,bool valor) {
	Pregunta::pregunta = texto;
	pregunta::tipoPregunta=new FalsoVerdadero(valor);
		
}
Pregunta::Pregunta(std::string texto) {
	Pregunta::pregunta = texto;
	pregunta::tipoPregunta= new SeleccionMultiple();
		
}

Pregunta::Pregunta(std::string texto,bool valor) {
	Pregunta::pregunta = texto;
	pregunta::tipoPregunta=FalsoVerdadero(valor);
		
}
Pregunta::~Pregunta() {
	delete(this);
}


