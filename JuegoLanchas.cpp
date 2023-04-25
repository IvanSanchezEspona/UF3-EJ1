// JuegoLanchas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include "Header.h"
using namespace std;

int jugadores;
string nombrejugadores[5];

//funciones
void inicio();
void players();

void inicio() {
	cout << "===========================================================================" << endl;
	cout << "=								GRAN PREMIO                                =" << endl;
	cout << "=								DE ESPANA                                  =" << endl;
	cout << "===========================================================================" << endl;

}

//void players() {
  //  do {
    //    cout << "   Cuantos jugadores desean ingresar ";
   //     cin >> jugadores;
//cout << endl;
//
   //     if (jugadores > 5) {
    //        cout << "Error Maximo 5 jugadores" << endl;
   //     }
   //     else if (jugadores < 1) {
   //         cout << "Error Elige de 1 a 5 jugadores" << endl;
//}

   //     system("Pause");
   //     system("cls");
  //  } while (jugadores < 1 || jugadores > 5);

   // for (int i = 0; i < jugadores; i++)
  //  {
  //      cout << "Ingresa el nombre del jugador: " << i + 1 << " --> ";
  //      cin >> nombrejugadores[i];
  //      cout << endl;
  //  }
  // system("cls");
//}

int main() {
	int option = 0;
	Lancha lancha1("lancha1", 0, 0, 0);
	Lancha lancha2("lancha2", 0, 0, 0);
	//Lancha lancha3("lancha3", 0, 0, 0);
	//Lancha lancha4("lancha4", 0, 0, 0);
	//Lancha lancha5("lancha5", 0, 0, 0);

	inicio();
	//players();

	cout << "Introduce la cantidad de jugadores como maximo 2" << endl;
	cin >> option;

	if (option == 2)
	{
		for (int turno = 1; turno <= 5; turno++) {
			cout << "Turno " << turno << endl;
			lancha1.getvelo();
			lancha1.distanciatotal();

			int opcion;
			cout << "Quieres utilizar el nitro? (SI = 1, NO = 0)" << endl;
			cin >> opcion;
			if (opcion == 1)
			{
				lancha1.usenitro();
			}
		}
		lancha1.statuslancha();

		for (int turno = 1; turno <= 5; turno++) {
			cout << "Turno " << turno << endl;
			lancha2.getvelo();
			lancha2.distanciatotal();

			int opcion;
			cout << "Quieres utilizar el nitro? (SI = 1, NO = 0)" << endl;
			cin >> opcion;
			if (opcion == 1)
			{
				lancha2.usenitro();
			}
		}lancha2.statuslancha();
	}
	else {
		cout << "Invalid Option" << endl;
	}
	cout << "		" << endl;
	cout << "La distancia de la lancha1 ha sido de " << lancha1.distanciatotal() << endl;
	cout << "La distancia de la lancha2 ha sido de " << lancha2.distanciatotal() << endl;
	
	if (lancha1.distanciatotal() > lancha2.distanciatotal()) {
		cout << "Ha ganado la lancha1" << endl;
	}

	else if (lancha2.distanciatotal() > lancha1.distanciatotal()) {
		cout << "Ha ganado la lancha2" << endl;
	}

	else if(lancha1.distanciatotal() == lancha2.distanciatotal()) {
		cout << "Las lanchas han empatado" << endl;
	}
}





	//metodos propios
	//void lancha::printPole() {
	//	std::cout << "En la pole posicion tenemos a " << getname() << " con su " << getcarname() << "\n";
	//}
	

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
