/* *********************************************************
*
*	Fecha: 1 de agosto de 2022
*	Autor: Jonathan Torres, Estudiante CCIA
*	Materia: HPC I
*	Tema: INstroducción Lenguaje de Programación C++
*	Tópico: Módulo de funciones de la APP BMI
*
* **********************************************************/

/* Se usan comillas porque es una biblioteca artesanal */
#include "bmi_lib.h"
#include <stdio.h>
#include <iostream>
#include <math.h>

/* Declaración de nombre como variable global */
std::string nombre;

/* Función de bienvenida que captura el nombre*/

void bienvenida(){
        std::cout << "============================" << std::endl;
        std::cout << "Programa para el cálculo BMI" << std::endl;
        std::cout << "============================" << std::endl;
        /* Se requiere ingresar el nombre de la persona */
        std::cout << "Ingrese el nombre de la persona" << std::endl;
        std::cout << "============================" << std::endl;
        std::cin>>nombre;


}

/* Función que calcula el BMI y retorna un número flotante */

float calculoBMI(){
	float altura, masa, bmi;
	std::cout << " Ingrese su altura en cm: " << std::endl;
	std::cout << "============================" << std::endl;
	std::cin >> altura;
	/* Se requiere la altura en kilogramos */
	std::cout << "Ingrese su masa en kg: "<<std::endl;
	std::cin >> masa;
	std::cout << "============================" << std::endl;
	/* Se hace el cálculo del BMI */
	bmi = masa / (pow(altura/100,2));
	std::cout << "El IMC de "<< nombre << " es: "<< bmi <<std::endl;
	std::cout<< "============================="<< std::endl;
	return bmi;
}

void class_bmi(float bmi){
	/* Se hace la clasificación */
        if (bmi <= 18.4)
                std::cout<< "Usted es un pvto esqueleto" << std::endl;
        else if (bmi <= 24.9)
                std::cout<< "USted es un normie"<< std::endl;
        else if (bmi <= 29.9)
                std::cout<< "EStá rellenito y no de amor"<< std::endl;
        else if (bmi <= 34.9)
                std::cout << "Está como PO clase I"<< std::endl;
        else if (bmi <= 39.9)
                std::cout<< "Usted está como PO CLase II"<< std::endl;
        else
                std::cout<< "COnozco cinco gordos y usted es cuatro de ellos"<<std::endl;
}


