#include <stdio.h>

char *mx_itoa(int number);
char *mx_strnew(const int size);
int mx_count_int(int num);
char *mx_strdup(const char *str);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);

int main()
{
    printf("%s\n",mx_itoa(-363));
    system("leaks -q n");
    return 0;
}

