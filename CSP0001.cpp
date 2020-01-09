#include <stdio.h>
#include <string.h>
int main() {
char str[100];
int i,key;
do{ printf("\nInput a string:");
    gets(str);
    for(i=strlen(str);i>=0;i--)
    { if(str[i]==' ')
      {  str[i]='\0';
         printf("%s ",&str[i]+1);
	  }
	}
	printf("%s",str);
}while(key!=27);
}
