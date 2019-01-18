#include <bits/stdc++.h>

using namespace std;

const string c1[] = {"::::o::::"};
const string c2[] = {"::o:::o::", "o:::::::o"};
const string c3[] = {"::o:o:o::", "o:::o:::o"};
const string c4[] = {"o:o:::o:o"};
const string c5[] = {"o:o:o:o:o"};
const string c6[] = {"ooo:::ooo", "o:oo:oo:o"};

char a[4][4];

int main()
{
    string a;
    for(int i=0;i<3;i++)
    {
        string tmp = "";
        cin >> tmp;
        a += tmp;
    }
    if(a==c1[0]) printf("1");
    else if(a==c2[0] || a==c2[1]) printf("2");
    else if(a==c3[0] || a==c3[1]) printf("3");
    else if(a==c4[0]) printf("4");
    else if(a==c5[0]) printf("5");
    else if(a==c6[0] || a==c6[1]) printf("6");
    else printf("unknown");

    return 0;
}