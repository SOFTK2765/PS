#include <bits/stdc++.h>

using namespace std;

const string a[] = {"baby", "sukhwan", "tu", "tu", "very", "cute", "tu", "tu", "in", "bed", "tu", "tu", "baby", "sukhwan"};

int main()
{
    int n;
    scanf("%d", &n);
    int tmp = (n-1)%14;
    cout << a[tmp];
    if(tmp==2 || tmp==6 || tmp==10)
    {
        int cnt = (n-1)/14+2;
        if(cnt<5)
            for(int i=0;i<cnt;i++)
                cout << "ru";
        else cout << "+ru*" << cnt;
    }
    else if(tmp==3 || tmp==7 || tmp==11)
    {
        int cnt = (n-1)/14+1;
        if(cnt<5)
            for(int i=0;i<cnt;i++)
                cout << "ru";
        else cout << "+ru*" << cnt;
    }

    return 0;
}