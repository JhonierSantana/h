#include <stdio.h>

int main (int argc, char *argv[])
{
	if(argc!=2){
		printf("how my name is?\n");
		return (1);
	}
	printf("my name is %s",argv[1]);
}
