#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        string s;
        cin >> s;
        list<char> lt;
        int l = s.length();
        list<char>::iterator it = lt.begin();
        for(int i=0;i<l;i++)
        {
            if(s[i]=='<')
            {
                if(it!=lt.begin()) it--;
            }
            else if(s[i]=='>')
            {
                if(it!=lt.end()) it++;
            }
            else if(s[i]=='-')
            {
                if(it!=lt.begin()) it = lt.erase(--it);
            }
            else lt.insert(it, s[i]);
        }
        for(it=lt.begin();it!=lt.end();it++)
            printf("%c", *it);
        printf("\n");
    }

    return 0;
}