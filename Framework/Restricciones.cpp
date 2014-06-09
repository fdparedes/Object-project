
#include"Restricciones.hpp"
#include <iostream>
#include <string>
//Inicializa el el tiempo con la hora del sistema del momento
Restricciones::Restricciones() {
	Restricciones::inicio=time(NULL);
	Restricciones::fin=time(NULL);

}
Restricciones::~Restricciones() {
}
//Metodo que asigna al atributo inicio la hora del sistema en el momento en el que es llamado el metodo
void Restricciones::iniciarTiempo() {
	Restricciones::inicio=time(NULL);
}
//Metodo que asigna al atributo fin la hora del sistema en el momento en el que es llamado el metodo
void Restricciones::terminarTiempo() {
	Restricciones::fin=time(NULL);
}
//Verifica que la diferencia de tiempo sea menor al limite que se esta estableciendo
//retorna true si es verdadero false si no lo es
bool Restricciones::verificarTiempo(int limite) {
	if(difftime(Restricciones::fin,Restricciones::inicio)<=limite)
		return true;
	else
		return false;
}
//retorna el tiempo en segundos
//desde donde se haya establecido el tiempo de inicio
//hasta donde se haya establecido el tiempo final
long Restricciones::diferenciaTiempo(){
	return difftime(Restricciones::fin,Restricciones::inicio);
}
