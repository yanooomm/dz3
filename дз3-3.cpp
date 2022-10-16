/* 1. Написать программу для нахождения корней квадратного уравнения по заданным коэффициентам a, b, c. */
// тесты находятся в файле test1

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c, D, x1, x2;
	cin >> a >> b >> c;
	D = b * b - 4 * a * c;
	if (D > 0)
	{
		x1 = ((-b - sqrt(D))) / (2 * a);
		x2 = (-b + sqrt(D)) / (2 * a);
		cout << "Первый корень уравнения: " << x1 << endl << "Второй корень уравнения: " << x2;
	}
	else
	{
		if (D == 0)
		{
			x1 = -b / (2 * a);
			cout << "Корень уравнения: " << x1;
		}
		else
			cout << "Корней нет";
	}
}
