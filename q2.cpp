#include<stdio.h>

int main()
{	bool check[256]={0};
	char name[100];
	printf("enter a string of :\n");
	gets(name);
	for(int i =0 ; name[i]!='\0'; i++)
	{	int freq=0;
		if(check[name[i]])
		{
			continue;
		}
		for(int j=0 ; name[j]!='\0' ; j++)
		{
			if(name[i]==name[j])
			{	
				freq++;
				check[name[i]]=true;
			}
		}
		printf("%c is %d times\n",name[i],freq);
	}
	
}