char *mx_strtrim(const char *str);
_Bool mx_isspace(char c);
char *mx_strndup(const char *s1, size_t n);
int mx_strlen(const char *s);

int main()
{
    char str[] = "   \t\r  My name... is Neo          \t\r\v         ";
    printf("%s\n",mx_strtrim(str));
    return 0;
}

