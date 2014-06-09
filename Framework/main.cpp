
#include<iostream>
#include <vector>
#include "FalsoVerdadero.hpp"
#include "SeleccionMultiple.hpp"
#include "PreguntaLibre.hpp"
#include "Opcion.hpp"
#include "Restricciones.hpp"
#include "Prueba.hpp"
#include "Trail_Making_A_B.hpp"

int main() {
	/*
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
		std::cout << "***********************"<<std::endl;
		std::cout << "(1) Marcar una opcion. "<<std::endl;
		std::cout << "(2) Salir. "<<std::endl;
		std::cout << "***********************"<<std::endl;
		std::cout << "Seleccion: ";
		std::cin >> h;
		if (h==1){
			std::cout << "Que respuesta desea marcar: ";
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
		std::cout << "FalsoVerdadero:Acerto" << std::endl;
	} else {
		std::cout << "FalsoVerdadero:No acerto" << std::endl;
	}

	Restricciones tiempo;
	std::cout<<"Tiene 10 Seg para responderla siguiente prueba."<<std::endl;
	std::cout<<"Ingresa un numero para continuar.";
	std::cin>>h;
	std::cout<<"Ingrese un entero que:(10<x<12): ";
	tiempo.iniciarTiempo();
	std::cin>>h;
	tiempo.terminarTiempo();
	if(tiempo.diferenciaTiempo()>10)
		std::cout<<"Erroneo! Excedio el tiempo."<<std::endl;
	else
		if(h==11)
			std::cout<<"Muy bien:Cumplio el tiempo y la respuesta es correcta"<<std::endl;
		else
			std::cout<<"Error el numero era 11"<<std::endl;

	std::cout<<"Se demoro en responder "<<tiempo.diferenciaTiempo()<<" Segundos."<<std::endl;
	*/

	int h=1;
	std::cout<<"Bienvenido."<<std::endl;
	std::cout<<"*************************"<<std::endl;
	std::cout<<"* (1) Test de memoria.  *"<<std::endl;
	std::cout<<"* (2) Test de atencion. *"<<std::endl;
	std::cout<<"*************************"<<std::endl;
	std::cout<<"Seleccione un test: ";
	std::cin>>h;
	while (h != 1 && h != 2) {
		std::cout << "Error seleccione una opcion valida\n";
		std::cout<<"*************************"<<std::endl;
		std::cout<<"* (1) Test de memoria.  *"<<std::endl;
		std::cout<<"* (2) Test de atencion. *"<<std::endl;
		std::cout<<"*************************"<<std::endl;
		std::cout << "Seleccione un test: " << std::endl;
		std::cin >> h;
	}
	switch (h) {
	case 1: {
		std::string nombre = "Test de inteligencia de infancia\n";
		std::string descripcion =
				"Los ninos de 8 a 11 anos de edad deben responder\n"
						"solos las siguientes preguntas.\n";
		std::string objetivos = "N/A\n";

		Prueba prueba(nombre, descripcion, objetivos);

		std::string Enunciado =
				"Cuenta todas las apariciones del numero 8:\n(860688606866066800680688608060086806680860868)";
		SeleccionMultiple p1(Enunciado);
		SeleccionMultiple r1(Enunciado);

		p1.adicionarOpcionOpciones("13 apariciones", false);
		r1.adicionarOpcionOpciones("13 apariciones", false);

		p1.adicionarOpcionOpciones("14 apariciones", true);
		r1.adicionarOpcionOpciones("14 apariciones", false);

		p1.adicionarOpcionOpciones("15 apariciones", false);
		r1.adicionarOpcionOpciones("15 apariciones", false);

		p1.adicionarOpcionOpciones("16 apariciones", false);
		r1.adicionarOpcionOpciones("16 apariciones", false);

		p1.adicionarOpcionOpciones("Ninguna de las anteriores.", false);
		r1.adicionarOpcionOpciones("Ninguna de las anteriores.", false);

		Enunciado = "Cuenta todas las apariciones del numero 96:"
				"(66966999699696696996699666996966969669696996)\n";
		SeleccionMultiple p2(Enunciado);
		SeleccionMultiple r2(Enunciado);

		p2.adicionarOpcionOpciones("13 apariciones", false);
		r2.adicionarOpcionOpciones("13 apariciones", false);

		p2.adicionarOpcionOpciones("14 apariciones", false);
		r2.adicionarOpcionOpciones("14 apariciones", false);

		p2.adicionarOpcionOpciones("15 apariciones", true);
		r2.adicionarOpcionOpciones("15 apariciones", false);

		p2.adicionarOpcionOpciones("16 apariciones", false);
		r2.adicionarOpcionOpciones("16 apariciones", false);

		p2.adicionarOpcionOpciones("Ninguna de las anteriores.", false);
		r2.adicionarOpcionOpciones("Ninguna de las anteriores.", false);

		Enunciado = "Dada la siguiente tabla de equivalencias:\n"
				"0   1   2   3   4   5   6   7   8   9\n"
				"A   B   C   D   E   F   G   H   I   J\n"
				"Calcular el valor de:\n"
				"E + H - I";
		SeleccionMultiple p3(Enunciado);
		SeleccionMultiple r3(Enunciado);

		p3.adicionarOpcionOpciones("2", false);
		r3.adicionarOpcionOpciones("2", false);

		p3.adicionarOpcionOpciones("4", false);
		r3.adicionarOpcionOpciones("4", false);

		p3.adicionarOpcionOpciones("6", false);
		r3.adicionarOpcionOpciones("6", false);

		p3.adicionarOpcionOpciones("8", false);
		r3.adicionarOpcionOpciones("8", false);

		p3.adicionarOpcionOpciones("Ninguna de las anteriores.", true);
		r3.adicionarOpcionOpciones("Ninguna de las anteriores.", false);

		Enunciado = "Dada la tabla anterior, calcula:\n"
				"AC + DC\n";
		SeleccionMultiple p4(Enunciado);
		SeleccionMultiple r4(Enunciado);

		p4.adicionarOpcionOpciones("44", false);
		r4.adicionarOpcionOpciones("44", false);

		p4.adicionarOpcionOpciones("34", false);
		r4.adicionarOpcionOpciones("34", false);

		p4.adicionarOpcionOpciones("24", false);
		r4.adicionarOpcionOpciones("24", false);

		p4.adicionarOpcionOpciones("4", false);
		r4.adicionarOpcionOpciones("4", false);

		p4.adicionarOpcionOpciones("Ninguna de las anteriores.", true);
		r4.adicionarOpcionOpciones("Ninguna de las anteriores.", false);

		Enunciado = "La siguientes dos series de letras son iguales? \n"
				"\tcomvewpuvyy\t-\tcomvewpueyy";
		FalsoVerdadero p5(Enunciado, false);
		FalsoVerdadero r5(Enunciado, false);

		Enunciado = "La siguientes dos series de numeros son distintas? \n"
				"\t74682033470543\t-\t74682033470643";
		FalsoVerdadero p6(Enunciado, true);
		FalsoVerdadero r6(Enunciado, false);

		std::cout << "Nombre de la prueba: " << prueba.getNombre();
		std::cout << "Descripcion de la prueba: " << prueba.getDescripcion();
		std::cout << "Objetivos de la prueba: " << prueba.getObjetivos();
		std::cout << "Ingrese un numero para continuar...";
		std::cin >> h;
		r1.cambiarOpcion();
		r2.cambiarOpcion();
		r3.cambiarOpcion();
		r4.cambiarOpcion();
		r5.cambiarOpcion();
		r6.cambiarOpcion();
		h = 1;
		if (p1.verificarRespuesta(r1) == true) {
			std::cout << "Correcto" << h << std::endl;
			prueba.sumarPuntos(10);
		} else {
			prueba.restarPuntos(5);
			std::cout << "Incorrecto" << h << std::endl;
		}
		h++;
		if (p2.verificarRespuesta(r2) == true) {
			std::cout << "Correcto" << h << std::endl;
			prueba.sumarPuntos(10);
		} else {
			prueba.restarPuntos(5);
			std::cout << "Incorrecto" << h << std::endl;
		}
		h++;
		if (p3.verificarRespuesta(r3) == true) {
			std::cout << "Correcto" << h << std::endl;
			prueba.sumarPuntos(10);
		} else {
			prueba.restarPuntos(5);
			std::cout << "Incorrecto" << h << std::endl;
		}
		h++;
		if (p4.verificarRespuesta(r4) == true) {
			std::cout << "Correcto" << h << std::endl;
			prueba.sumarPuntos(10);
		} else {
			prueba.restarPuntos(5);
			std::cout << "Incorrecto" << h << std::endl;
		}
		h++;
		if (p5.verificarRespuesta(r5) == true) {
			std::cout << "Correcto" << h << std::endl;
			prueba.sumarPuntos(10);
		} else {
			prueba.restarPuntos(5);
			std::cout << "Incorrecto" << h << std::endl;
		}
		h++;
		if (p6.verificarRespuesta(r6) == true) {
			std::cout << "Correcto" << h << std::endl;
			prueba.sumarPuntos(10);
		} else {
			prueba.restarPuntos(5);
			std::cout << "Incorrecto" << h << std::endl;
		}

		std::cout << "El total de puntos es:" << prueba.getPuntos();
		break;
	}
	case 2: {
		Restricciones tiempo;
		std::string nombre = "Trail Making A - B\n";
		std::string descripcion ="N/A\n";
		std::string objetivos = "N/A\n";

		Prueba prueba(nombre, descripcion, objetivos);
		std::string pregunta1="Ordene las siguientes letras en orden alfabetico.\n";
		std::vector<std::string> Enunciado;
		Enunciado.push_back("b");
		Enunciado.push_back("a");
		Enunciado.push_back("c");
		Enunciado.push_back("e");
		Enunciado.push_back("f");
		Enunciado.push_back("d");
		std::vector<std::string> RespuestaValidas;
		RespuestaValidas.push_back("a");
		RespuestaValidas.push_back("b");
		RespuestaValidas.push_back("c");
		RespuestaValidas.push_back("d");
		RespuestaValidas.push_back("e");
		RespuestaValidas.push_back("f");

		std::cout << "Nombre de la prueba: " << prueba.getNombre();
		std::cout << "Descripcion de la prueba: " << prueba.getDescripcion();
		std::cout << "Objetivos de la prueba: " << prueba.getObjetivos();
		std::cout << "Ingrese un numero para continuar...";
		std::cin >> h;
		std::cout << "En estas pruebas se evaluara el tiempo";
		std::cout << "Ingrese un numero para continuar...";
		std::cin >> h;
		Trail_Making_A_B p1(pregunta1,Enunciado,RespuestaValidas);
		std::cout<<p1.getPregunta()<<std::endl;
		std::vector<std::string> usuarioRespuestas;
		std::string letra;
		int pregunta;
		p1.imprimirElementosTerminal();
		tiempo.iniciarTiempo();
		for(int i=0;i<p1.cantidadElementos();i++){
			std::cout<<"Ingrese la letra "<<i<<": ";
			std::cin>>letra;
			usuarioRespuestas.push_back(letra);
		}

		p1.anadirRespuestaUsuario(usuarioRespuestas);
		std::cout<<"Su solucion es:";
		p1.imprimirRespuestaUsuario();
		std::cout<<"Desea intercambiar alguna letra?\n";
		std::cout<<"(1) SI\n";
		std::cout<<"(2) NO\n";
		std::cout<<"Seleccion: ";
		std::cin>>pregunta;
		int pos1,pos2;
		while (pregunta == 1) {
			std::cout << "Ingrese la primera posicion que desea intercambiar: ";
			std::cin >> pos1;
			std::cout << "Ingrese la segunda posicion que desea intercambiar: ";
			std::cin >> pos2;

			p1.intercambiarRespuestaUsuario(pos1, pos2);
			p1.imprimirRespuestaUsuario();

			std::cout << "Desea intercambiar alguna otra letra?\n";
			std::cout << "(1) SI\n";
			std::cout << "(2) NO\n";
			std::cout << "Seleccion: ";
			std::cin >> pregunta;
		}
		tiempo.terminarTiempo();
		p1.checkRespuesta();

		if (p1.getVeracidad() == true) {
			prueba.sumarPuntos(10);
		} else {
			prueba.restarPuntos(5);
		}
		p1.setTiempo(tiempo.diferenciaTiempo());
		std::cout<<"En este test demoro "<<p1.getTiempo()<<" Segundos\n";

		std::string pregunta2="Ordene los siguientes numeros de menor a mayor.\n";
		std::vector<std::string> Enunciado2;
		Enunciado2.push_back("5");
		Enunciado2.push_back("7");
		Enunciado2.push_back("1");
		Enunciado2.push_back("8");
		Enunciado2.push_back("2");
		Enunciado2.push_back("4");
		std::vector<std::string> RespuestaValidas2;
		RespuestaValidas2.push_back("1");
		RespuestaValidas2.push_back("2");
		RespuestaValidas2.push_back("4");
		RespuestaValidas2.push_back("5");
		RespuestaValidas2.push_back("7");
		RespuestaValidas2.push_back("8");

		Trail_Making_A_B p2(pregunta2,Enunciado2,RespuestaValidas2);
		std::cout<<p2.getPregunta()<<std::endl;
		std::vector<std::string> usuarioRespuestas2;

		p2.imprimirElementosTerminal();
		tiempo.iniciarTiempo();
		for(int i=0;i<p2.cantidadElementos();i++){
			std::cout<<"Ingrese la letra "<<i<<": ";
			std::cin>>letra;
			usuarioRespuestas2.push_back(letra);
		}

		p2.anadirRespuestaUsuario(usuarioRespuestas2);
		std::cout<<"Su solucion es:";
		p2.imprimirRespuestaUsuario();
		std::cout<<"Desea intercambiar alguna letra?\n";
		std::cout<<"(1) SI\n";
		std::cout<<"(2) NO\n";
		std::cout<<"Seleccion: ";
		std::cin>>pregunta;
		while (pregunta == 1) {
			std::cout << "Ingrese la primera posicion que desea intercambiar: ";
			std::cin >> pos1;
			std::cout << "Ingrese la segunda posicion que desea intercambiar: ";
			std::cin >> pos2;

			p2.intercambiarRespuestaUsuario(pos1, pos2);
			p2.imprimirRespuestaUsuario();

			std::cout << "Desea intercambiar alguna otra letra?\n";
			std::cout << "(1) SI\n";
			std::cout << "(2) NO\n";
			std::cout << "Seleccion: ";
			std::cin >> pregunta;
		}
		tiempo.terminarTiempo();
		p2.checkRespuesta();

		if (p2.getVeracidad() == true) {
			prueba.sumarPuntos(10);
		} else {
			prueba.restarPuntos(5);
		}
		p2.setTiempo(tiempo.diferenciaTiempo());
		std::cout<<"En este test demoro "<<p2.getTiempo()<<" Segundos\n";
		int tiempoPreguntas=p1.getTiempo()+p2.getTiempo();
		std::cout<<"El tiempo que demoro en realizar la prueba es de: "<<tiempoPreguntas<<" Segundos.\n";
		std::cout << "El total de puntos es:" << prueba.getPuntos();
		break;
	}
	};

	return 0;
}
