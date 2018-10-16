#include <bits/stdc++.h>

using namespace std;

const int xy[][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}};

char a[13], b[13];
char uf[3][3], df[3][3], ff[3][3], bf[3][3], lf[3][3], rf[3][3];

void left_t(char *p1, char *p2, char *p3, char *p4, char *p5, char *p6, char *p7, char *p8, char *p9, char *p10, char *p11, char *p12, char *p13, char *p14, char *p15, char *p16, char *p17, char *p18, char *p19, char *p20)
{
    char tmp = *p1;
    *p1 = *p2;
    *p2 = *p3;
    *p3 = *p4;
    *p4 = tmp;
    tmp = *p5;
    *p5 = *p6;
    *p6 = *p7;
    *p7 = *p8;
    *p8 = tmp;
    tmp = *p9;
    *p9 = *p10;
    *p10 = *p11;
    *p11 = *p12;
    *p12 = tmp;
    tmp = *p13;
    *p13 = *p14;
    *p14 = *p15;
    *p15 = *p16;
    *p16 = tmp;
    tmp = *p17;
    *p17 = *p18;
    *p18 = *p19;
    *p19 = *p20;
    *p20 = tmp;
}

void right_t(char *p1, char *p2, char *p3, char *p4, char *p5, char *p6, char *p7, char *p8, char *p9, char *p10, char *p11, char *p12, char *p13, char *p14, char *p15, char *p16, char *p17, char *p18, char *p19, char *p20)
{
    char tmp = *p1;
    *p1 = *p4;
    *p4 = *p3;
    *p3 = *p2;
    *p2 = tmp;
    tmp = *p5;
    *p5 = *p8;
    *p8 = *p7;
    *p7 = *p6;
    *p6 = tmp;
    tmp = *p9;
    *p9 = *p12;
    *p12 = *p11;
    *p11 = *p10;
    *p10 = tmp;
    tmp = *p13;
    *p13 = *p16;
    *p16 = *p15;
    *p15 = *p14;
    *p14 = tmp;
    tmp = *p17;
    *p17 = *p20;
    *p20 = *p19;
    *p19 = *p18;
    *p18 = tmp;
}

void f_l(){left_t(&ff[0][0], &ff[0][2], &ff[2][2], &ff[2][0], &ff[0][1], &ff[1][2], &ff[2][1], &ff[1][0], &uf[2][0], &rf[0][0], &df[0][2], &lf[2][2], &uf[2][1], &rf[1][0], &df[0][1], &lf[1][2], &uf[2][2], &rf[2][0], &df[0][0], &lf[0][2]);}
void f_r(){right_t(&ff[0][0], &ff[0][2], &ff[2][2], &ff[2][0], &ff[0][1], &ff[1][2], &ff[2][1], &ff[1][0], &uf[2][0], &rf[0][0], &df[0][2], &lf[2][2], &uf[2][1], &rf[1][0], &df[0][1], &lf[1][2], &uf[2][2], &rf[2][0], &df[0][0], &lf[0][2]);}
void l_l(){left_t(&lf[0][0], &lf[0][2], &lf[2][2], &lf[2][0], &lf[0][1], &lf[1][2], &lf[2][1], &lf[1][0], &uf[0][0], &ff[0][0], &df[0][0], &bf[2][2], &uf[1][0], &ff[1][0], &df[1][0], &bf[1][2], &uf[2][0], &ff[2][0], &df[2][0], &bf[0][2]);}
void l_r(){right_t(&lf[0][0], &lf[0][2], &lf[2][2], &lf[2][0], &lf[0][1], &lf[1][2], &lf[2][1], &lf[1][0], &uf[0][0], &ff[0][0], &df[0][0], &bf[2][2], &uf[1][0], &ff[1][0], &df[1][0], &bf[1][2], &uf[2][0], &ff[2][0], &df[2][0], &bf[0][2]);}
void r_l(){left_t(&rf[0][0], &rf[0][2], &rf[2][2], &rf[2][0], &rf[0][1], &rf[1][2], &rf[2][1], &rf[1][0], &uf[2][2], &bf[0][0], &df[2][2], &ff[2][2], &uf[1][2], &bf[1][0], &df[1][2], &ff[1][2], &uf[0][2], &bf[2][0], &df[0][2], &ff[0][2]);}
void r_r(){right_t(&rf[0][0], &rf[0][2], &rf[2][2], &rf[2][0], &rf[0][1], &rf[1][2], &rf[2][1], &rf[1][0], &uf[2][2], &bf[0][0], &df[2][2], &ff[2][2], &uf[1][2], &bf[1][0], &df[1][2], &ff[1][2], &uf[0][2], &bf[2][0], &df[0][2], &ff[0][2]);}
void b_l(){left_t(&bf[0][0], &bf[0][2], &bf[2][2], &bf[2][0], &bf[0][1], &bf[1][2], &bf[2][1], &bf[1][0], &uf[0][2], &lf[0][0], &df[2][0], &rf[2][2], &uf[0][1], &lf[1][0], &df[2][1], &rf[1][2], &uf[0][0], &lf[2][0], &df[2][2], &rf[0][2]);}
void b_r(){right_t(&bf[0][0], &bf[0][2], &bf[2][2], &bf[2][0], &bf[0][1], &bf[1][2], &bf[2][1], &bf[1][0], &uf[0][2], &lf[0][0], &df[2][0], &rf[2][2], &uf[0][1], &lf[1][0], &df[2][1], &rf[1][2], &uf[0][0], &lf[2][0], &df[2][2], &rf[0][2]);}
void u_l(){left_t(&uf[0][0], &uf[0][2], &uf[2][2], &uf[2][0], &uf[0][1], &uf[1][2], &uf[2][1], &uf[1][0], &bf[0][2], &rf[0][2], &ff[0][2], &lf[0][2], &bf[0][1], &rf[0][1], &ff[0][1], &lf[0][1], &bf[0][0], &rf[0][0], &ff[0][0], &lf[0][0]);}
void u_r(){right_t(&uf[0][0], &uf[0][2], &uf[2][2], &uf[2][0], &uf[0][1], &uf[1][2], &uf[2][1], &uf[1][0], &bf[0][2], &rf[0][2], &ff[0][2], &lf[0][2], &bf[0][1], &rf[0][1], &ff[0][1], &lf[0][1], &bf[0][0], &rf[0][0], &ff[0][0], &lf[0][0]);}
void d_l(){left_t(&df[0][0], &df[0][2], &df[2][2], &df[2][0], &df[0][1], &df[1][2], &df[2][1], &df[1][0], &ff[2][0], &rf[2][0], &bf[2][0], &lf[2][0], &ff[2][1], &rf[2][1], &bf[2][1], &lf[2][1], &ff[2][2], &rf[2][2], &bf[2][2], &lf[2][2]);}
void d_r(){right_t(&df[0][0], &df[0][2], &df[2][2], &df[2][0], &df[0][1], &df[1][2], &df[2][1], &df[1][0], &ff[2][0], &rf[2][0], &bf[2][0], &lf[2][0], &ff[2][1], &rf[2][1], &bf[2][1], &lf[2][1], &ff[2][2], &rf[2][2], &bf[2][2], &lf[2][2]);}

