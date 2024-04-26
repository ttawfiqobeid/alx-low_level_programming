unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int i, j;
    for (i = 0; s[i]; i++)
    {
        for (j = 0; accept[j]; j++)
        {
            if (s[i] == accept[j])
                break;
        }
        if (!accept[j])
            return count;
        count++;
    }
    return count;
}

