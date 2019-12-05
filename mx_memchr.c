int main()
{
    unsigned char s[] = "He4l4lo";
    unsigned char c = '4';
    size_t n = 5;

    printf("%s\n",mx_memchr(s,c,n));
    return 0;
}

