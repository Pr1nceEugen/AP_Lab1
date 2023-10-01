#include <stdio.h>
#include <math.h>
#include <Windows.h>

double R(double x, double y)
{
    return ((x+2,45)+sqrt(fabs(x+pow(y, 2))));
}

double a(double x, double y)
{
    return ((1+y)*(x+y/(pow(x, 2)+4)/(exp(-x-2)+(1/(pow(x,2)+4)))));
}

double b(double x, double y, double z)
{
    return ((1+cos(y-2))/(pow(x,4)/2+pow(sin(z), 2)));
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    double x, y, z;
    double TempResult;

    printf("введіть значення x, y і z через пропуск\n");
    scanf("%lf%lf%lf",&x, &y, &z);

    TempResult = R(x, y);
    printf("шукане значення функції R = %f\n",TempResult);

    TempResult = a(x, y);
    printf("шукане значення функції a = %f\n",TempResult);

    TempResult = b(x, y, z);
    printf("шукане значення функції b = %f\n",TempResult);

    return 0;
}
