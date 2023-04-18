#include <iostream>
#include "Header.h"
using namespace std;

//variables
int numerojugadores;
std::string nombre[5];


//funciones
static void inicio()
{
	std::cout << "===========================================================================" << "\n";
	std::cout << "=                           BIENVENIDOS AL GRAN                           =" << "\n";
	std::cout << "=                           PREMIO DE ESPAÑA                              =" << "\n";
	std::cout << "===========================================================================" << "\n";
}

static void jugadores() {
    do {
        cout << "Cuantos jugadores desean ingresar (maximo 5 jugadores)--> ";
        cin >> numerojugadores;
        cout << endl;

        if (numerojugadores > 5) {
            cout << "Error Maximo 5 jugadores" << endl;
        }
        else if (numerojugadores < 1) {
            cout << "Debes eliegir entre 1 y 5 jugadores" << endl;
        }

        system("Pause");
        system("cls");
    } while (numerojugadores < 1 || numerojugadores > 5);
}


int main() {

	inicio();
    jugadores();
    car car1(100, "Aston Martin", "Fernando Alonso", 40, 800);

    car car2(105, "Red Bull", "Max Verstappen", 45, 850);

    car car3(95, "Ferrari", "Carlos Sainz", 38, 800);

    car car4(100, "Mercedes", "Lewis Hamilton", 40, 780);

    car car5(70, "Alpine", "Esteban Ocon", 30, 740);

    car1.printPole();

    car2.printSecond();

    car3.printThird();

    car4.printF();

    car5.printFive();

    return 0;
    for (int turno = 1; turno <= 5; turno++)
    {
        cout << "Turno " << turno << endl;
        car1.dado();
        car2.dado();
        car3.dado();
        car4.dado();
        car5.dado();

    int opcion;
    cout << "¿Quieres utilizar el nitro? (1 = SI - 0 = NO)" << endl;
    cin >> opcion;
    if (opcion == 1)
    
        car1.a_nitro();
        car2.a_nitro();
        car3.a_nitro();
        car4.a_nitro();
        car5.a_nitro();
    }

}