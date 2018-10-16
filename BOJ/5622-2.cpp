#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin >> a;
    int res = 0;
    for(string::iterator it=a.begin();it<=a.end();it++)
    {
        int tmp = (*it-'A')/3+1;
        switch(tmp)
        {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                res += (tmp+2);
                break;
            case 7:
                if(*it=='S') res += 8;
                else res += 9;
                break;
            case 8:
                if(*it=='V') res += 9;
                else res += 10;
                break;
            case 9:
                res += 10;
        }
    }
    printf("%d", res);

    return 0;
}