int main()
{
    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
    int count = 0;
    printf("%d\n",mx_binary_search(arr, 6, "ab", &count));
    printf("%d",count);
    return 0;
}
