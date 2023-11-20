#include "Calculator.h"
#include <math.h>

double Calculator::Calculate(double x, char oper, double y)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case 'sqrt':
        return "y = sqrt(x)";
    default:
        return 0.0;
    }
}