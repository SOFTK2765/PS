#include <bits/stdc++.h>

using namespace std;

bool p[10001];

int main()
{
    for(int i=3;i*i<=10000;i+=2)
        for(int j=i+i;j<10000;j+=i)
            p[j] = true;
    vector<int> v;
    v.push_back(2);
    for(int i=3;i<=10000;i+=2)
        if(!p[i]) v.push_back(i);
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        for(int i=n/2;i>=2;i--)
            if(binary_search(v.begin(), v.end(), i) && binary_search(v.begin(), v.end(), n-i))
            {
                printf("%d %d\n", i, n-i);
                break;
            }
    }

    return 0;
}