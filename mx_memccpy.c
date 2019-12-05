void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
int main()
{
    char *s = "";
    char *d = malloc(5);
     char ch = 'o';
    ((char *)d)[6] = '\0'; 
    mx_memccpy(d,s,ch,10);
    printf("%s\n",mx_memccpy(d,s,ch,10));
    return 0;
    // for(int i = 0; i < 5; i++)
    // {
    //      printf("%c",d[i]);
    // }
    
    // return 0;
}

