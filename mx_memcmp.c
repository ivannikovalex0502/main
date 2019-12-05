int mx_memcmp(const void *s1, const void *s2, size_t n);

int main()
{
    unsigned char s1[] = "123456789";
    unsigned char s2[] = "";

    size_t n = 3;
    
    printf("%d\n",mx_memcmp(s1,s2,n));
    return 0;
}


