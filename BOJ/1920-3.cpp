#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    set<int> st;
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        st.insert(tmp);
    }
    int m;
    scanf(" %d", &m);
    for(int i=0;i<m;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        set<int>::iterator it;
        if(st.find(tmp)==st.end()) printf("0\n");
        else printf("1\n");
    }

    return 0;
}