#include "Test_Memoria_Corto_Plazo.hpp"

Test_Memoria_Corto_Plazo::Test_Memoria_Corto_Plazo(string elementos[5][5],
		string respuesta[5][5]) {
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= 5; j++) {
			this->elementos[i][j] = elementos[i][j];
		}
	}
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= 5; j++) {
			this->respuesta[i][j] = respuesta[i][j];
		}
	}

	//this->respuesta = respuesta;
	veracidad = false;
}
Test_Memoria_Corto_Plazo::~Test_Memoria_Corto_Plazo() {
}

void Test_Memoria_Corto_Plazo::setElementos(string elementos[5][5]) {
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= 5; j++) {
			this->elementos[i][j] = elementos[i][j];
		}
	}
	//this->elementos = elementos;
}

void Test_Memoria_Corto_Plazo::setRespuesta(string respuesta[5][5]) {
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= 5; j++) {
			this->respuesta[i][j] = respuesta[i][j];
		}
	}
	//this->respuesta = respuesta;
}

void Test_Memoria_Corto_Plazo::anadirRespuesta(string respuestaUsuario[5][5]) {
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= 5; j++) {
			this->respuestaUsuario[i][j] = respuestaUsuario[i][j];
		}
	}
}

void Test_Memoria_Corto_Plazo::checkRespuesta() {
	veracidad = true;
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= 5; j++) {
			if (respuestaUsuario[i][j] != respuesta[i][j]) {
				veracidad = false;
			}
			//this->respuestaUsuario[i][j] = respuestaUsuario[i][j];
		}
	}

	//if (respuestaUsuario = respuesta)
	//{
	//veracidad = true;
	//}
}

bool Test_Memoria_Corto_Plazo::getVeracidad() {
	return veracidad;
}
