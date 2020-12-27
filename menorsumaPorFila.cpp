//ejercicio 1 de la hoja 1 de la semana 14
#include <iostream>
#include <conio.h>
using namespace std;

int IngresePos()
//ejercicio 1 de la hoja 1 de la semana 14
#include <iostream>
#include <conio.h>
using namespace std;

int IngresePos()
{
	int N;
	do
	{
		cout << "Ingrese positivo:"; cin >> N;
	} while (N <= 1 || N > 10);
	return N;
}
void IngreseDatos(int *N, int *M, int **Matriz)
{
	for (int i = 0; i < *N; i++)
		for (int j = 0; j < *M; j++)
		{
			cout << "Ingrese datos [" << i + 1 << "],[" << j + 1<<"]:";
			cin >> Matriz[i][j];
		}
}
void SalidaDatos(int *N, int *M, int **Matriz)
{
	for (int i = 0; i < *N; i++)
	{
		for (int j = 0; j < *M; j++)
		
			cout << Matriz[i][j] << " ";
		cout << endl;
	}
}
void OperacionFilas(int *N, int *M, int **Matriz)
{
	int Suma, Menor;
	for (int i = 0; i < *N; i++)
	{
		Suma = 0;
		Menor = Matriz[i][0];
		for (int j = 0; j < *M; j++)
		{
			Suma = Suma + Matriz[i][j];
			if (Matriz[i][j] < Menor)
				Menor = Matriz[i][j];
		}
		cout << "Suma de la fila " << i + 1 << "es:" << Suma << endl;
		cout << "El menor valor de la fila " << i + 1 << "es:" << Menor << endl;
	}
}
int main()
{
	int N, M;
	N = IngresePos();
	M = IngresePos();
	int **Matriz;
	Matriz = new int*[N];
	for (int i = 0; i < N; i++)
		Matriz[i] = new int[M];
	IngreseDatos(&N, &M, Matriz);
	SalidaDatos(&N, &M, Matriz);
	OperacionFilas(&N, &M, Matriz);

	for (int i = 0; i < N; i++)
		delete[] Matriz[i];
	delete[] Matriz;
	_getch();

}