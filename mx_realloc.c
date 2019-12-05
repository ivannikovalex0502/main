 #include <stdio.h>
 #include <stdlib.h>

 void *mx_realloc(void *ptr, size_t size);
 void *mx_memmove(void *dst, const void *src, size_t len);
 int mx_strlen(const char *s);

int main()
 {
     void *ptr = "yfytfyttyf";
     size_t size = 78;
     mx_realloc(ptr,size);
     system("leaks -q n");
     return 0;
 }
