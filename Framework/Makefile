all: final clean

final: Pregunta.o FalsoVerdadero.o Opcion.o PreguntaLibre.o SeleccionMultiple.o Prueba.o Puntaje.o Restricciones.o Test_Memoria_Corto_Plazo.o Trail_Making_A_B.o
	g++ Pregunta.o FalsoVerdadero.o Opcion.o PreguntaLibre.o SeleccionMultiple.o Prueba.o Puntaje.o Restricciones.o Test_Memoria_Corto_Plazo.o Trail_Making_A_B.o main.cpp -o final

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

Prueba.o:
	g++ -c Prueba.cpp

Puntaje.o:
	g++ -c Puntaje.cpp

Restricciones.o:
	g++ -c Restricciones.cpp

Test_Memoria_Corto_Plazo.o:
	g++ -c Test_Memoria_Corto_Plazo.cpp

Trail_Making_A_B.o:
	g++ -c Trail_Making_A_B.cpp

clean:
	-rm -f *.o
