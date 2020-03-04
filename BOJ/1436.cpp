#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i=666;;i++)
    {
        string tmp = to_string(i);
        if(tmp.find("666")<tmp.length())
        {
            cnt++;
            if(cnt==n)
            {
                cout << tmp << endl;
                break;
            }
        }
    }

    return 0;
}