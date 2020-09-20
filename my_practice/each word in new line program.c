#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int i;
    char s[100];
    scanf("%[^\n]", s);
    
    //Write your logic to print the tokens of the sentence here.
     while(s[i]!='\0'){
        if(s[i]==' ')
            printf("\n");
        else
            printf("%c",s[i]);
        i++;
    }
    return 0;
}
