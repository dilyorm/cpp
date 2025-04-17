#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void a1() {
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;
    for (int i = 0; i < 5; i++) cout << *(p + i) << " ";
}

void a2() {
    int a[6] = {2, 4, 6, 8, 10, 12};
    for (int i = 0; i < 6; i++) a[i] *= 3;
    for (int i = 0; i < 6; i++) cout << a[i] << " ";
}

void a3() {
    int a[4] = {5, 10, 15, 20};
    int *p = a;
    cout << "a[2] = " << p[2] << endl;
    cout << "*(a + 2) = " << *(p + 2) << endl;
}

void a4() {
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a + 4;
    for (int i = 0; i < 5; i++) cout << *(p - i) << " ";
}

void a5() {
    int a[3] = {1, 2, 3};
    int *p = a + 1;
    cout << "*p = " << *p << endl;
}

void a6() {
    int a[4] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++) cout << *(a + i) << " " << (a + i) << endl;
}

void a7() {
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 7; i++) if (a[i] % 2 == 0) cout << a[i] << " ";
}

void a8() {
    int m[2][3] = {1, 2, 3, 4, 5, 6};
    int *p = &m[0][0];
    for (int i = 0; i < 6; i++) cout << *(p + i) << " ";
}

void a9() {
    int x = 19, y = 12, z = 8;
    int *p[3] = {&x, &y, &z};
    for (int i = 0; i < 3; i++) cout << *(p[i]) << " ";
}

void a10() {
    int a[5] = {17, 1, 5, 19, 4};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (*(a + j) > *(a + j + 1)) {
                int t = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = t;
            }
        }
    }
    for (int i = 0; i < 5; i++) cout << a[i] << " ";
}

void a11() {
    const char *s[4] = {"H", "D", "C", "S"};
    for (int i = 0; i < 4; i++) cout << s[i] << " ";
}

void a12() {
    const char *d[6] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    for (int i = 0; i < 6; i++) cout << d[i][1] << " ";
}

void a13() {
    int d[4][13] = {0};
    const char *s[4] = {"H", "D", "C", "S"};
    const char *f[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    d[0][0] = 1;
    d[3][12] = 1;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            if (d[i][j] == 1) cout << f[j] << " of " << s[i] << endl;
        }
    }
}

void a14() {
    int d[4][13] = {0};
    const char *s[4] = {"H", "D", "C", "S"};
    const char *f[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    srand(time(0));
    for (int c = 1; c <= 52; c++) {
        int r, x;
        do {
            r = rand() % 4;
            x = rand() % 13;
        } while (d[r][x] != 0);
        d[r][x] = c;
    }
    for (int v = 1; v <= 52; v++) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 13; j++) {
                if (d[i][j] == v) cout << f[j] << " of " << s[i] << endl;
            }
        }
    }
}

void a15() {
    void (*f)();
    auto g = []() { cout << "Hello" << endl; };
    auto b = []() { cout << "Bye" << endl; };
    f = g; f();
    f = b; f();
}

int f1(int x, int y) { return x + y; }
int f2(int x, int y) { return x * y; }

void a16(int (*f)(int, int), int x, int y) {
    cout << "Result: " << f(x, y) << endl;
}

void a17() {
    int x = 4, y = 5;
    a16(f1, x, y);
    a16(f2, x, y);
}

void a18() {
    int (*f[])(int, int) = {f1, f2};
    int c, x = 5, y = 3;
    cout << "1. Add\n2. Multiply\nEnter: ";
    cin >> c;
    if (c == 1 || c == 2)
        cout << "Output: " << f[c - 1](x, y) << endl;
    else
        cout << "Invalid\n";
}

int main() {
    a18();
    return 0;
}
