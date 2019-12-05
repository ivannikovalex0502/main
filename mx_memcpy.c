int main()
{
    char *src = "Hello";
    void *dst = malloc(5);
    dst = mx_memcpy(dst,src,5);
    ((char *)dst)[5] = '\0';
    printf("%s\n", (char *)dst);
    free(dst);
    return 0;
}
