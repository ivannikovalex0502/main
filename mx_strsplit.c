char **mx_strsplit(const char *s, char c);
int mx_count_words(const char *str, char c);
char *mx_strndup(const char *s1, size_t n);
int mx_get_char_index(const char *str, char c);

int main()
{
     char s[] = "&&*&&&*&&&*&&";
     char **split = mx_strsplit(s,'&');

     for(int i = 0; i < 4; i++)
     {
          printf("%s\n",split[i]);
     }
     return 0; 
}

