#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin >> a;
    int l = a.length(), n;
    scanf(" %d", &n);
    for(int i=0;i<n;i++)
    {
        string tmp;
        cin >> tmp;
        int tl = tmp.length();
        for(int j=0;j<l-tl+1;j++)
        {
            int key = (tmp[0]-a[j]+26)%26;
            for(int k=0;k<tl;k++)
            {
                if(((a[k+j]-'a'+key)%26)+'a'!=tmp[k]) break;
                if(k==tl-1)
                {
                    for(int m=0;m<l;m++)
                        printf("%c", ((a[m]-'a'+key)%26)+'a');

                    return 0;
                }
            }
        }
    }

    return 0;
}