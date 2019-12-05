void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);
int mx_memcmp(const void *s1, const void *s2, size_t n);
//int mx_strlen(const char *s);
void *mx_memchr(const void *s, int c, size_t n);

int main()
{
     char big[] = "McDonalds";
     char little[] = "mmmmmmm";

     size_t big_len = 9;
     size_t little_len = 7;
     char *k = mx_memmem(big,big_len,little,little_len);
     printf("%s\n",k);
     return 0;
}

