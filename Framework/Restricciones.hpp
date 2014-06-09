
#ifndef RESTRICCIONES_HPP_
#define RESTRICCIONES_HPP_

#include "time.h"

//Clase que contiene diferentes tipos de restricciones
//En este caso solo contiene restricciones temporales
//metodos que permiten calcular el tiempo en segundos
class Restricciones{
private:
	time_t inicio;
	time_t fin;
public:
	//Inicializa el el tiempo con la hora del sistema del momento
	Restricciones();
	~Restricciones();
	//Metodo que asigna al atributo inicio la hora del sistema en el momento en el que es llamado el metodo
	void iniciarTiempo();
	//Metodo que asigna al atributo fin la hora del sistema en el momento en el que es llamado el metodo
	void terminarTiempo();

	//Verifica que la diferencia de tiempo sea menor al limite que se esta estableciendo
	//retorna true si es verdadero false si no lo es
	bool verificarTiempo(int limite);

	//retorna el tiempo en segundos
	//desde donde se haya establecido el tiempo de inicio
	//hasta donde se haya establecido el tiempo final
	long diferenciaTiempo();

};


#endif /* RESTRICCIONES_HPP_ */
