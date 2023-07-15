/*#include <stdio.h>
#include <string.h>

void addSuffixes(char str[], int strLength)
{
    if (strLength >= 3)
    {
        if (str[strLength - 1] == 'g' && str[strLength - 2] == 'n' && str[strLength - 3] == 'i')
        {
            str[strLength] = 'l';
            str[strLength + 1] = 'y';
            str[strLength + 2] = '\0';
        }
        else
        {
            str[strLength] = 'i';
            str[strLength + 1] = 'n';
            str[strLength + 2] = 'g';
            str[strLength + 3] = '\0'; 
        }
    }

    printf("String after adding suffixes is %s\n", str);
}

int length(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
        return i;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("String is: %s\n", str);
    int strLength = length(str);
    addSuffixes(str, strLength);
    return 0;
}*/

#include <stdio.h>
#include <string.h>

void addSuffix(char* str) {
    int length = strlen(str);

    if (length < 3) {
        return;  // Leave the string unchanged
    }

    if (strcmp(&str[length - 3], "ing") == 0) {
        strcat(str, "ly");
    } else {
        strcat(str, "ing");
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    addSuffix(str);

    printf(" string after adding suffix: %s\n", str);

    return 0;
}

