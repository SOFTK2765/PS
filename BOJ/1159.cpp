#include <bits/stdc++.h>

using namespace std;

int a[27] = {};

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        char tmp[31];
        scanf(" %s", tmp);
        a[tmp[0]-'a']++;
    }
    int cnt = 0;
    for(int i=0;i<26;i++)
        if(a[i]>=5)
        {
            printf("%c", i+'a');
            cnt++;
        }
    if(cnt==0) printf("PREDAJA");

    return 0;
}