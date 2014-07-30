#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
		char a[30]="string(1)";
		char b[]="string(2)";
		printf("before strcat() : %s\n",a);
		printf("after strcat() : %s\n",strcat(a,b));
		printf("after strcat() : %s\n",a);
		return EXIT_SUCCESS;
}
