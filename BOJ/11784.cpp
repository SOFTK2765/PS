#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(cin >> s)
    {
        int l = s.length();
        for(int i=0;i<l/2;i++)
        {
            string tmp = s.substr(i*2, 2);
            char a = 0;
            for(int i=0;i<2;i++)
                if('0'<=tmp[i] && tmp[i]<='9') tmp[i] -= '0';
                else if('A'<=tmp[i] && tmp[i]<='F') tmp[i] -= 'A'-10;
            printf("%c", tmp[0]*16+tmp[1]);
        }
        printf("\n");
    }

    return 0;
}