#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char, pair<int, int>> mp;
    mp['A'].first = 11;
    mp['A'].second = 11;
    mp['K'].first = 4;
    mp['K'].second = 4;
    mp['Q'].first = 3;
    mp['Q'].second = 3;
    mp['J'].first = 20;
    mp['J'].second = 2;
    mp['T'].first = 10;
    mp['T'].second = 10;
    mp['9'].first = 14;
    mp['9'].second = 0;
    mp['8'].first = 0;
    mp['8'].second = 0;
    mp['7'].first = 0;
    mp['7'].second = 0;
    int n;
    char b;
    scanf("%d %c", &n, &b);
    int sum = 0;
    for(int i=0;i<4*n;i++)
    {
        string tmp;
        cin >> tmp;
        if(tmp[1]==b) sum += mp[tmp[0]].first;
        else sum += mp[tmp[0]].second;
    }
    printf("%d", sum);

    return 0;
}