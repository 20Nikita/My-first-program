/*************************************************************************************************
*                                                                                                *
*                          ИНФОРМАТИКА И ВЫЧИСЛИТЕЛЬНАЯ ТЕХНИКА                                  *
*                                                                                                *
**************************************************************************************************
*    Prodgect type: ConsoleApplication                                                           *
*    Progect name:  Laba1                                                                        *
*    File name:     Laba1.sln                                                                    *
*    Language:      Cpp, MSVS 2017                                                               *
*    Programmes:    М3О-107Б-18                                                                  *
*                   Гордеев Никита                                                               *
*                   Топунова Алёна                                                               *
*    Modified by:   03.10.2018                                                                   *
*    Created:       02.10.2018                                                                   *
*    Comment:       Первая программа                                                             *
*************************************************************************************************/
#include "pch.h"
#include <conio.h>
//#include <>
#include <iostream>
using namespace std;
int main()  {
	setlocale(LC_ALL, "Russian");

	// Инициализация переменных
	double Eps;// Точность
	double Tsum = 3.141592653 / 4;// Точная сумма
	double Sum = 1;// Текущая сумма
	int N = 1;// Номер слагаемого
	int Znak = 1;// Знак слагаемого
	double Zm = 1;// Знаменатель
	double Slag = 0;// слагаемое
	double Diff = Tsum - Sum;// Разность точной суммы и суммы
	if (Diff < 0) Diff = -Diff;// Модуль
	//char YesNo;
	//int i = 1;

	//Ввод Eps
	cout << "Введите Eps" << "\n";
	cin >> Eps;
	cout << "Eps= " << Eps<<"\n";
	_getch();

	while (Eps <= 0)//Входной контроль
	{
		cout << "Eps должно быть > 0" << "\n";
		cout << "Введите Eps" << "\n" << "\n";
		cin >> Eps;
		cout << "Eps= " << Eps << "\n";
		_getch();

	}
	while (Diff > Eps)
	{
		// Вычисление слогаемого
		N = N + 1;
		Znak = -Znak;
		Zm = (2 * N) - 1;
		Slag = Znak / Zm;

		// Обновление суммы
		Sum = Sum + Slag;

		// Обновление разности
		Diff = Tsum - Sum;
		if (Diff < 0) Diff = -Diff;// Модуль
	}// Конец основных вычислений

	// Печать результата
	cout << "N= " << N << "\n";
	cout << "Sum= " << Sum << "\n";
	cout << "Diff= " << Diff << "\n";
	// Пауза
	system("PAUSE");
	return 0;
}