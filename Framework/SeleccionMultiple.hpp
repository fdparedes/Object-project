
#ifndef SELECCIONMULTIPLE_HPP_
#define SELECCIONMULTIPLE_HPP_

#include <string>
#include <vector>
class SeleccionMultiple:Pregunta {
private:
<<<<<<< HEAD
	string item;
	bool respuestas;
=======
	std::vector<std::string> item;
	std::vector<bool> respuestas;
	int cantidadTotalItems;
>>>>>>> 8ccbd9a285235654bbf51cea8feaa7b179b0a5eb
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
