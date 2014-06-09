#ifndef _TEST_MEMORIA_CORTO_PLAZO_HPP
#define _TEST_MEMORIA_CORTO_PLAZO_HPP

#include <string>
#include "Pregunta.hpp"
using std::string;

class Test_Memoria_Corto_Plazo {
private:
	string elementos[5][5];
	string respuesta[5][5];
	string respuestaUsuario[5][5];
	bool veracidad;
public:
	Test_Memoria_Corto_Plazo();
	Test_Memoria_Corto_Plazo(string elementos[5][5], string respuesta[5][5]);
	~Test_Memoria_Corto_Plazo();

    void setElementos(string elementos[5][5]);
    void setRespuesta(string respuesta[5][5]);
	
    void anadirRespuesta(string respuestaUsuario[5][5]);
	void checkRespuesta();

	bool getVeracidad();
};

#endif
