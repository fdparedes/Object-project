
#ifndef SELECCIONMULTIPLE_HPP_
#define SELECCIONMULTIPLE_HPP_

#include <string>
#include <vector>

template <typename Opcion>

class SeleccionMultiple:Pregunta {
private:
	std::vector<Opcion> item;
public:
	SeleccionMultiple();
	~SeleccionMultiple();
	void adicionarOpcion(Opciones opcion);
	void cambiarBoolOpcion(int posicionPregunta, bool valorRespuesta);
	std::string getItem(int posicionPregunta);
	bool getBoolItem(int posicionPregunta);

};


#endif /* SELECCIONMULTIPLE_HPP_ */
