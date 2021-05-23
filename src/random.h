/* These are in <stdlib.h> but not in MinGW-w64 among other implementations */

#include <stddef.h>

char *setstate(char *);
char *initstate(unsigned int, char *, int);
long random(void);
void srandom(unsigned);
