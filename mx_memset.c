void *mx_memset(void *b, int c, size_t len); 

int main()
{
     void *b = malloc(7);
     b = mx_memset(b, '!', 6);
     ((char *)b)[6] = '\0';
     
     printf("%s\n",(char*)b);
     return 0; 

}
