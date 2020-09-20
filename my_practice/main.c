#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[]={'a','b','c'};
	int i;
	for(i=0;i<3;i++)
	{
		printf("%c,%c,%c,%c\n",str[i],*(str+i),*(i+str),i[str]);
	}
	return 0;
}
