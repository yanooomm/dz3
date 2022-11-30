/*TextFile19 Дан текстовый файл. В первой строке записано число N,
а во второй строке последовательность из N целых чисел, разделенных
пробелами. Определить, правда ли, что все числа состоят из одинакового
количества цифр*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    cout.setf(ios::boolalpha);
    bool answer;
    ifstream f;
    f.open("TextFile19.txt");
    int n;
    if (!f.is_open())
    {
        cout << "Ошибка при открытии файла";
    }
    else
    {
        f >> n;
        int len = 0;
        for (int i = 0; i < n; i++)
        {
            string numb; 
            f >> numb;
            answer = len == numb.length();
            len = numb.length();
        }
    }
    cout << answer;
}

/*
3
123 124 122
true
*/

/*
3
123 124 1222
false
*/