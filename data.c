#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j;
	char *str=malloc(128);
	strcpy(str,"hello dji");
	printf("the strcpy data = %s\n",str);
	free(str);
}
