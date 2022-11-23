#include "complex_print.h"

#include <stdio.h>
void print_complex(struct complex a)
{
    float c = a.img;
    if (a.img < 0)
    {
        c = -a.img;
        printf("complex(%.2f - %.2fi)\n", a.real, c);
    }
    else
        printf("complex(%.2f + %.2fi)\n", a.real, c);
}
