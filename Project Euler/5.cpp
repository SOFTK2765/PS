#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(int i=1;;i++)
    {
        bool flag = false;
        for(int j=1;j<=20;j++)
            if(i%j!=0)
            {
                flag = true;
                break;
            }
        if(!flag)
        {
            printf("%d", i);
            break;
        }
    }

    return 0;
}