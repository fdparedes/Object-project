#ifndef OPCION_HPP_
#define OPCION_HPP_

#include <string>

class Opcion {
protected:
	std::string item;
	bool valor;
public:
	Opcion(std::string item,bool valor);
	~Opcion();
	void cambiarBoolOpcion();
	void cambiarItemOpcion(std::string item);
	std::string getItemOpcion();
	bool getValorOpcion();

};

#endif /* OPCION_HPP_ */
