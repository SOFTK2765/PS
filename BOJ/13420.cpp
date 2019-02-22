#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long a, b, c;
        char tmp;
        scanf(" %lld %c %lld %*c %lld", &a, &tmp, &b, &c);
        bool flag;
        if(tmp=='+')
        {
            if(a+b==c) flag = true;
            else flag = false;
        }
        else if(tmp=='-')
        {
            if(a-b==c) flag = true;
            else flag = false;
        }
        else if(tmp=='*')
        {
            if(a*b==c) flag = true;
            else flag = false;
        }
        else if(tmp=='/')
        {
            if(b!=0 && a/b==c) flag = true;
            else flag = false;
        }
        printf("%s\n", flag?"correct":"wrong answer");
    }

    return 0;
}