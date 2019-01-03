#include <bits/stdc++.h>

using namespace std;

const string alpha[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        printf("Case %d: ", tc);
        for(int i=0;i<5;i++)
        {
            string tmp;
            cin >> tmp;
            for(int j=0;j<26;j++)
                if(alpha[j]==tmp) printf("%c", j+'A');
        }
        printf("\n");
    }

    return 0;
}