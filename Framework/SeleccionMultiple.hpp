
#ifndef SELECCIONMULTIPLE_HPP_
#define SELECCIONMULTIPLE_HPP_

#include <string>
#include <vector>
class SeleccionMultiple {
private:
	std::vector<std::string> item;
	std::vector<bool> respuestas;
public:
	SeleccionMultiple();
	~SeleccionMultiple();
	void adicionarRespueta(std::string item,bool respuesta);

};


#endif /* SELECCIONMULTIPLE_HPP_ */
