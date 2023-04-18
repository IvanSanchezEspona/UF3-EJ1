#pragma once
#include <iostream>
using namespace std;


class car {

private:
	int velo;
	int dr;
	int nitro;
	std::string carname;
	std::string pilotname;

public:

	car(int pvelo, std::string pcarname, std::string ppilotname, int pnitro, int pdr);

	//getters
	int getvelo();

	int getdr();

	int getnitro();

	std::string getcarname();

	std::string getpilotname();

	//setters

	void setvelo(int pvelo);

	void setdr(int pdr);

	void setnitro(int pnitro);

	void setcarname(std::string pname);

	void setpilotname(std::string ppilotname);

	void a_nitro() {
		if (nitro > 0)
		{
			nitro == 0;
			int aleatorio = rand() % 2;
			if (aleatorio == 0)
			{
				velo /= 2;
				cout << "El piloto " << getpilotname() << " ha usado el nitro y ha salido 0 en el dado, su velocidad se divide por la mitad" << endl;
			
			}
			else {
				velo *= 2;
				cout << "El piloto " << getpilotname() << " ha usado el nitro y ha salido un 1 en el dado, tiene un X 2 de velocidad" << endl;
			}
		}
		else {
			cout << "El piloto " << getpilotname() << " no tiene nitro disponible" << endl;
		}
	}

	void dado() {
		int num = rand() % 6;
		velo += num;
		cout << "El piloto " << getpilotname << " ha obtenido " << num << " en la tirada del dado " << endl;
	}

	//metodos propios

	void printPole();

	void printSecond();

	void printThird();

	void printF();

	void printFive();
};