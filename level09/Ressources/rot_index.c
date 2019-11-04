#include <stdio.h>
#include <string.h>
#include <math.h>

int convertOctalToDecimal(int octalNumber)
{
    int decimalNumber = 0;
    int i = 0;
    while (octalNumber != 0)
    {
        decimalNumber += (octalNumber % 10) * pow(8, i);
        ++i;
        octalNumber /= 10;
    }
    i = 1;
    return decimalNumber;
}

int	main(int ac, char **av)
{
    int input[25] = {146, 64, 153, 155, 155, 66, 160, 174, 75, 202, 177, 160, 202, 156, 203, 202, 104, 102, 203, 104, 165, 173, 177, 214, 211};
    int out;

    for (int i = 0; i < 25; i++)
    {
        out = convertOctalToDecimal(input[i]);
        printf("%c", out - i);
    }
    return (0);
}
