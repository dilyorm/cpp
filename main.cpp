#include <iostream>
using namespace std;
void p1() {
    int a,b,sum=0;
    cin>>a>>b;
    int sumofarray[a][b];
    for (int i=0;i<a;i++) {
        for (int j=0;j<b;j++) {
           cin>>sumofarray[i][j];
            sum+=sumofarray[i][j];
        }
    }
    cout<<sum<<endl;
}
void p2() {
    int a,b,maxofraw=-999999;
    cin>>a>>b;
    int sumofarray[a][b];
    for (int i=0;i<a;i++) {
        maxofraw=-999999;
        for (int j=0;j<b;j++) {
            cin>>sumofarray[i][j];
            maxofraw=max(maxofraw,sumofarray[i][j]);
        }
        cout<<maxofraw<<endl;
    }

}
void p3() {
    int a,b,sumofcolumn=0;
    cin>>a>>b;
    int sumofarray[a][b];
    for (int i=0;i<a;i++) {
        for (int j=0;j<b;j++) {
            cin>>sumofarray[i][j];

        }
    }
    for (int i=0;i<b;i++) {
        sumofcolumn=0;
        for (int j=0;j<a;j++) {
            sumofcolumn+=sumofarray[j][i];
        }
        cout<<sumofcolumn<<" ";
    }
}
void p4() {
    int a,sum=0;
    cin>>a;
    int sumofarray[a][a];
    for (int i=0;i<a;i++) {
        for (int j=0;j<a;j++) {
            cin>>sumofarray[i][j];
        }
    }
    for (int i=0;i<a;i++) {
        sum+=sumofarray[i][i];
    }
    cout<<sum<<endl;
}
void p5() {
    int a,b,sumofcolumn=0;
    cin>>a>>b;
    int sumofarray[a][b];
    int secondarray[b][a];
    for (int i=0;i<a;i++) {
        for (int j=0;j<b;j++) {
            cin>>sumofarray[i][j];

        }
    }
    for (int i=0;i<b;i++) {
        for (int j=0;j<a;j++) {
            secondarray[i][j]=sumofarray[j][i];
            cout<<secondarray[i][j]<<" ";
        }
        cout<<endl;
    }
}
void p6() {
    int a,b,sumofcolumn=0;
    cin>>a>>b;
    int sumofarray[a][b];

    for (int i=0;i<a;i++) {
        for (int j=0;j<b;j++) {
            cin>>sumofarray[i][j];
        }
    }
    cin>>a>>b;
    int sofarray[a][b];
    for (int i=0;i<a;i++) {
        for (int j=0;j<b;j++) {
            cin>>sofarray[i][j];
        }
    }
    int newarray[a][b];
    for (int i=0;i<a;i++) {
        for (int j=0;j<b;j++) {
            newarray[i][j]=0;
            for (int k=0;k<b;k++) {
                newarray[i][j]+=sumofarray[i][k]*sofarray[k][j];
            }
            cout<<newarray[i][j]<<" ";
        }
        cout<<endl;
    }


}
void p7() {
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int rotated[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotated[j][n - 1 - i] = matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
}

void p8() {
    string s;
    cin >> s;
    int vowels = 0, consonants = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vowels++;
        else consonants++;
    }
    cout << vowels << " " << consonants << endl;
}

void p9() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s << endl;
}

void p10() {
    string s;
    cin >> s;
    string rev = s;
    reverse(rev.begin(), rev.end());
    cout << (s == rev ? "Yes" : "No") << endl;
}

void p11() {
    string s;
    cin >> s;
    int freq[26] = {0};
    for (char c : s) freq[c - 'a']++;
    char mostFreq = 'a';
    int maxFreq = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreq = 'a' + i;
        }
    }
    cout << mostFreq << endl;
}

void p12() {
    string s;
    cin >> s;
    string result = "";
    bool seen[26] = {false};
    for (char c : s) {
        if (!seen[c - 'a']) {
            seen[c - 'a'] = true;
            result += c;
        }
    }
    cout << result << endl;
}

void p13() {
    string s;
    getline(cin >> ws, s);
    string longest = "", word = "";
    for (char c : s + " ") {
        if (c == ' ') {
            if (word.length() > longest.length()) longest = word;
            word = "";
        } else {
            word += c;
        }
    }
    cout << longest << endl;
}

void p14() {
    string s1, s2;
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    cout << (s1 == s2 ? "Yes" : "No") << endl;
}

int main() {
    p6();
}