#include <bits/stdc++.h>

using namespace std;

struct album
{
    int year;
    char name[100];
};

album data[] = {{1967, "DavidBowie"}, {1969, "SpaceOddity"}, {1970, "TheManWhoSoldTheWorld"}, {1971, "HunkyDory"}, {1972, "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars"}, {1973, "AladdinSane"}, {1973, "PinUps"}, {1974, "DiamondDogs"}, {1975, "YoungAmericans"}, {1976, "StationToStation"}, {1977, "Low"}, {1977, "Heroes"}, {1979, "Lodger"}, {1980, "ScaryMonstersAndSuperCreeps"}, {1983, "LetsDance"}, {1984, "Tonight"}, {1987, "NeverLetMeDown"}, {1993, "BlackTieWhiteNoise"}, {1995, "1.Outside"}, {1997, "Earthling"}, {1999, "Hours"}, {2002, "Heathen"}, {2003, "Reality"}, {2013, "TheNextDay"}, {2016, "BlackStar"}};
bool check[25];

int main()
{

    int q;
    scanf("%d", &q);
    while(q--)
    {
        for(int i=0;i<25;i++)
            check[i] = false;
        int a, b;
        scanf(" %d %d", &a, &b);
        int cnt = 0;
        for(int i=0;i<25;i++)
        {
            if(data[i].year>=a && data[i].year<=b)
            {
                cnt++;
                check[i] = true;
            }
        }
        printf("%d\n", cnt);
        for(int i=0;i<25;i++)
            if(check[i]) printf("%d %s\n", data[i].year, data[i].name);
    }

    return 0;
}