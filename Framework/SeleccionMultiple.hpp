
#ifndef SELECCIONMULTIPLE_HPP_
#define SELECCIONMULTIPLE_HPP_

#include <string>
#include <vector>

template <typename Opcion>

class SeleccionMultiple:Pregunta {
private:
	std::vector<Opcion> opciones;
public:
	SeleccionMultiple();
	~SeleccionMultiple();
	void adicionarOpcionOpciones(Opciones opcion);
	void cambiarItemOpciones(int posicionPregunta, std::string item);
	void cambiarBoolOpciones(int posicionPregunta, bool valorRespuesta);
	void eliminarOpcionOpciones(int posicionPregunta);
	std::string getItemOpciones(int posicionPregunta);
	bool getBoolOpciones(int posicionPregunta);

};


#endif /* SELECCIONMULTIPLE_HPP_ */
