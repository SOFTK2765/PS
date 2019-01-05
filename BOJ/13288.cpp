#include <bits/stdc++.h>

using namespace std;

const string trans[] = {"@", "8", "(", "|)", "3", "#", "6", "[-]", "|", "_|", "|<", "1", "[]\\/[]", "[]\\[]", "0", "|D", "(,)", "|Z", "$", "\'][\'", "|_|", "\\/", "\\/\\/", "}{", "`/", "2"};

int main()
{
    string a;
    getline(cin, a);
    int l = a.length();
    for(int i=0;i<l;i++)
        if('a'<=a[i] && a[i]<='z') cout << trans[a[i]-'a'];
        else if('A'<=a[i] && a[i]<='Z') cout << trans[a[i]-'A'];
        else cout << a[i];

    return 0;
}