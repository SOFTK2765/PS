#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int al = a.length(), bl = b.length();
    int n1 = 0, n2 = 0;
    for(int i=al-1;i>=0;i--)
        if(a[i]=='1') n1 += (int)pow(2, al-1-i);
    for(int i=bl-1;i>=0;i--)
        if(b[i]=='1') n2 += (int)pow(2, bl-1-i);
    long long res = (long long)n1*n2;
    string s = "";
    while(res)
    {
        if(res%2==1) s = "1"+s;
        else s = "0"+s;
        res /= 2;
    }
    cout << s;

    return 0;
}