#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/stat.h>
int main()
{
	FILE *fp;
	fp=fopen("./fprintf.txt","a+");
	if(fp=NULL)
	{
		printf("fopen the file fail\n");
	}
	fprintf(fp,"the test is very good and meaningful\n");
	fclose(fp);
	return 0;
}
