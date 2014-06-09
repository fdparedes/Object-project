
#include "Puntaje.hpp"

//Inicializa el puntaje en 0
Puntaje::Puntaje(){
	Puntaje::puntos=0;
}
Puntaje::~Puntaje(){}
//Suma la cantidad de puntos que el programador considere necesarios
void Puntaje::sumarPuntos(int puntos){
	Puntaje::puntos+=puntos;
}
//Resta la cantidad de puntos que el programador considere necesarios
void Puntaje::restarPuntos(int puntos){
	Puntaje::puntos-=puntos;
}
//Retorna la cantidad de puntos que contiene la prueba hasta el momento
int Puntaje::getPuntos(){
	return Puntaje::puntos;
}

