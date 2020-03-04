#include <bits/stdc++.h>

using namespace std;

int w[21];

int main()
{
    for(int i=0;i<20;i++)
        scanf(" %d", &w[i]);
    sort(w, w+10);
    sort(w+10, w+20);
    printf("%d %d", w[9]+w[8]+w[7], w[19]+w[18]+w[17]);

    return 0;
}