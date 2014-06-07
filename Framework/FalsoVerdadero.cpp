
#include "FalsoVerdadero.hpp"

FalsoVerdadero::FalsoVerdadero(bool valor):FalsoVerdadero::respuesta(valor) {
}
FalsoVerdadero::virtual ~FalsoVerdadero() {
	delete(this);
}

void FalsoVerdadero::cambiarRespuesta() {
	FalsoVerdadero::respuesta != FalsoVerdadero::respuesta;
}

bool getSeleccion(){
	return FalsoVerdadero::respuesta;
}
