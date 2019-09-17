#include <bits/stdc++.h>

using namespace std;

int main(){
    long long l, h;
    vector<long long> v;
    vector<long long> ind;
    scanf("%lld %lld", &l, &h);
    for(int i=0;i<8;i++){
        int t;
        scanf(" %d", &t);
        v.push_back(t);
        ind.push_back(0);
    }
    for(int i=1;i<8;i++)
        ind[i] += (long long)v[i]*h;
    for(int i=0;i<8;i++){
        double g = (double)l/v[0];
        ind[i] += v[i]*g;
    }
    int cnt = 0;
    for(int i=1;i<8;i++)
        if(ind[0]>=ind[i]) cnt++;
    printf("%d", cnt);
    return 0;
}