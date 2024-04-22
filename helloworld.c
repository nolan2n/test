#include <unistd.h>

void    helloworld(void)
{
    write (1, "hello world", 11);
}

int     main(void)
{
    helloworld();
    return (0);
}