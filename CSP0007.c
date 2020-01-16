#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char s[100];
	int i,n,j,dem,lap=0,key;
	do{
	printf("\nEnter an string: ");
	gets(s);
dem=0;
	n=strlen(s);
		for(i=0;i<n;i++)
		{
			if((s[i]==' ')&&(s[i+1]==' '))
			{
				for(j=i;j<n;j++)
				{
					s[j]=s[j+1];
				}
				n--;	//so ki tu cua chuoi giam xuong
				i--;	//sau buoc nay thi i se tang (vong for) nen ta se giam no xuong
			}
		}
		lap++;
	printf("String after remove:\n");
	for (i=0;i<n;i++)
	{
		printf("%c",s[i]);
	} printf("\nEnter to continue");
	  printf("\nEsc to exit");
	  key=getch();
	} while(key!=27);
	return 0;
}
