#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int p1_1() {
    int sum=0;
    for (int i = 1; i <= 100; i++) {
        sum=sum+i;
    }
    cout<<sum<<endl;
}

int p1_2() {
    int N,sum=0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        sum=sum+i;
    }
    cout<<sum<<endl;
}


int p2_1() {
    int prime=0,in=2,flag=0;
    while (prime<10) {
        for (int i=2;i<=sqrt(in)+1;i++) {
            if (in%i==0 and in!=2) {
                flag=1;
                break;
            }
        }
        if (flag==0) {
            cout<<in<<endl;
            prime++;
        }
        in++;
        flag=0;
    }
}

int p2_2() {
    int n,prime=0,in=2,flag=0;
    cin>>n;
    while (prime<n) {
        for (int i=2;i<=sqrt(in)+1;i++) {
            if (in%i==0 and in!=2) {
                flag=1;
                break;
            }
        }
        if (flag==0) {
            cout<<in<<endl;
            prime++;
        }
        in++;
        flag=0;
    }
}

int p3() {
    int n;
    cin>>n;
    while (n>1) {
        cout<<n<<",";
        if (n%2==0) {
            n=n/2;
        }
        else {
            n=n*3+1;
        }
    }
    cout<<1<<endl;
}

int p4() {
    int n,count=1;
    cin>>n;
    while (n>1) {
        count+=1;
        n=n/10;
    }
    cout<<count<<endl;
}

int p5() {
    int n;
    cin>>n;
    while (n>1) {
        cout<<n%10<<" ";
        n=n/10;
    }
    cout<<n<<endl;
}
int findGCD(int a, int b) {
    if (a == 0)
        return b;
    return findGCD(b % a, a);
}
int p6() {
    int a,b;
    cin>>a>>b;
    cout<<findGCD(a,b);
}

int p7() {
    int sum=0,counter=0,n;
    while (sum<100) {
        cout<<"Enter a number: ";
        cin>>n;
        sum=sum+n;
        counter++;
    }
    cout<<"Sum exceeded 100! Total sum: "<<sum<<endl<<"Total numbers entered: "<<counter;
}

int p8() {
    int n,balance=500;
    cout<<"Your balance: $500";
    while (balance>0) {
        cout<<"Enter withdrawal amount (or 0 to cancel): ";
        cin >> n;
        if (balance<n) {
            cout<<"Insufficient funds!"<<endl;
        }
        else {
            balance=balance-n;
            cout<<"Remaining balance: $"<<balance<<endl;
        }}
}

int p9() {
    string k;
    cout<<"Enter N or Y: ";
    cin>>k;
    while (k!="N" and k!="Y") {
        cout<<"Invalid"<<endl;
        cin>>k;
    }
    cout<<"Accepted";
}

int p10() {
    string user_input;
    cin>>user_input;
    while (user_input!="Exit") {
        cout<<"Processing..."<<endl;
        cin>>user_input;
    }
    cout<<"Goodbye!"<<endl;
}
double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y == 0) {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
    return x / y;
}
void menu() {
    cout << "Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
}
int p11() {
    double num1, num2;
    int choice;

    while (true) {
        menu(); // Display the menu
        cout << "Enter choice (1/2/3/4/5): ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            switch (choice) {
                case 1:
                    cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
                break;
                case 2:
                    cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
                break;
                case 3:
                    cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
                break;
                case 4:
                    cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
                break;
            }
        } else {
            cout << "Invalid choice! Please select a valid option." << endl;
        }
    }
}

int p12() {
    int num;
    cout<<"Enter password: ";
    cin >> num;

    while (num != 6543) {
        cout<<"Incorrect"<<endl;
        cout<<"Enter password: "<<endl;
        cin >> num;
    }
    cout<<"Access Granted";
}
int p13() {
    long long int n,a;
    cout<<"Guess: ";
    cin >> n;
    srand(time(0));

    // Generate a random number between 0 and RAND_MAX
    a = rand() % 100 + 1;
    cout<<a<<endl;
    while (n!=a) {
        if (n<a) {
            cout<<"too low"<<endl;
        }
        else if (n>a) {
            cout<<"too high"<<endl;
        }
        cout<<"Guess: ";
        cin >> n;
    }
    cout<<"Correct!"<<endl;
}

//p14
void welcomeMessage() {
    cout<<"Welcome to the C++ programming world!";
}
//p15
void greetUser() {
    string user_input;
    cout<<"Enter your name: ";
    cin>>user_input;
    cout <<"Hello,"<< user_input <<"!"<< endl;
}
//p16
int maxNumber(int a, int b) {
    if (a>=b) {
        return a;
    }
    else {
        return b;
    }
}
//p17
int factorial(int n) {
    int f=1;
    for (int i = 1; i<=n; i++) {
        f=f*i;
    }
    return f;
}
//p18
int printRectangle(int width, int height) {
    cout<<"The rectangle is :"<<endl;
    for (int i = 1; i<=height; i++) {
        cout<<endl;
        for (int j = 1; j<=width; j++) {
            cout<<"*";
        }
    }
}
int main() {
    printRectangle(3,2);
}
