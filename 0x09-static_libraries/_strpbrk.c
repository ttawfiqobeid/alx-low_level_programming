char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        char *a = accept;
        while (*a)
        {
            if (*s == *a)
                return s;
            a++;
        }
        s++;
    }
    return 0;
}

