#include <stdio.h>
#include <string.h>

char *my_strtok(char str[], const char delim[]);

int main()
{
    char str[50], delim[50];

    printf("Enter the string  : ");
    scanf("%s", str);

    printf("Enter the delimeter : ");
    scanf("\n%s", delim);

    char *token = my_strtok(str, delim);
    printf("Tokens :\n");

    while (token)
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }
}

char *my_strtok(char str[], const char delim[])
{
    static int i;
    static char *ptr;
    if (str != NULL)
    {
        ptr = str;
        i = 0;
    }
    if (ptr == NULL)
    {
        return NULL;
    }
    int start = i;

    while (ptr[i] != '\0')
    {
        int j = 0;
        while (delim[j] != '\0')
        {
            if (ptr[i] == delim[j])
            {
                ptr[i] = '\0';
                i++;
                if (ptr[start] != '\0')
                {
                    return &ptr[start];
                }
                else
                {
                    start = i;
                    j = -1;
                }
            }
            j++;
        }
        i++;
    }
    if (ptr[start] != '\0')
        return &ptr[start];
    else
        return NULL;
}