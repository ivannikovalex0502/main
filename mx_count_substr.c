int mx_count_substr(const char *str, const char *sub);
int mx_strncmp(const char *s1, const char *s2, int len);
int mx_strlen(const char *s);

int main()
{
    printf("%d\n",mx_count_substr("yo, yo, yo Neo, yo","yo"));
    return 0;
}
