#include <bits/stdc++.h>

using namespace std;

const string s = "+_)(*&^%$#@!./,;{}";

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        bool f1 = false, f2 = false, f3 = false, f4 = false, f5 = false;
        for(int i=0;i<n;i++)
        {
            char tmp;
            scanf(" %c", &tmp);
            if('a'<=tmp && tmp<='z') f1 = true;
            else if('A'<=tmp && tmp<='Z') f2 = true;
            else if('0'<=tmp && tmp<='9') f3 = true;
            else for(int j=0;j<18;j++)
                    if(s[j]==tmp) f4 = true;
        }
        if(n>=12) f5 = true;
        printf("%s\n", (f1 && f2 && f3 && f4 && f5)?"valid":"invalid");        
    }

    return 0;
}