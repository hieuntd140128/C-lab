#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	int i,a;
	int key;
	char *decima[]={ "0", "1", "2", "3", "4","5", "6",  "7", "8", "9"};
	char *tens_place[] = { "10", "11", "12", "13", "14", "15", "16", "17", "18", "19"};
	char *tens_multiple[] = {"", "", "20", "30", "40", "50","60", "70", "80", "90"};
	do
	{
	printf("\nenter mot s� tu 0 den 9999: ");
	scanf("%s",&s);
	for(i=0;i<strlen(s);i++)
	{
		/* - idea: su dung switch de phan biet cac hang (hang phan nghin, hang phan tram, hang phan chuc va hang don vi ung theo thu tu a=4,3,2,1)
			-giai quyet: khai bao cac mang chuoi */
		/* co the mo rong ra voi cac so >9999 neu biet hang chuc nghin,hang tram nghin, hang trieu,hang chuc trieu trong tieng anh la gi, va van su dung idea nay,*/
		/* chu y: o hang phan chuc va hang don vi ta se xu ly khac voi cac hang khac */	
		a=strlen(s)-i;
		switch(a)
		{
			case 4:	if (s[i]!='0') printf("%s h�ng ngh�n, ",decima[s[i]-'0']);
					break;
			case 3: if (s[i]!='0') printf("%s h�ng tram ,",decima[s[i]-'0']);
					break;
			case 2: if (s[i]=='1') printf("%s ",tens_place[s[i+1]-'0']);
					if (s[i]!='1'&&s[i]!='0') printf("%s ",tens_multiple[s[i]-'0']);
					break;
			case 1: if (s[i-1]!='1'&&s[i]!='0')
					printf("%s",decima[s[i]-'0']);
					if (s[i]=='0') printf("%s",decima[s[i]-'0']);
					break;
			default: break;
			
		}
	}
	key=getch();
}while(key!=27);
}
