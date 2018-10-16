#include <bits/stdc++.h>
#include <windows.h>

#define h 200

using namespace std;

int melodySize = 203;
const int melody[] = {3,3,0,3,0,1,3,0,5,0,0,0,-5,0,0,0,1,0,0,-5,0,0,-3,0,0,-6,0,-7,0,-65,-6,0,-5,3,5,6,0,4,5,0,3,0,1,2,-7,0,0,1,0,0,-5,0,0,-3,0,0,-6,0,-7,0,-65,-6,0,-5,3,5,6,0,4,5,0,3,0,1,2,-7,0,0, 0, 0, 5, 45, 4, 25, 0, 3, 0, -55, -6, 1, 0, -6, 1, 2, 0, 0, 5, 45, 4, 25, 0, 3, 0, 8, 0, 8, 8, 0, 0, 0, 0, 0, 5, 45, 4, 25, 0, 3, 0, -55, -6, 1, 0, -6, 1, 2, 0, 0, 25, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 45, 4, 25, 0, 3, 0, -55, -6, 1, 0, -6, 1, 2, 0, 0, 5, 45, 4, 25, 0, 3, 0, 8, 0, 8, 8, 0, 0, 0, 0, 0, 5, 45, 4, 25, 0, 3, 0, -55, -6, 1, 0, -6, 1, 2, 0, 0, 25, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0};
unsigned long prevPlayTime = 0;
unsigned long playDuration = 0;
int currentMelody = 0;
int cnt = 0;

void sound(int i, int j);

void play(int a, int b)
{
    sound(a, b*h);
    Sleep(b*h);
}
void sound(int i, int j)
{
    switch(i)
    {
        case -3:
            Beep(329.6*2, j);
            break;
        case -5:
            Beep(392*2, j);
            break;
        case -55:
            Beep(415.3*2, j);
            break;
        case -6:
            Beep(440*2, j);
            break;
        case -65:
            Beep(466.2*2, j);
            break;
        case -7:
            Beep(493.9*2, j);
            break;
        case 0:
            Sleep(j);
            break;
        case 1:
            Beep(261.6*4, j);
            break;
        case 2:
            Beep(293.7*4, j);
            break;
        case 25:
            Beep(311.1*4, j);
            break;
        case 3:
            Beep(329.6*4, j);
            break;
        case 4:
            Beep(349.2*4, j);
            break;
        case 45:
            Beep(370*4, j);
            break;
        case 5:
            Beep(392*4, j);
            break;
        case 6:
            Beep(440*4, j);
            break;
        case 65:
            Beep(466.2*4, j);
            break;
        case 7:
            Beep(493.9*4, j);
            break;
        case 8:
            Beep(523.3*4, j);
            break;
    }
}

int main()
{
    clock_t begin, end;
    begin = clock();

    int premillis = 0;
    int milli = clock()-begin;
    while(milli<240000)
    {
        milli = clock()-begin;
        printf("%d\n", milli);
        if(premillis!=milli/100)
            {
                int ncount = cnt%203;
                play(melody[ncount], 3);
                cnt++;
                cnt %= 203;
                premillis = milli/100;
            }
    }

    return 0;
}