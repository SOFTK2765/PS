#include <bits/stdc++.h>

using namespace std;

long long sum(vector<int> &a)
{
    long long res = 0;
    for(vector<int>::iterator it=a.begin();it!=a.end();it++)
        res += *it;

    return res;
}

int main()
{

    return 0;
}