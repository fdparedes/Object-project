all: final clean

final: Pregunta.o FalsoVerdadero.o Opcion.o PreguntaLibre.o SeleccionMultiple.o
	g++ Pregunta.o FalsoVerdadero.o Opcion.o PreguntaLibre.o SeleccionMultiple.o main.cpp -o final

Pregunta.o:
	g++ -c Pregunta.cpp

FalsoVerdadero.o:
	g++ -c FalsoVerdadero.cpp

Opcion.o:
	g++ -c Opcion.cpp

PreguntaLibre.o:
	g++ -c PreguntaLibre.cpp

SeleccionMultiple.o:
	g++ -c SeleccionMultiple.cpp

clean:
	-rm -f *.o


