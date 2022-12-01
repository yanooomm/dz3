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
        string len = "";
        f >> len; 
        string numb;
        for (int i = 0; i < n-1; i++)
        {
            f >> numb;
            int a = len.size();
            int b = numb.size();
            answer = a == b;
            if (!answer)
                break;
            len = numb;
            numb = " ";
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

/*
* 3
122 122 123
true
*/

/*
3
1222 122 123
false
*/
