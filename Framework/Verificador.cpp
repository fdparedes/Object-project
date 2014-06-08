#include "Verificador.hpp"

Verificador::Verificador() {
}
Verificador::~Verificador() {}

template<typename T>
bool Verificador::comparar(T obj1,T obj2){
	if(obj1==obj2)
		return true;
	else
		return false;
}
