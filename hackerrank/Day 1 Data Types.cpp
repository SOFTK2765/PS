#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int tmp1;
    double tmp2;
    string tmp3;
    cin >> tmp1 >> tmp2;
    cin.ignore();
    getline(cin, tmp3);
    cout << i+tmp1 << '\n' << fixed << setprecision(1) << d+tmp2 << '\n' << s+tmp3 << '\n';

    return 0;
}