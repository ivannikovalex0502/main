void *mx_memmove(void *dst, const void *src, size_t len);
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);

int main()
{
    unsigned char src[] = "COPPY";
    unsigned char dst[] = "";
    size_t len = 6;
    printf("%s\n",mx_memmove(dst,src, len));
    return 0;
}

