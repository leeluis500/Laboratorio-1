#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int opcion;
int num, cantidad[50], num1, cantidad1[50];
int num2, cantidad2[50], num3, cantidad3[50];
int num4, cantidad4[50], num5, cantidad5[50];
int sumaingresototal(int cantidad[], int);
int sumaegresototal(int cantidad[], int);
char nom[50], ap[50];

struct datos
{
	char nombre[50];
	char apellido[50];
}bdatos[3];

void menu()
{
	cout << "\n									Luis Carlos Lee Mejia" << endl;
	cout << "									9959-19-2356" << endl;
	cout << "Datos Del Trabajor			1" << endl;
	cout << "Mostrar Datos				2" << endl;
	cout << "Total Ingresos y Egresos		3" << endl;
	cout << "Fin del programa			4" << endl;
	cout << "\nElegir opcion: ";
	cin >> opcion;
}

void nya()
{
	system("cls");

	cout << "\n									Luis Carlos Lee Mejia" << endl;
	cout << "									9959-19-2356" << endl;

	cout << "Ingrese Nombre:"; cin >> bdatos[1].nombre;
	cout << "Ingrese apellido:"; cin >> bdatos[1].apellido;
	cout << endl;

	cout << "Cuantos Ingresos tendra: ";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cout << "Cantidad: ";
		cin >> cantidad[i];
	}

	cout << "\nCuantos Egresos tendra: ";
	cin >> num1;
	for (int i = 0; i < num1; i++)
	{
		cout << "Cantidad: ";
		cin >> cantidad1[i];
	}
	cout << endl << endl;

	cout << "Ingrese Nombre:"; cin >> bdatos[2].nombre;
	cout << "Ingrese apellido:"; cin >> bdatos[2].apellido;
	cout << endl;

	cout << "Cuantos Ingresos tendra: ";
	cin >> num2;
	for (int i = 0; i < num2; i++)
	{
		cout << "Cantidad: ";
		cin >> cantidad2[i];
	}

	cout << "\nCuantos Egresos tendra: ";
	cin >> num3;
	for (int i = 0; i < num3; i++)
	{
		cout << "Cantidad: ";
		cin >> cantidad3[i];
	}
	cout << endl << endl;

	cout << "Ingrese Nombre: "; cin >> bdatos[3].nombre;
	cout << "Ingrese apellido: "; cin >> bdatos[3].apellido;
	cout << endl;

	cout << "Cuantos Ingresos tendra: ";
	cin >> num4;
	for (int i = 0; i < num4; i++)
	{
		cout << "Cantidad: ";
		cin >> cantidad4[i];
	}

	cout << "\nCuantos Egresos tendra: ";
	cin >> num5;
	for (int i = 0; i < num5; i++)
	{
		cout << "Cantidad: ";
		cin >> cantidad5[i];
	}
	cout << endl;
}


void mostrar()
{
	system("cls");

	cout << "\n									Luis Carlos Lee Mejia" << endl;
	cout << "									9959-19-2356" << endl;

	cout << "El nombre del trabajador 1" << "  es: " << bdatos[1].nombre << endl;
	cout << "El apellido del trabajador 1" << "  es: " << bdatos[1].apellido << endl;
	cout << "\n";

	cout << "El nombre del trabajador 2" << "  es: " << bdatos[2].nombre << endl;
	cout << "El apellido del trabajador 2" << "  es: " << bdatos[2].apellido << endl;
	cout << "\n";

	cout << "El nombre del trabajador 3" << "  es: " << bdatos[3].nombre << endl;
	cout << "El apellido del trabajador 3" << "  es: " << bdatos[3].apellido << endl;
	cout << "\n";

}

void ingyegr()
{
	system("cls");

	cout << "\n									Luis Carlos Lee Mejia" << endl;
	cout << "									9959-19-2356" << endl;

	cout << "\nLa suma de los Ingresos es de : " << sumaingresototal(cantidad, num) << endl;
	cout << "Y la suma de los Egresos es de: " << sumaegresototal(cantidad1, num1) << endl;
	cout << "\nEl Sueldo total del Trabajador 1 es de: " << sumaingresototal(cantidad, num) - sumaegresototal(cantidad1, num1) << endl;
	cout << "\n\n";
	cout << "\nLa suma de los Ingresos es de : " << sumaingresototal(cantidad2, num2) << endl;
	cout << "Y la suma de los Egresos es de: " << sumaegresototal(cantidad3, num3) << endl;
	cout << "\nEl Sueldo total del Trabajador 2 es de: " << sumaingresototal(cantidad2, num2) - sumaegresototal(cantidad3, num3) << endl;
	cout << "\n\n";
	cout << "\nLa suma de los Ingresos es de : " << sumaingresototal(cantidad4, num4) << endl;
	cout << "Y la suma de los Egresos es de: " << sumaegresototal(cantidad5, num5) << endl;
	cout << "\nEl Sueldo total del Trabajador 3 es de: " << sumaingresototal(cantidad4, num4) - sumaegresototal(cantidad5, num5) << endl;
}



int sumaingresototal(int cantidad[], int num)
{
	int suma = 0;
	for (int i = 0; i < num; i++)
	{
		suma = suma + cantidad[i];
	}
	return suma;
}

int sumaegresototal(int cantidad2[], int num2)
{
	int suma = 0;
	for (int i = 0; i < num2; i++)
	{
		suma = suma + cantidad2[i];
	}
	return suma;
}

void fin()
{
	system("cls");
	cout << "------------Finalizando el Programa------------" << endl;
	system("pause");
}

int main()
{
	opcion = 1;

	do
	{
		system("cls");
		menu();

		switch (opcion)
		{

		case 1:
			nya();
			system("pause");
			break;

		case 2:
			mostrar();
			system("pause");
			break;

		case 3:
			ingyegr();
			system("pause");
			break;

		case 4:
			fin();
			return 0;
			break;

		default:
			cout << "opcion invalida" << endl;
			system("pause");
			break;
		}
	} while (opcion != 4);
}