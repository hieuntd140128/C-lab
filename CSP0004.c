#include<stdio.h>
#include<string.h>
int main()
{
	//declare
	char str[100];
	int i,key;
	do
	{
		// input 1 string
		printf("\n nhap chuoi : ");
		gets(str);
		printf("dao chuoi  :");
		// dao chuoi
		for (i=strlen(str)-1;i>=0;i--)
		{
			if(str[i]==' ')
			{
				str[i]='\0';
				printf("%s ",&str[i]+1);
			}
		}
		printf("%s",str);
		printf("\nnhap phim enter de tiep tuc");
		key=getch();
	}while(key!=27);
	}
