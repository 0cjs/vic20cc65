#include <vic20.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main (void)
{
    /*  asminc/cvic.inc
        CURS_X      $D3  211
        CURS_Y      $D6  214
        SCREEN_PTR  $D1  209
        CRAM_PTR    $F3  243
        CHARCOLOR   $286 646
    */

    unsigned char *pl, *ph, cl, ch, dl, dh;
    pl = (unsigned char *) 0xD6;
    ph = (unsigned char *) 0x286;

    cl = *pl; ch = *ph;
    gotoxy(0, 8);
    dl = *pl; dh = *ph;
    cprintf("HelloHelloHelloHello!\r\n");
    //clrscr();
    //cprintf("foo\r\n");

    cprintf("cl=%02x ch=%02x\r\n", cl, ch);
    cprintf("dl=%02x dh=%02x\r\n", dl, dh);
    cprintf("pl=%02x ph=%02x\r\n", *pl, *ph);

    return EXIT_SUCCESS;
}
