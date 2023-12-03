/* Exercising bitwisew operators*/

#include <stdio.h>

void main()
{
    unsigned int original = 0xABC;
    unsigned int result = 0;
    unsigned int mask = 0xF;        // Rightmost four bits

    printf("\noriginal = %X", original);

    /* Insert first digit in result */
    result |= original&mask;       // Put right 4 bits form original in result

    /* Get 2nd digit */
    original >>= 4;         // shift original right four positions
    result <<= 4;
    result |= original&mask;

    /* Get third digit */
    original >>= 4;         // shift original right four positions
    result <<= 4;
    result |= original&mask;
    printf("\t result = %X\n", result);
}

