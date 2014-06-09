#ifndef TRAIL_MAKING_A_B_HPP
#define TRAIL_MAKING_A_B_HPP

#include <string>
#include <vector>
#include "Pregunta.hpp"

using std::string;
using std::vector;

class Trail_Making_A_B: public Pregunta {
private:
	vector <string> elementos;
	vector <string> respuesta;
	vector <string> respuestaUsuario;
	bool veracidad;
	int tiempo;

public:
	Trail_Making_A_B(string pregunta, vector<string> elementos,
			vector<string> respuesta);
	~Trail_Making_A_B();

	void setElementos(vector<string> elementos);
	void setRespuesta(vector<string> respuesta);
	void setTiempo(int tiempo);
	int getTiempo();
	void anadirRespuestaUsuario(vector<string> respuestaUsuario);
	void imprimirRespuestaUsuario();
	void eliminarOpcion(int posicion);
	void checkRespuesta();
	void imprimirElementosTerminal();
	void intercambiarRespuestaUsuario(int posicion1, int posicion2);
	int cantidadElementos();
	bool getVeracidad();

};

#endif
