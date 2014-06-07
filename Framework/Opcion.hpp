#ifndef OPCION_HPP_
#define OPCION_HPP_

#include <string>
#include <vector>

class Opcion
{
private:
	std::string item;
	bool valor;
public:
	Opcion();
	virtual ~Opcion();
	void cambiarBoolOpcion(bool);
	void cambiarItemOpcion(std::string);
	std::string getItemOpcion();
	bool getValorOpcion();

};

#endif /* OPCION_HPP_ */
