#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the characterv c to stdout 
 @c: the caracter to print 

 return: on success 1.
          on error , -1 is returnrd. and errno is set appropriately.
*/
int _putchar(char c);
{
    return (write(1,&c, 1));
}
