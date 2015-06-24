#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef HAOMALLOC
#include "haomalloc.h"
#endif
int main(int argc, char *argv[])
{
	char *s = NULL;
	s = malloc(100);
	strcpy(s, "123456");
	printf("s===%s\n", s);
	//free(s);
	s = malloc(100);
}
