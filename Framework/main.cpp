
#include<iostream>
#include <vector>
#include "FalsoVerdadero.hpp"
#include "SeleccionMultiple.hpp"
#include "PreguntaLibre.hpp"
#include "Opcion.hpp"

int main() {
	SeleccionMultiple p1("Cual es la capital del valle?");
	SeleccionMultiple r1("respuesta de p1");
	int h;

	p1.adicionarOpcionOpciones("cali", true);
	r1.adicionarOpcionOpciones("cali",false);

	p1.adicionarOpcionOpciones("Armenia", false);
	r1.adicionarOpcionOpciones("Armenia", false);

	p1.adicionarOpcionOpciones("Tulua", false);
	r1.adicionarOpcionOpciones("Tulua", false);

	p1.adicionarOpcionOpciones("Colombia", false);
	r1.adicionarOpcionOpciones("Colombia", false);

	while (true) {
		std::cout << p1.getPregunta() << std::endl;
		r1.imprimirTerminal();
		h = -1;
		std::cout << "(1) Marcar una opcion. "<<std::endl;
		std::cout << "(2) Salir. "<<std::endl;
		std::cout << "Seleccion: ";
		std::cin >> h;
		if (h==1){
			std::cout << "que pregunta desea marcar?";
			std::cin >> h;
			r1.cambiarBoolOpciones(h);
		} else
			break;
	}

	FalsoVerdadero p2("Lopez es Crack?",true);
	FalsoVerdadero r2("Lopez es Crack?",false);
	while (true) {
		std::cout << p2.getPregunta() << std::endl;
		r2.imprimirTerminal();
		h = -1;
		std::cout << "(1) Cambiar de opcion. " << std::endl;
		std::cout << "(2) Salir. "<<std::endl;
		std::cout << "Seleccion: ";
		std::cin >> h;
		if (h == 1) {
			r2.cambiarSeleccion();
		} else
			break;
	}

	int aciertos = p1.contarAciertos(r1);

	std::cout << "En seleccion multiple acerto:" << aciertos << " veces"
			<< std::endl;

	aciertos = p2.contarAciertos(r2);

	if (aciertos == 1) {
		std::cout << "Acerto" << std::endl;
	} else {
		std::cout << "No acerto" << std::endl;
	}

	return 0;
}
