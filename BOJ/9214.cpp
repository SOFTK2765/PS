#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc = 0;
    while(++tc)
    {
        string n;
        cin >> n;
        if(n=="0") break;
        int l = n.length();
        while(l%2==0)
        {
            string tmp = "";
            char pre = 0;
            bool flag = false;
            for(int i=0;i<l;i++)
            {
                int a = (n[i++])-'0';
                char b = n[i];
                for(int j=0;j<a;j++)
                    tmp = tmp+b;
            }
            if(n==tmp) break;
            n = tmp;
            l = n.length();
        }
        printf("Test %d: %s\n", tc, n.c_str());
    }

    return 0;
}