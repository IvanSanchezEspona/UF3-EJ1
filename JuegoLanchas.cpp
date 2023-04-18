// JuegoLanchas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Header.h"


car::car(int pvelo, std::string pcarname, std::string ppilotname, int pdr, int pnitro) {

	velo = pvelo;
	carname = pcarname;
	dr = pdr;
	nitro = pnitro;
	pilotname = ppilotname;
}
	//getters
	int car::getvelo() {
		return velo;
	}


	int car::getdr() {
		return dr;
	}

	int car::getnitro() {
		return nitro;
	}

	std::string car::getcarname() {
		return carname;
	}

	std::string car::getpilotname() {
		return pilotname;
	}
	//setters
	void car::setvelo(int pvelo) {
		velo = pvelo;
	}

	void car::setcarname(std::string pcarname) {
		carname = pcarname;
	}

	void car::setdr(int pdr) {
		dr = pdr;
	}

	void car::setpilotname(std::string ppilotname) {
		pilotname = ppilotname;
	}

	void car::setnitro(int pnitro) {
		nitro = pnitro;
	}
	//metodos propios
	void car::printPole() {
		std::cout << "En la pole posicion tenemos a " << getpilotname() << " con su " << getcarname() << "\n";
	}
	void car::printSecond() {
		std::cout << "En la segunda posicion tenemos a " << getpilotname() << " con su " << getcarname() << "\n";
	}
	void car::printThird() {
		std::cout << "En la tercera posicion tenemos a " << getpilotname() << " con su " << getcarname() << "\n";
	}
	void car::printF() {
		std::cout << "En la cuarta posicion tenemos a " << getpilotname() << " con su " << getcarname() << "\n";
	}
	void car::printFive() {
		std::cout << "En la quinta posicion tenemos a " << getpilotname() << " con su " << getcarname() << "\n";
	}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
