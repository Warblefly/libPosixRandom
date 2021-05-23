/* These are in <stdlib.h> but not in MinGW-w64 among other implementations */

char *setstate(const char *);
char *initstate(unsigned int, char *, size_t);
long random(void);
void srandom(unsigned);
