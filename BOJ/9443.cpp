#include <bits/stdc++.h>

using namespace std;

char a[31];
int cnt[27];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf(" %s", a);
        cnt[a[0]-'A']++;
    }
    int i;
    for(i=0;cnt[i]!=0;i++)
        cnt[i]--;
    printf("%d", i);

    return 0;
}