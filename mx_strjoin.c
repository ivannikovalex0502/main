#include <stdio.h>

int mx_strlen(const char *s);
char *mx_strcat(char *restrict s1, const char *restrict s2);
char *mx_strnew(const int size);
char *mx_strjoin(const char *s1, const char *s2);

int main()

{ 
   // char str1[] = "";
    char str2[] = "";
    //char str3[] = "";
    printf("%s\n",mx_strjoin(str2,str2));
    return 0;
}
