#include "complex_operations.h"

#include <stddef.h>
struct complex neg_complex(struct complex a)
{
    a.real = -a.real;
    a.img = -a.img;
    return a;
}
struct complex add_complex(struct complex a, struct complex b)
{
    struct complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}
struct complex sub_complex(struct complex a, struct complex b)
{
    struct complex c;
    c.real = a.real - b.real;
    c.img = a.img - b.img;
    return c;
}
struct complex mul_complex(struct complex a, struct complex b)
{
    struct complex c;
    c.real = (a.real * b.real) - (a.img * b.img);
    c.img = (a.real * b.img) + (a.img * b.real);
    return c;
}
struct complex div_complex(struct complex a, struct complex b)
{
    struct complex c;
    float d = (a.real * b.real) + (a.img * b.img);
    float e = (b.real * a.img) - (a.real * b.img);
    c.real = d / ((b.real * b.real) + (b.img * b.img));
    c.img = e / ((b.real * b.real) + (b.img * b.img));
    return c;
}
