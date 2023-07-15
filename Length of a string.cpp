/*#include<string.h>
#include<stdio.h>

int main()
{
	char name[20];
	int count=0;
	int i = 0;
	printf("enter the name: \n");
	gets(name);
//	count=strlen(name);
	while(name[i]!='\0'){
		count++;
		i++;
	}
	puts(name);
	printf("The length of a string is %d:\n",count);
	return 0;
}*/

#include <stdio.h>
#include <string.h>

int stringLength(const char* str) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char name[20];
    int count = 0;

    printf("Enter the name: \n");
    gets(name);

    count = stringLength(name);

    puts(name);
    printf("The length of the string is %d:\n", count);

    return 0;
}
