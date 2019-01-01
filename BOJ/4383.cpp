#include <bits/stdc++.h>

using namespace std;

int a[3001];
bool check[3001];

int main()
{
    int n;
    while(~scanf(" %d", &n))
    {
        memset(check, 0, sizeof(check));
        for(int i=0;i<n;i++)
            scanf(" %d", &a[i]);
        for(int i=0;i<n-1;i++)
            check[abs(a[i]-a[i+1])] = true;
        bool flag = false;
        for(int i=1;i<n;i++)
            if(!check[i])
            {
                flag = true;
                break;
            }
        printf("%s\n", flag?"Not jolly":"Jolly");
    }

    return 0;
}