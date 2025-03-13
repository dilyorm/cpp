#include <iostream>
#include <string>
#include <cctype>
#include <string.h>

using namespace std;
int multiply(int a,int b) {
    if (b == 0) {
        return 0;
    }

    if (b < 0) {
        return -multiply(a, -b);
    }

    return a + multiply(a, b - 1);
}
int factorial(int a) {
    if (a==0) {
        return 1;
    }
    return a*factorial(a-1);
}
int fibonacci(int n) {
    if (n==0) {
        return 0;
    }
    if (n==1) {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int sumofn(int n) {
    if (n==0) {
        return 0;
    }
    return sumofn(n-1)+n;
}
int ntoone(int n) {
    if (n==0) {
        return 0;
    }
    cout<<n<<" ";
    return ntoone(n-1);
}
int digits(int n) {
    if (n==0) {
        return 0;
    }
    return 1+digits(n/10);
}
int digitssum(int n) {
    if (n==0) {
        return 0;
    }
    return n%10+digitssum(n/10);
}
int powers(int x, int y) {
    if (y==0) {
        return 1;
    }
    return x*powers(x,y-1);
}
int reverse(int n) {
    if (n==0) {
        return 0;
    }
    cout<<n%10;
    return reverse(n/10);
}
bool polindrom(int n) {

    string s=to_string(n);
    if (s.length()==0 or s.length()==1) {
        return 1;
    }
    return s[s.length()-1]==s[0] and polindrom(stoi(s.substr(1, s.length()-2)));
}
bool isPrimeHelper(int n, int divisor) {
    if (divisor * divisor > n)
        return true;
    if (n % divisor == 0)
        return false;
    return isPrimeHelper(n, divisor + 1);
}

bool isPrime(int n) {
    if (n < 2)
        return false;

    return isPrimeHelper(n, 2);
}

int main() {
    cout<<polindrom(121);
}
