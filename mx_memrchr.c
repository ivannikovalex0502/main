void *mx_memrchr(const void *s, int c, size_t n);
int mx_strlen(const char *s);

int main()
{
    char s[] = "Trinity hello hfbhg bfh";
    size_t n = 25;
    printf("%s\n",mx_memrchr(s, 'b',n));
    return 0;  
}
