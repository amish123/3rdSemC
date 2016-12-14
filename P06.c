#include <stdio.h>
#include <string.h>

int main()
{
	
	char text[100],word[10],rpword[10],str[10][10];
	int i=0,j=0,k=0,l,w;
	
	printf("enter the string\n");
	gets(text);
	
	printf("enter the word u want to replace\n");
	scanf("%s", word);
	
	printf("enter by which word %s is to be replaced\n",word);
	scanf("%s", rpword);
	
	l=strlen(text);
	
	for(k=0;k<l;k++)
	{
		if(text[k]!=' ')
		{
			str[i][j]=text[k];
			j++;
		}
		else
		{
			str[i][j]='\0';
			j=0;i++;
		}
		
	}
	str[i][j]='\0';
	w=i;
	for(i=0;i<=w;i++)
	{
		if(strcmp(str[i],word)==0)
		strcpy(str[i],rpword);
		
		printf("%s ", str[i]);
	}
	getch();
	return 0;
}
