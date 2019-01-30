#include <bits/stdc++.h>

using namespace std;

bool check[1000001];

int main()
{
    for(int i=3;i*i<=1000000;i+=2)
        for(int j=i+i;j<1000000;j+=i)
            check[j] = true;
    vector<int> v;
    for(int i=3;i<1000000;i+=2)
        if(!check[i]) v.push_back(i);
    while(1)
    {
        int n;
        scanf(" %d", &n);
        if(n==0) break;
        int size = v.size();
        bool flag = false;
        for(int i=0;i<n/2;i++)
            if(binary_search(v.begin(), v.end(), n-v[i]))
            {
                printf("%d = %d + %d\n", n, v[i], n-v[i]);
                flag = true;
                break;
            }
        if(!flag) printf("Goldbach's conjecture is wrong.\n");
    }

    return 0;
}