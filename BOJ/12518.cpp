#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        string s;
        cin >> s;
        char tmp = s[s.length()-1];
        printf("Case #%d: %s is ruled by %s.\n", tc, s.c_str(), (tmp=='y' || tmp=='Y')?"nobody":(tmp=='a' || tmp=='e' || tmp=='i' || tmp=='o' || tmp=='u' || tmp=='A' || tmp=='E' || tmp=='I' || tmp=='O' || tmp=='U')?"a queen":"a king");
    }

    return 0;
}