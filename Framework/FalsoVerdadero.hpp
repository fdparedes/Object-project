
#ifndef FALSOVERDADERO_HPP_
#define FALSOVERDADERO_HPP_

#include "Pregunta.hpp"
//Tipo de respuesta que hereda de pregunta
//Esta clase contiene su tipo de respuesta y contiene metodos que le
//Permite imprimir en la terminal y ademas tiene metodos
//para realizar cambios u obtener valores
class FalsoVerdadero:public Pregunta{
private:
	bool respuesta;

public:
	//El constructor recibe la pregunta que sera utilizada para el contructor de la pregunta
	//el bool sera utilizado para inicializar el atributo
	FalsoVerdadero(std::string pregunta,bool valor);
    ~FalsoVerdadero();
    //Este metodo cambia el valor que se tiene en el atributo respuesta
    //Es decir si respuesta es igual a false cambia a true
    //Si respuesta es iguala true cambia a false
	void cambiarSeleccion();
	//Retorna que valor contiene en respuesta
	bool getSeleccion();

	//Cambiar opcion es un metodo implementado para la terminal que permite realizar un cambio de seleccion
	//hasta que el usuario que esta respondiendo decida que esa es la respuesta que seleccionara
	void cambiarOpcion();
	//Funcion que es llamada por una pregunta y retorna 1 si acerto o 0 si no acerto
	int contarAciertos(FalsoVerdadero respuesta);
	//Funcion que es llamado por una pregunta y se le ingresa un objeto FalsoVerdadero
	//retorna true si la pregunta y la respuesta tiene una respuesta igual
	//retorna false si la pregunta y la respuesta son diferentes
	bool verificarRespuesta(FalsoVerdadero respuesta);
	//Imprime bajo un estandar si esta seleccionado verdadero o falso
	void imprimirTerminal();

};

#endif /* FALSOVERDADERO_HPP_ */
