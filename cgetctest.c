#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main (void)
{
    //  This confirms that cgetc alone, without cputc,
    //  does not need a constructor to set the color RAM position.
    char c;

    //cputc('\r');            // This changes nothing.
    c = cgetc();
    putchar('"');
    putchar(c);
    putchar('"');
    puts(" was typed.");
    return EXIT_SUCCESS;
}
