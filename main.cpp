#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int p1() {
    int a;
    cin>>a;
    if (a>=0) {
        cout<<"Positive number"<<endl;
    }
    else {
        cout<<"Negative number"<<endl;
    }
}
int p2(){
    int a;
    cin>>a;
    if (a%2==0) {
        cout<<"Even number"<<endl;
    }
    else {
        cout<<"Odd number"<<endl;
    }
}
int p3() {
    int a,b;
    cin>>a>>b;
    if (a>b) {
        cout<<"Largest number: "<<a<<endl;
    }
    else if (a==b) {
        cout<<"Largest number: "<<a<<endl;
        cout<<"Two numbers are equal";
    }
    else {
        cout<<"Largest number: "<<b<<endl;
    }
}
int p4() {
    int a,b,c;
    cin>>a>>b>>c;
    if (a>=b & a>=c) {
        cout<<"Largest number: "<<a<<endl;
    }
    else if (b>=a & b>=c) {
        cout<<"Largest number: "<<b<<endl;
    }
    else if (c>=a & c>=b) {
        cout<<"Largest number: "<<c<<endl;
    }
}
int p5() {
    int a;
    cin>>a;
    if (a%4==0) {
        if (a%100==0) {
            if (a%400==0) {
                cout<<"Leap year"<<endl;
            }
            else {
                cout<<"Not a leap year"<<endl;
            }
        }
        else{cout<<"Leap year"<<endl;}
    }
    else {
        cout<<"Not a leap year"<<endl;
    }
}
int p6() {
    int a;
    cin>>a;
    if (a<20) {
        cout<<"too slow"<<endl;
    }
    else if (a>80) {
        cout<<"too fast"<<endl;
    }
    else {
        cout<<"just right"<<endl;
    }
}
int p7() {
    int a;
    cin>>a;
    if (a>=50) {
        cout<<"Pass"<<endl;
    }
    else {
        cout<<"Fail"<<endl;
    }
}
int p8() {
    int a;
    cin>>a;
    if (a>0) {
        cout<<"Positive number"<<endl;
    }
    else if (a<0) {
        cout<<"Negative number"<<endl;
    }
    else {
        cout<<"Zero"<<endl;
    }
}
int p9() {
    string a;
    cin>>a;
    if (a=="g") {
        cout<<"Go!"<<endl;
    }
    else if (a=="y") {
        cout<<"Get ready!";
    }
    else if (a=="r") {
        cout<<"Stop";
    }
}
int p10() {
    int a;
    cin>>a;
    if (a<60) {
        cout<<"F"<<endl;
    }
    else if (a<70) {
        cout<<"D"<<endl;
    }
    else if (a<80) {
        cout<<"C"<<endl;
    }
    else if (a<90) {
        cout<<"B"<<endl;
    }
    else if (a<100) {
        cout<<"A"<<endl;
    }

}
int p11() {
    int a,b;
    cin>>a>>b;
    if (a%b==0) {
        cout<<a<<" is divisible by "<<b<<endl;
    }
    else {
        cout<<a<<" is not divisible by "<<b<<endl;
    }
}
int p12() {
    int a,b,c;
    cin>>a>>b>>c;
    if ((a+b)>c and (a+c)>b and (c+b)>a) {
        cout<<"The triangle is valid"<<endl;
    }
    else {
        cout<<"The triangle is not valid"<<endl;
    }
}
int p13() {
    char a;
    cin>>a;
    if (islower(a)) {
        cout<<"Lowercase alphabet"<<endl;
    }
    else if (isupper(a)) {
        cout<<"Uppercase alphabet"<<endl;
    }
    else {
        cout<<"It is not an alphabet"<<endl;
    }
}
int p14() {
    cout<<"Enter weight and price for pack- age 1: ";
    int w1,p1,w2,p2;
    cin>>w1>>p1;
    cout<<"Enter weight and price for pack- age 2:";
    cin>>w2>>p2;
    if (w1/p1>w2/p2) {
        cout<<"Package 2 has a better price"<<endl;
    }
    else if (w2/p2==w1/p1) {
        cout<<"Two packages have the same price."<<endl;
    }
    else {
        cout<<"Package 1 has a better price"<<endl;
    }
}
int p15() {
    cout<<"Enter a three-digit integer:"<<endl;
    string a;
    cin>>a;
    if (a[0]==a[2]) {
        cout<<a<<" is a palindrome"<<endl;
    }
    else {
        cout<<a<<" is not a palindrome"<<endl;
    }
}
int p16() {
    int x,y;
    cin>>x>>y;
    if (sqrt(x*x+y*y)<10) {
        cout<<"Point ("<<x<<","<<y<<") is in circle";
    }
    else {
        cout<<"Point ("<<x<<","<<y<<") is not in circle";
    }
}
int p17() {
    double a;
    if (a<3.0) {
        cout<<"No schollarship";
    }
    else if (a<3.5) {
        cout<<"You got 50% scholarship";
    }
    else if (a<4) {
        cout<<"You got 60% scholarship";
    }
    else if (a<4.6) {
        cout<<"You got 80% scholarship";
    }
}
int main() {
    p4();
    return 0;
}

