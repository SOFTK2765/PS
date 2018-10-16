#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    queue<int> a;
    for(int i=1;i<=n;i++)
        a.push(i);
    while(a.size()!=1)
    {
        a.pop();
        a.push(a.front());
        a.pop();
    }
    printf("%d", a.front());

    return 0;
}