#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int sl = s.length(), tl = t.length(), pos = 0;
    vector<int> v;
    while(1)
    {
        pos = s.find(t, pos);
        if(pos==string::npos) break;
        v.push_back(pos);
        pos++;
        if(pos>=sl-tl+1) break;
    }
    int size = v.size();
    if(size==0) printf("0");
    int mx = max(v[0], sl-tl-v[size-1]);
    for(int i=1;i<size;i++)
        mx = max(mx, v[i]-tl-v[i-1]);
    printf("%d", mx);

    return 0;
}