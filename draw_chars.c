#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_8x12(char c)
{
  c -= 0x20;
  for (char row = 0; row < 11; row++) {
    unsigned char rowBits = font_8x12[c][row];
    for (char col = 0; col < 16; col++) {
      unsigned char colMask = 1 << (15-col); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
}
