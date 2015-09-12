


#include <stdio.h>
#include <stdlib.h>
#include "hello.h"

int main(int args, char *argv[])
{
	char *username;
	
	if(args < 2)
	{
		Usage();
		exit(0);
	}
	
	username = argv[1];

	printf("%s \n", "Hello World!");
	

	return 0;
}
