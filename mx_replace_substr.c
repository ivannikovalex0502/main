char *mx_replace_substr(const char *str, const char *sub, const char *replace);
int mx_strlen(const char *s);
int mx_count_substr(const char *str, const char *sub);
char *mx_strnew(const int size);
int mx_strncmp(const char *s1, const char *s2, int len);
char *mx_strcpy(char *dst, const char *src);
//int mx_strncmp(const char *s1, const char *s2, int len);

int main()
{
    char str[] = "тикпак";
    char sub[] = "пак";
    char replace[] = "";
    char *print = mx_replace_substr(str, sub, replace);
    printf("%s\n",print);
    return 0;
}

