/* *********************************************************
*
*	Fecha: 27 de Julio 2022
*	Autor: Jonathan Torres, Estudiante CCIA
*	Materia: HPC I
*	Tema: INstroducción Lenguaje de Programación C++
*	Tópico: Aplicación cálculo del BMI
*
* **********************************************************/

/* Las bibliotecas artesanales se incluyen con comillas */
#include "bmi_lib.h"
#include <stdio.h>
#include <iostream>
#include <math.h>

int main(){
	float bmi;
	bienvenida();
	bmi = calculoBMI();
	class_bmi(bmi);

	return 0;
}

