int mx_get_substr_index(const char *str, const char *sub);
int mx_strncmp(const char *s1, const char *s2, int len);
int mx_strlen(const char *s);

int main()
{
    printf("%d\n",mx_get_substr_index("McDonalds", "Don")); //returns 2
    //printf("%d\n",mx_get_substr_index("", "Don")); //returns -1
    //printf("%d\n",mx_get_substr_index("McDonalds", NULL)); //returns -2
    //printf("%d\n",mx_get_substr_index(NULL, "Don")); //returns -2
    return 0;
}
