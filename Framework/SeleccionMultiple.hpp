
#ifndef SELECCIONMULTIPLE_HPP_
#define SELECCIONMULTIPLE_HPP_

#include <string>
#include <vector>
#include "Opcion.hpp"
#include "Pregunta.hpp"

class SeleccionMultiple: public Pregunta {
private:
	std::vector<Opcion> opciones;
public:
	SeleccionMultiple(std::string pregunta);
	~SeleccionMultiple();
	void adicionarOpcionOpciones(std::string item,bool valor);
	void cambiarItemOpciones(int posicionPregunta, std::string item);
	void cambiarBoolOpciones(int posicionPregunta);
	void eliminarOpcionOpciones(int posicionPregunta) {
		opciones.erase(opciones.begin() + posicionPregunta);
	}
	std::string getItemOpciones(int posicionPregunta);
	bool getBoolOpciones(int posicionPregunta);
	int getSizeOpciones();

	int contarAciertos(SeleccionMultiple respuesta);
	void imprimirTerminal();
};
#endif /* SELECCIONMULTIPLE_HPP_ */
