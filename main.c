#include <stdio.h>
#include <math.h>
#include <Windows.h>

double FirstFunctionResult(double x, double y)
{
    return ((x+2,45)+sqrt(fabs(x+pow(y, 2))));
}

double SecondFunctionResult(double x, double y, double z)
{
    return ((1+y)*(x+y/(pow(x, 2)+4)/(exp(-x-2)+(1/(pow(x,2)+4)))));
}

double ThirdFunctionResult(double x, double y, double z)
{
    return ((1+cos(y-2))/(pow(x,4)/2+pow(sin(z), 2)));
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    double x, y, z;
    double TemporaryFunctionsResult;

    printf("введіть значення x, y і z через пропуск\n");
    scanf("%lf%lf%lf",&x, &y, &z);

    TemporaryFunctionsResult = FirstFunctionResult(x, y);
    printf("шукане значення функції R = %f\n",TemporaryFunctionsResult);

    TemporaryFunctionsResult = SecondFunctionResult(x, y, z);
    printf("шукане значення функції a = %f\n",TemporaryFunctionsResult);

    TemporaryFunctionsResult = ThirdFunctionResult(x, y, z);
    printf("шукане значення функції b = %f\n",TemporaryFunctionsResult);

    return 0;
}
