
#ifndef VERIFICADOR_HPP_
#define VERIFICADOR_HPP_

class Verificador {
public:
	Verificador();
	~Verificador();

	template <typename T>
	bool comparar(T obj1,T obj2);

};
#endif
