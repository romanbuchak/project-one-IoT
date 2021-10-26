#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, h, x, result, e;
    printf("input a ");
    scanf_s("%f", &a);
    printf("input b ");
    scanf_s("%f", &b);
    printf("input h ");
    scanf_s("%f", &h);
    for (x = a; x <= b; x = x + h)
    {
        float e = 2.718;
        if (x < 4.5)
        {
            result = 1 / (sin(pow(x, 2)));
            printf("x: %f; y: %f\n", x, result);
        }
        if (x >= 4.5 && x < 5)
        {
            result = x + log10(sqrt(pow(x, 7)));
            printf("x: %f; y: %f\n", x, result);
        }
        if (x >= 5)
        {
            result = log10(pow(e, x) + 4);
            printf("x: %f; y: %f\n", x, result);
        }
    }
}