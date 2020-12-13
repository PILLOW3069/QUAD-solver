#include <iostream>
#include <cmath>
#include <cstdlib>
#include<iomanip>
#include<cstdio>
#include<windows.h>
using namespace std;
int main() {
    int a;
    int b;
    int c;
    cout << "enter a,b,c in the form ax^2+bx+c:\n";
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "c:";
    cin >> c;
    if(a,b,c==)
    int d = -b;
    int k = 2 * a;
    int e = 4 * a * c;
    double f = (b * b) - e;
    if (f < 0) {
        system("color 04");
        cout << "the question is wrong or youre wrong";
    }
    else {
        double g = sqrt(f);
        int h = d + g;
        int i = d - g;
        div_t j = div(h, k);
        div_t l = div(i, k);
        int m = j.quot;
        int n = l.quot;
        int o = j.rem;
        int p = l.rem;
        int q = m + o;
        int r = n + p;
        system("color 01");
        cout << "answer for\t" << a << "x^2+" << b << "x+" << c << "\tis" << "\n" << q << "\tand\t" << r << endl;
           }
    return 0;
}