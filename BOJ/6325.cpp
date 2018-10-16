#include <bits/stdc++.h>

using namespace std;

bool check[26];

int main()
{
    int n, t = 0;
    while(++t)
    {
        scanf(" %d", &n);
        if(n==0) break;
        memset(check, 0, sizeof(check));
        check[0] = true;
        for(int i=0;i<n;i++)
        {
            char tmp1, tmp2;
            scanf(" %c %*c %c", &tmp1, &tmp2);
            check[tmp1-'a'] = check[tmp2-'a'];
        }
        printf("Program #%d\n", t);
        bool flag = false;
        for(int i=0;i<26;i++)
            if(check[i])
            {
                flag = true;
                printf("%c ", i+'a');
            }
        if(!flag) printf("none");
        printf("\n\n");
    }

    return 0;
}