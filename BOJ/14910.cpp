#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, tmp = -1234567;
    while(scanf(" %d", &a)!=EOF)
    {
        if(a<tmp)
        {
            printf("Bad");
            return 0;
        }
        tmp = a;
    }
    printf("Good");

    return 0;
}