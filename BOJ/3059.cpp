#include <bits/stdc++.h>

using namespace std;

bool check[26];
char a[1001];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        for(int i=0;i<26;i++)
            check[i] = false;
        memset(a, 0, sizeof(a));
        scanf("%s", a);
        int l = strlen(a);
        for(int i=0;i<l;i++)
            check[a[i]-'A'] = true;
        int sum = 0;
        for(int i=0;i<26;i++)
            if(check[i]==false) sum += (65+i);
        printf("%d\n", sum);
    }

    return 0;
}