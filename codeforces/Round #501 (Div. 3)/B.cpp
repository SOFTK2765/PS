#include <bits/stdc++.h>

using namespace std;

char a[51], b[51];
int res[3000];
int check[27];

int main()
{
    int n;
    scanf("%d %s %s", &n, a, b);
    for(int i=0;i<n;i++)
    {
        check[a[i]-'a']++;
        check[b[i]-'a']--;
    }
    for(int i=0;i<26;i++)
        if(check[i])
        {
            printf("-1");
            return 0;
        }
    int pos = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            for(int j=i;j<n;j++)
            {
                if(a[j]==b[i])
                {
                    for(int k=j;k>i;k--)
                    {
                        res[pos++] = k;
                        char tmp = a[k];
                        a[k] = a[k-1];
                        a[k-1] = tmp;
                    }
                    break;
                }
            }
        }
    }
    printf("%d\n", pos);
    for(int i=0;i<pos;i++)
        printf("%d ", res[i]);

    return 0;
}