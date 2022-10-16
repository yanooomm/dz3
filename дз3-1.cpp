 /*TextFile1. Найдите все числа Фибоначчи, попадающие в промежуток от a до b.
 Ответ записать в файл, располагая по числу в строке. Если таких
 чисел нет, то результирующий файл должен быть создан, но пуст*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, b;
    int f1 = 1, f2 = 1, f0;
    int counter = 0;
    cin >> a >> b;
    setlocale(LC_ALL, "ru");
    ofstream f;
    f.open("textfile1.txt"); 
    if (!f.is_open())
    {
        cout << "Ошибка открытия файла" << endl;
    }
    else
    {
        if (f1 == a)
        {
            counter += 1;
            f << a << endl;
        }
        while (f2<=b)
        {
            f0 = f2; //1
            f2 = f1 + f2; //2
            f1 = f0; //1
            if ((f2 >= a) && (f2 <= b))
            {
                counter += 1;
                f << f2 << endl;
            }
        }
        cout << counter;

    }
    f.close();
}
