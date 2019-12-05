char *mx_del_extra_spaces(const char *str);
char *mx_strtrim(const char *str);
_Bool mx_isspace(char c);
void mx_strdel(char **str);
char *mx_strnew(const int size);
int mx_strlen(const char *s);

int main()
{
    char str[] = "         My name...          is     Neo            ";
    printf("%s\n",mx_del_extra_spaces(str));
    return 0;
}
