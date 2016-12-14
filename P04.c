#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{char s[100];int l,flag2=0,flag3=0,i,c=-1;
	printf("enter the url\n");
	gets(s);
	l=strlen(s);
	char w[3]={'w','w','w'};
	char w2[3];
	char w3[5]={'a','c','.','i','n'};
	char w4[3]={'c','o','m'};
	w2[0]=s[0];w2[1]=s[1];w2[2]=s[2];
	if(strcmp(w,w2)!=0)
	{
		printf("not a valid url");
	}
	else
	{
	for(i=l-5;i<l;i++)
	{
		if(s[i]!=w3[++c])
		{
			flag2=1;
			break;
		}
	}
		if(flag2==0)
		{
			printf("valid");
		}
	c=-1;
	if(flag2==1)
	{
		for(i=l-3;i<l;i++)
		{
			if(s[i]!=w4[++c])
			{
				flag3=1;
				break;
			}
		}
			if(flag3==0)
			{
				printf("valid");
			}
		
	}
	if(flag2&&flag3)
	printf("invalid");
}
return 0;
}
