#include <bits/stdc++.h>

using namespace std;

struct card
{
    int num;
    card *link;
};

card sets[22];
card *setspoint[22];

void rev(int a, int b)
{
    setspoint[a-1]->link = setspoint[b];
    setspoint[a]->link = setspoint[b+1];
    for(int i=a+1;i<=b;i++)
        setspoint[i]->link = setspoint[i-1];

    return;
}

int main()
{
    for(int i=0;i<=21;i++)
    {
        sets[i].num = i;
        sets[i].link = &sets[i+1];
        setspoint[i] = &sets[i];
    }
    for(int i=0;i<10;i++)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        rev(a, b);
    }
    card *tmp = setspoint[0]->link;
    for(int i=0;i<20;i++)
    {
        printf("%d ", tmp->num);
        tmp = tmp->link;
    }

    return 0;
}