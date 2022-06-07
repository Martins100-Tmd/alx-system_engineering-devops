#include <unistd.h>
/**
*c:variable tobe printed
*/
int _putchar(char c)
{
   return(write(1,&c,1))
}
