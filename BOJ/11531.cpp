#include <bits/stdc++.h>

using namespace std;

char r[6];
int s[27];
bool check[27];

int main()
{
    while(1)
    {
        int m;
        scanf(" %d", &m);
        if(m==-1) break;
        char p;
        scanf(" %c %s", &p, r);
        if(!check[p-'A'])
            if(strcmp(r, "right")==0)
            {
                check[p-'A'] = true;
                s[p-'A'] *= 20;
                s[p-'A'] += m;
            }
            else s[p-'A']++;
    }
    int sum = 0, cnt = 0;
    for(int i=0;i<26;i++)
        if(check[i])
        {
            cnt++;
            sum += s[i];
        }
    printf("%d %d", cnt, sum);

    return 0;
}