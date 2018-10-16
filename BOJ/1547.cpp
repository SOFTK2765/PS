#include <bits/stdc++.h>

using namespace std;

char a[51];
bool cup[3] = {true, false, false};

void swap(bool *a, bool *b)
{
    bool tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

int main()
{
    int m;
    scanf("%d", &m);
    for(int i=0;i<m;i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        swap(&cup[a-1], &cup[b-1]);
    }
    for(int i=0;i<3;i++)
        if(cup[i]==true) printf("%d", i+1);

    return 0;
}