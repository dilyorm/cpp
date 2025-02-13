#include <iostream>
#include <cmath>
using namespace std;

int p1_1() {
    for (int i = 1; i <= 10; ++i) {
        cout << i<<" ";
    }
}

int p1_2() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cout << i<<" ";
    }
}

int p1_3() {
    int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    cout << sum;
}

int p1_4() {
    int N, sum = 0;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }
    cout << sum;
}

int p1_5() {
    int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    cout << sum / 10.0;
}

int p1_6() {
    int N, sum = 0;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }
    cout << sum / float(N);
}

int p2_1() {
    for (int i = 1; i <= 10; i += 2) {
        cout << i << " ";
    }
}

int p2_2() {
    for (int i = 2; i <= 10; i += 2) {
        cout << i << " ";
    }
}

int p2_3() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i += 2) {
        cout << i << " ";
    }
}

int p2_4() {
    int N;
    cin >> N;
    for (int i = 2; i <= N; i += 2) {
        cout << i << " ";
    }
}

int p2_5() {
    for (int i = 10; i <= 100; i += 10) {
        cout << i << " ";
    }
}

int p2_6() {
    int N;
    cin >> N;
    for (int i = 10; i <= N; i += 10) {
        cout << i << " ";
    }
}

int p3() {
    for (char c = 'A'; c <= 'Z'; ++c) {
        cout << c << " ";
        if ((c - 'A' + 1) % 5 == 0) {
            cout << endl;
        }
    }
}

int p4() {
    int n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0) {
        cout << "Factorial of a negative number is not defined.";
    } else {
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        cout << "Factorial of " << n << " is " << fact;
    }
}

int p5() {
    int num_classes;
    float total_GPA = 0.0, total_credits = 0.0;

    cout << "Enter the number of classes: ";
    cin >> num_classes;

    for (int i = 0; i < num_classes; ++i) {
        int credits;
        float marks;
        cout << "Enter credits and marks for class " << (i + 1) << ": ";
        cin >> credits >> marks;

        total_GPA += credits * marks;
        total_credits += credits;
    }

    cout << "Your total GPA is " << total_GPA / total_credits;
}

int p6() {
    int num_students, num_classes;
    float total_GPA = 0.0, total_credits = 0.0;

    cout << "Enter number of students: ";
    cin >> num_students;

    for (int i = 0; i < num_students; ++i) {
        cout << "Enter number of classes for student " << (i + 1) << ": ";
        cin >> num_classes;

        for (int j = 0; j < num_classes; ++j) {
            int credits;
            float marks;
            cout << "Enter credits and marks for class " << (j + 1) << ": ";
            cin >> credits >> marks;

            total_GPA += credits * marks;
            total_credits += credits;
        }
    }

    cout << "The total GPA of the class is " << total_GPA / total_credits;
}

int p7() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

int p8() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

int p9() {
    int num;
    cin >> num;

    bool prime = true;
    if (num <= 1) {
        prime = false;
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime) {
        cout << "Number is prime";
    } else {
        cout << "Number is not prime";
    }
}

int p10() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cout << i << "*" << i << "=" << (i * i) << endl;
    }
}

int p11() {
    int num, pos = 0, neg = 0, sum = 0, count = 0;
    while (true) {
        cout << "Enter an integer,the input ends if it is 0: ";
        cin >> num;

        if (num == 0) break;

        if (num > 0) {
            ++pos;
        } else {
            ++neg;
        }
        sum += num;
        ++count;
    }

    if (count != 0) {
        cout << "The number of positives is " << pos << endl;
        cout << "The number of negatives is " << neg << endl;
        cout << "The total is " << sum << endl;
        cout << "The average is " << float(sum) / count << endl;
    } else {
        cout << "No numbers entered.";
    }
}

int p12() {
    int num;
    cin >> num;

    while (num != 0) {
        cout << num % 10;
        num /= 10;
    }
}
int p13() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "The depth is 0";
    } else {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i;
            }
            cout << endl;
        }
    }
}

int p14() {
    string binary;
    cin >> binary;

    int decimal = 0;
    int length = binary.size();

    for (int i = 0; i < length; ++i) {
        if (binary[length - 1 - i] == '1') {
            decimal += pow(2, i);
        }
    }

    cout << "The decimal number is " << decimal;
}

int main() {
    p14();
}
