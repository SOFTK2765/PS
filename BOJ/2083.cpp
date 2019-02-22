#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        string a;
        int tmp1, tmp2;
        cin >> a >> tmp1 >> tmp2;
        if(a=="#" && tmp1==0 && tmp2==0) break;
        cout << a << " " << ((tmp1>17 || tmp2>=80)?"Senior":"Junior") << endl;
    }

    return 0;
}