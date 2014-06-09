#ifndef PREGUNTA_HPP_
#define PREGUNTA_HPP_

#include <string>

class Pregunta{
protected:
	std::string pregunta;
public:
	Pregunta(std::string pregunta);
	~Pregunta();

	std::string getPregunta();
};

#endif /* PREGUNTA_HPP_ */
