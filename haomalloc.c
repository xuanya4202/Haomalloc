#include <stdio.h>
#include <unistd.h>
#include <string.h>
int g_malloc_num = 0;
void *malloc(long long size)
{
	g_malloc_num++;
	printf("xxx");
	return sbrk(size);
}
void free(void *s)
{
	--g_malloc_num;
	return;
}

int main(int argc, char *argv[])
{
	char *s = NULL;
	s = malloc(100);
	strcpy(s, "123");
	free(s);
	return;
}
