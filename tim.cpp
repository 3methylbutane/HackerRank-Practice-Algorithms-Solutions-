#include<stdio.h>
int main()
{
	char ch[10];
	int i,d=0;
	scanf("%s",&ch);
	if(ch[8]=='A')
	{
		if(ch[0]=='1'&&ch[1]=='2'&&ch[3]=='0'&&ch[4]=='0'&&ch[6]=='0'&&ch[7]=='0')
		{
			printf("00:00:00");
		}
		else if(ch[0]=='1'&&ch[1]=='2')
		{
			printf("00");
			for(i=2;i<8;i++)
			printf("%c",ch[i]);
		}
		else
		{
			for(i=0;i<8;i++)
			printf("%c",ch[i]);
		}
	}
	if(ch[8]=='P')
	{
		if(ch[0]=='1'&&ch[1]=='2')
		{
			for(i=0;i<8;i++)
			printf("%c",ch[i]);
		}
		if(ch[0]=='0')
		{
			d=((int)ch[1]-48)+12;
			printf("%d",d);
			for(i=2;i<8;i++)
			printf("%c",ch[i]);
		} 
        if(ch[0]=='1'&&ch[1]=='0')
        {
            printf("22");
            for(i=2;i<8;i++)
                printf("%c",ch[i]);
        }
        if(ch[0]=='1'&&ch[1]=='1')
        {
            printf("23");
            for(i=2;i<8;i++)
                printf("%c",ch[i]);
        }
        if(ch[0]=='1'&&ch[1]=='2'&&ch[3]=='0'&&ch[4]=='0'&&ch[6]=='0'&&ch[7]=='0')
        {
            printf("12:00:00");
        }
    }
    return 0;
    }
