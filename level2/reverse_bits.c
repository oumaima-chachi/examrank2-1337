#include <unistd.h>
#include <stdio.h>
unsigned char reverse_bits(unsigned char octet)
{
    unsigned char bit = 0;
    int i = 8;

    while (i > 0)
    {
        bit = (bit << 1) | (octet & 1);
        octet >>= 1;
        i--;
    }
    return bit;
}