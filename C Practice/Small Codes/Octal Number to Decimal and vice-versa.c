//Convert Decimal to Octal
#include <stdio.h>
#include <math.h>

int convertDecimalToOctal(int decimalNumber);
int main()
{
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("%d in decimal = %d in octal", decimalNumber, convertDecimalToOctal(decimalNumber));

    return 0;
}

int convertDecimalToOctal(int decimalNumber)
{
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}

//Convert Octal to Decimal
/*#include <stdio.h>
#include <math.h>

long long convertOctalToDecimal(int octalNumber);
int main()
{
    int octalNumber;

    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);

    printf("%d in octal = %lld in decimal", octalNumber, convertOctalToDecimal(octalNumber));

    return 0;
}

long long convertOctalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0;

    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    return decimalNumber;
}*/