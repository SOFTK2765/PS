#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    priority_queue<int> pq;
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        pq.push(-tmp);
    }
    int sum = 0;
    while(pq.size()!=1)
    {
        int top1 = -pq.top();
        pq.pop();
        int top2 = -pq.top();
        pq.pop();
        sum += (top1+top2);
        pq.push(-(top1+top2));
    }
    printf("%d", sum);

    return 0;
}