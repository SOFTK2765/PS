#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    for(int i=1;i<=5;i++)
        v.push_back(i);
    v.erase(v.begin(), v.begin()+3);

    cout << v[0];

    return 0;
}