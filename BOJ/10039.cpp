#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        if(tmp<40) tmp = 40;
        sum += tmp;
    }
    printf("%d", sum/5);

    return 0;
}