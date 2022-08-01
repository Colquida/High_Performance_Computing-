/* *********************************************************
*
*	Fecha: 1 de agosto de 2022
*	Autor: Jonathan Torres, Estudiante CCIA
*	Materia: HPC I
*	Tema: Introducción Lenguaje de Programación C++
*	Tópico: Interfaz del prototipo de funciones
*	disponibles en la biblioteca. Para que estén disponibles
*
* **********************************************************/
#ifndef BMI_LIB_H_INCLUDED //Si no está definido, incluya
#define BMI_LIB_H_INCLUDED //Pragma

#include <stdio.h>
#include <iostream>
#include <math.h>

/**********************PROTOTIPO DE FUNCIONES***************/

/* Función de bienvenida que captura el nombre*/

void bienvenida();

/* Función que calcula el BMI y retorna un número flotante */

float calculoBMI();

/* Clasificación de BMI */
void class_bmi(float bmi);

#endif


