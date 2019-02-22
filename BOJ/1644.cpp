#include <bits/stdc++.h>

using namespace std;

bool check[4000001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=3;i<4000000;i += 2)
        if(!check[i]) for(int j=i+i;j<=4000000;j += i) check[j] = true;
    vector<int> v;
    v.push_back(2);
    for(int i=3;i<4000000;i += 2)
        if(!check[i]) v.push_back(i);
    int posa = 0, posb = 0, size = v.size(), sum = v[0], cnt = 0;
    while(posa<size && posb<size && posa<=posb)
    {
        if(sum>n)
        {
            sum -= v[posa];
            posa++;
        }
        else if(sum<n)
        {
            posb++;
            sum += v[posb];
        }
        else
        {
            cnt++;
            sum -= v[posa];
            posa++;
        }
    }
    printf("%d", cnt);

    return 0;
}