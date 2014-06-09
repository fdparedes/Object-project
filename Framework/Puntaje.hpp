
#ifndef PUNTAJE_HPP_
#define PUNTAJE_HPP_

//Clase que contiene los puntos de una prueba
class Puntaje{
private:
	int puntos;
public:
	//Inicializa el puntaje en 0
	Puntaje();
	~Puntaje();
	//Suma la cantidad de puntos que el programador considere necesarios
	void sumarPuntos(int puntos);
	//Resta la cantidad de puntos que el programador considere necesarios
	void restarPuntos(int puntos);
	//Retorna la cantidad de puntos que contiene la prueba hasta el momento
	int getPuntos();
};


#endif /* PUNTAJE_HPP_ */
