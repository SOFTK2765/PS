#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    priority_queue<int> pq;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int tmp;
            scanf(" %d", &tmp);
            pq.push(-tmp);
        }
        for(int j=0;j<n-1;j++)
            pq.pop();
    }
    printf("%d", -pq.top());

    return 0;
}