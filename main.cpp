#include <iostream>
#include <algorithm>
using namespace std;

void p1() {
    int abc, sum = 0;
    cin >> abc;
    int xyz[abc];
    for (int i = 0; i < abc; i++) {
        cin >> xyz[i];
        sum += xyz[i];
    }
    cout << sum << endl;
}

void p2() {
    int def;
    double avg = 0;
    cin >> def;
    int ghi[def];
    for (int i = 0; i < def; i++) {
        cin >> ghi[i];
        avg += ghi[i];
    }
    avg /= def;
    cout << avg << endl;
}

void p3() {
    int jkl, mno;
    cin >> jkl;
    mno = 1e9;
    int pqr[jkl];
    for (int i = 0; i < jkl; i++) {
        cin >> pqr[i];
        mno = min(mno, pqr[i]);
    }
    cout << mno << endl;
}

int indexOfLargestElement(double stu[], int vwx) {
    if (vwx <= 0) return -1;
    double yzq = stu[0];
    int rst = 0;
    for (int i = 1; i < vwx; i++) {
        if (stu[i] >= yzq) {
            yzq = stu[i];
            rst = i;
        }
    }
    return rst;
}

bool strictlyEqual(const int abc[], const int def[], int ghi) {
    for (int i = 0; i < ghi; i++) {
        if (abc[i] != def[i]) return false;
    }
    return true;
}

void p6() {
    char jkl;
    int mno[26] = {0};
    while (cin >> jkl && jkl != '0') {
        if (jkl >= 'a' && jkl <= 'z') {
            mno[jkl - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (mno[i] > 0) {
            cout << char(i + 'a') << " : " << mno[i] << endl;
        }
    }
}

void p7() {
    int pqr;
    cin >> pqr;
    int stu[pqr];
    for (int i = 0; i < pqr; i++) {
        cin >> stu[i];
    }
    sort(stu, stu + pqr);
    for (int i = 0; i < pqr; i++) {
        cout << stu[i] << " ";
    }
    cout << endl;
}

void p8() {
    int vwx[6] = {0};
    for (int i = 0; i < 10000; i++) {
        int yzq = rand() % 6 + 1;
        vwx[yzq - 1]++;
    }
    for (int i = 0; i < 6; i++) {
        cout << (i + 1) << ": " << vwx[i] << endl;
    }
}

void reverseArray(int abc[], int def, int ghi) {
    while (def < ghi) {
        swap(abc[def], abc[ghi]);
        def++;
        ghi--;
    }
}

void p10() {
    int jkl;
    cin >> jkl;
    int mno[jkl];
    for (int i = 0; i < jkl; i++) {
        cin >> mno[i];
    }
    bool pqr = true;
    for (int i = 1; i < jkl; i++) {
        if (mno[i] < mno[i - 1]) {
            pqr = false;
            break;
        }
    }
    cout << (pqr ? "YES" : "NO") << endl;
}

int main() {
    p7();
    return 0;
}
