#ifndef OPCION_HPP_
#define OPCION_HPP_

#include <string>

//Clase que se utiliza en seleccion multiple
//Es una posible solucion de varias soluciones
class Opcion {
protected:
	std::string item;
	bool valor;
public:
	//contructor recibe un item y recibe un valor de verdad
	//para saber si ese item ingresado es verdader o falso
	Opcion(std::string item,bool valor);
	~Opcion();
	//Cambia el valor de verdad que contiene este item
	void cambiarBoolOpcion();
	//Metodo que cambia el contenido del item
	void cambiarItemOpcion(std::string item);
	//Funcion que retorna el item de esta opcion
	std::string getItemOpcion();
	//Metodo que retorna el valor de verdad de este item
	bool getValorOpcion();

};

#endif /* OPCION_HPP_ */
