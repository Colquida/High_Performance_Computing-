#/* *********************************************************
#*
#*       Fecha: 1 de agosto de 2022
#*       Autor: Jonathan Torres, Estudiante CCIA
#*       Materia: HPC I
#*       Tema: INstroducción Lenguaje de Programación C++
#*       Tópico: Módulo de funciones de la APP BMI
#*
#* **********************************************************/

#Makefile sistematiza el proceso de compilación modular
#Pedantic revisa fuertemente los elementos que se envían
#Warning muestra todas las adverencias
# $@ representa el nombre de bmi_project o lo que haya 

GCC = g++
GFLAGS = -ansi -pedantic -Wall

PROGS = bmi_project

all: $(PROGS)

bmi_project:
	$(GCC) $(GFLAGS) -c $@.cpp
	$(GCC) $(GFLAGS) -c bmi_lib.cpp
	$(GCC) $(GFLAGS) -o $@ $@.o bmi_lib.o

clean:
	$(RM) *.o $(PROGS)
