
#ifndef SELECCIONMULTIPLE_HPP_
#define SELECCIONMULTIPLE_HPP_

#include <string>
#include <vector>
class SeleccionMultiple {
private:
	std::vector<std::string> item;
	std::vector<bool> respuestas;
	int cantidadTotalItems;
public:
	SeleccionMultiple();
	~SeleccionMultiple();
	void adicionarRespueta(std::string item,bool respuesta);
	void cambiarRespuesta(int posicionPregunta, bool respuesta);
	std::string getItem(int posicionPregunta);
	bool getValorItem(int posicionPregunta);
	int getCantidadItems();
	void incrementarCantidadItems();

};


#endif /* SELECCIONMULTIPLE_HPP_ */
