#include <iostream>
#include <string>
#include "Calculator.h"
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Консольное приложение калькулятора" << endl << endl;
    cout << "Введите пример в формате : a+b | a-b | a*b | a/b"
        << endl;

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Деление на ноль = бесконечно малое значение,стремяееся к нулю." << endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
        cout << "Ответ " << x << oper << y << ":" << result << endl;
        cin >> x >> oper >> y;
        if (oper == 'sqrt')
        {
            cout << "Квадратный корень из числа " << x << oper << y << ":" << result << endl;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
    }

    return 0;
}