int main()
{
    while(1)
    {
        memset(a, 0, sizeof(a));
        scanf(" %s", a);
        if(!strcmp(a, "ENDOFINPUT")) break;
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                scanf(" %c", &uf[i][j]);
        for(int i=0;i<3;i++)
            for(int j=0;j<12;j++)
                scanf(" %c", j<3?&lf[i][j]:j<6?&ff[i][j-3]:j<9?&rf[i][j-6]:&bf[i][j-9]);
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                scanf(" %c", &df[i][j]);
        while(1)
        {
            memset(b, 0, sizeof(b));
            scanf(" %[^\n]s", b);
            if(!strcmp(b, "END")) break;
            else if(!strcmp(b, "front left")) f_l();
            else if(!strcmp(b, "front right")) f_r();
            else if(!strcmp(b, "left left")) l_l();
            else if(!strcmp(b, "left right")) l_r();
            else if(!strcmp(b, "right left")) r_l();
            else if(!strcmp(b, "right right")) r_r();
            else if(!strcmp(b, "back left")) b_l();
            else if(!strcmp(b, "back right")) b_r();
            else if(!strcmp(b, "top left")) u_l();
            else if(!strcmp(b, "top right")) u_r();
            else if(!strcmp(b, "bottom left")) d_l();
            else if(!strcmp(b, "bottom right")) d_r();
        }
        bool flag = false;
        for(int i=0;i<8 && !flag;i++)
            if(uf[1+xy[i][0]][1+xy[i][1]]!=uf[1][1]) flag = true;
        for(int i=0;i<8 && !flag;i++)
            if(df[1+xy[i][0]][1+xy[i][1]]!=df[1][1]) flag = true;
        for(int i=0;i<8 && !flag;i++)
            if(ff[1+xy[i][0]][1+xy[i][1]]!=ff[1][1]) flag = true;
        for(int i=0;i<8 && !flag;i++)
            if(bf[1+xy[i][0]][1+xy[i][1]]!=bf[1][1]) flag = true;
        for(int i=0;i<8 && !flag;i++)
            if(lf[1+xy[i][0]][1+xy[i][1]]!=lf[1][1]) flag = true;
        for(int i=0;i<8 && !flag;i++)
            if(rf[1+xy[i][0]][1+xy[i][1]]!=rf[1][1]) flag = true;
        printf("%s", flag?"No\n":"Yes\n");
    }

    return 0;
}