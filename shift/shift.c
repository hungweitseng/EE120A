#include <stdio.h>

int main(int argc, char **argv)
{
    unsigned char c = 0;
    c = 3; c = c >> 2;
    printf("3 >> 2 = %d\n", c);
    c = 255; c = c << 2;
    printf("255 << 2 = %d\n", c);
    c = 256; c = c >> 2;
    printf("256 >> 2 = %d\n", c);
    c = 128; c = c << 1;
    printf("128 << 1 = %d\n", c);
    return 0;
}