// function

void sort012(int a[], int n)
{
    int a0, a1, a2;
    a0 = a1 = a2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            a0++;
        else if (a[i] == 1)
            a1++;
        else
            a2++;
    }
    int j = 0;
    while (a0--)
        a[j++] = 0;
    while (a1--)
        a[j++] = 1;
    while (a2--)
        a[j++] = 2;
}