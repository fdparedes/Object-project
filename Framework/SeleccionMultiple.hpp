
#ifndef SELECCIONMULTIPLE_HPP_
#define SELECCIONMULTIPLE_HPP_

#include <string>
#include <vector>
#include "Opcion.hpp"
#include "Pregunta.hpp"

//La clase seleccionMutliple hereda de pregunta y contiene un vector de objetos Opcion
class SeleccionMultiple: public Pregunta {
private:
	std::vector<Opcion> opciones;
public:
	//Inicializa el contructor de Pregunta con una pregunta no se inicializa el vector
	//con el metodo adicionarOpcionOpcinoes se agregan respuestas al vector
	SeleccionMultiple(std::string pregunta);
	~SeleccionMultiple();
	//Se crea una opcion de respuesta y se le asigna su item y su valor de verdad
	//Se agrega al vector
	void adicionarOpcionOpciones(std::string item,bool valor);
	//Se modifica un item de una opcion que se encuentra en una posicion dada
	void cambiarItemOpciones(int posicionPregunta, std::string item);
	//Se modifica el valor de verdad de una opcion segun la posicion dada
	void cambiarBoolOpciones(int posicionPregunta);
	//Se elimina una opcion que haya sido agreda anteriormente
	void eliminarOpcionOpciones(int posicionPregunta) {
		opciones.erase(opciones.begin() + posicionPregunta);
	}
	//Retorna el item de una posicion dada
	std::string getItemOpciones(int posicionPregunta);
	//retorna el valor de verdad de una opcion dada
	bool getBoolOpciones(int posicionPregunta);
	//retorna la cantidad de datos que contiene el vector de opciones
	int getSizeOpciones();
	//Cuenta la cantidad de aciertos que hay con las respuestas ingresadas por el usuario
	int contarAciertos(SeleccionMultiple respuesta);
	//Metodo que interactua con usuario para saber que opciones va a marcar o desmarcar
	void cambiarOpcion();
	//imprime las opciones en la terminal
	void imprimirTerminal();
	//Verifica si las respuestas dadas en una pregunta conresponde a las respuestas ingresadas por el usuario
	//Si algun valor de una opcion pregunta no corresponde con una respuesta retorna false
	bool verificarRespuesta(SeleccionMultiple respuesta);
};
#endif /* SELECCIONMULTIPLE_HPP_ */
