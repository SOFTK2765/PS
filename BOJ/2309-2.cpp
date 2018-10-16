#include <bits/stdc++.h>

using namespace std;

int a[10];
bool check[10];
bool flag = false;

void f(int pos, int ni)
{
    if(pos==7)
    {
        int sum = 0;
        for(int i=0;i<9;i++)
            if(check[i]) sum += a[i];
        if(sum==100) for(int i=0;i<9;i++) if(check[i]) {printf("%d\n", a[i]); flag = true;}
        return;
    }
    for(int i=ni;i<9;i++)
        if(!check[i] && !flag)
        {
            check[i] = true;
            f(pos+1, i);
            check[i] = false;
        }
}

int main()
{
    for(int i=0;i<9;i++)
        scanf("%d ", &a[i]);
    sort(a, a+9);
    f(0, 0);

    return 0;
}