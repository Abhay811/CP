#include "temp.h"

int main()
{
    int temp;
    vector<int> a(5);
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    for (int i = 0, j = 4; i < 5/2; i++, j--)
        temp = a[i], a[i] = a[j], a[j] = temp;
    for (auto x : a)
        cout << x << " ";
}