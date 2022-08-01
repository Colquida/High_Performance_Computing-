/* *********************************************************
*
*	Fecha: 27 de Julio 2022
*	Autor: Jonathan Torres, Estudiante CCIA
*	Materia: HPC I
*	Tema: INstroducción Lenguaje de Programación C++
*	Tópico: Aplicación cálculo del BMI
*
* **********************************************************/

#include <iostream>
#include <math.h>

/* Función de bienvenida */

void welcomer(){
	std::string nombre;
        std::cout << "============================" << std::endl;
        std::cout << "Programa para el cálculo BMI" << std::endl;
        std::cout << "============================" << std::endl;
        /* Se requiere ingresar el nombre de la persona */
        std::cout << "Ingrese el name de la persona" << std::endl;
        std::cout << "============================" << std::endl;
        std::cin>>nombre;


}

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
	std::cout << "Su IMC es "<< bmi <<std::endl;
	std::cout<< "============================="<< std::endl;
	return bmi;
}

int main(){
	float bmi;
	welcomer();
	bmi = calculoBMI();
	/* Se hace la clasificación */
	if (bmi <= 18.4)
		std::cout<< "USted es un pvto esqueleto" << std::endl;
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

	return 0;
}
