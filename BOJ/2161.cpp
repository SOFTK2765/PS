#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    queue<int> a;
    for(int i=1;i<=n;i++)
        a.push(i);
    while(!a.empty())
    {
        printf("%d ", a.front());
        a.pop();
        a.push(a.front());
        a.pop();
    }

    return 0;
}