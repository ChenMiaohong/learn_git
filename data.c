#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j;
	char *str=malloc(128);
	strcpy(str,"hello dji");
	printf("the data strcpy data = %s\n",str);
	printf("the ---------===----------\n");
	printf("-++_+++++\n");
	free(str);
}
