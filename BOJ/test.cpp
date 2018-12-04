#include <bits/stdc++.h>

using namespace std;

const int dx[] = {2, 14, 5, 5, 4, 4};

int main()
{
    string a;
    getline(cin, a);
    for(int i=0;i<26;i++)
        for(int j=0;j<26;j++)
        {
            int mv = i;
            string tmp = a;
            int l = tmp.length();
            for(int k=0;k<l;k++)
                if('a'<=tmp[k] && tmp[k]<='z')
                {
                    tmp[k] = (tmp[k]+mv-'a')%26+'a';
                    mv = (mv+dx[j%6])%26;
                }
            if(tmp[46]=='a') cout << tmp << endl;
        }


    return 0;
}