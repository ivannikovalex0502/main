#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

char *mx_file_to_str(const char *file);
char *mx_strnew(const int size);

int main(int argc, char *argv[])
{
    argc++;
    printf("%s",mx_file_to_str(argv[1]));
    return 0;
}
