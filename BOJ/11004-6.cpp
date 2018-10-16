#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    priority_queue<int> pq;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin >> tmp;
        pq.push(-tmp);
    }
    for(int i=0;i<k-1;i++)
        pq.pop();
    cout << -pq.top();

    return 0;
}