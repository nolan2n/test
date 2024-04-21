#include <unistd.h>

void    helloworld(void)
{
    write (1, "maeleen la boss", 15);
}

int     main(void)
{
    helloworld();
    return (0);
}