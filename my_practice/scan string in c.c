#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char a;
    char s[100];
    char sen[100];
    scanf("%c%s",&a,s);
    scanf("\n");
    scanf("%[^\n]%s",sen);

    printf("%c\n",a);
    printf("%s\n",s);
    printf("%s",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

