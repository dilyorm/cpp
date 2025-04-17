#include <iostream>
using namespace std;

int p1(){
    int a = 5;
    int* p = &a;
    cout << a << " " << p << " " << *p << endl;
    return 0;
}

int p2(){
    int a = 10;
    int* p = &a;
    cout << a << " ";
    *p = 20;
    cout << a << endl;
    return 0;
}

int p3(){
    int a = 3, b = 4;
    void s(int* x, int* y){int t = *x; *x = *y; *y = t;}
    cout << a << " " << b << " ";
    s(&a,&b);
    cout << a << " " << b << endl;
    return 0;
}

int p4(){
    int a[] = {1,2,3,4,5}, *p = a;
    for(int i = 0; i < 5; i++) cout << *(p+i) << " ";
    cout << endl;
    return 0;
}

int p5(){
    int a[] = {1,2,3,4,5}, *p = a;
    cout << *(p+2) << endl;
    return 0;
}

int p6(){
    void s(int* p){*p = (*p)*(*p);}
    int a = 4;
    s(&a);
    cout << a << endl;
    return 0;
}

int p7(){
    int a[5] = {1,2,3,4,5}, *p = a;
    cout << sizeof(a) << " " << sizeof(p) << endl;
    return 0;
}

int p8(){
    int a = 42;
    void* p = &a;
    cout << *(int*)p << endl;
    return 0;
}

int p9(){
    int a[] = {3,9,1,6}, *p = a, m = *p;
    for(int i = 1; i < 4; i++) if(*(p+i) > m) m = *(p+i);
    cout << m << endl;
    return 0;
}

int p10(){
    int a,b,*p=&a,*q=&b;
    cin>>a>>b;
    cout<<*p<<" "<<*q<<endl;
    return 0;
}

int p11(){
    int n, *p, m=0;
    cin >> n;
    p = new int[n];
    for(int i = 0; i < n; i++) cin >> p[i];
    int* x = p;
    for(int i = 1; i < n; i++) if(*(p+i) > *x) x = p+i;
    cout << *x << endl;
    delete[] p;
    return 0;
}

int p12(){
    #define val 33.3
    #define number 50
    int a;
    int& fun(){return a;}
    int foo(){return a;}
    int n1=9,n2=11,*p1=&n1,*p2=&n2,k=0;
    double t=val;
    k=val;
    fun()=number;
    foo()=number;
    cout<<number<<" "<<n2<<" "<<t<<" "<<k<<endl;
    return 0;
}

int p13(){
    int a[10]={1,2,3,4,5,6,7,8,9,10},*p=a;
    for(int i=0;i<10;i++) cout<<p+i<<" "<<*(p+i)<<endl;
    return 0;
}

int p14(){
    int m=42,*p=&m;
    cout<<*p<<endl;
    return 0;
}

int p15(){
    int a[]={10,20,30,40,50},*p=a;
    cout<<*(p+4)<<endl;
    return 0;
}

int p16(){
    int a=75,*p=&a;
    cout<<*p<<" ";
    *p+=10;
    cout<<*p<<endl;
    return 0;
}

int p17(){
    int a[]={1,2,3,4,5},*l=a,*r=a+4,t;
    while(l<r){t=*l;*l=*r;*r=t;l++;r--;}
    for(int i=0;i<5;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

int p18(){
    int a[]={78,95,85,62,88},*p=a,*x=p,*y=p,*z=p;
    for(int i=1;i<5;i++){
        if(*p<*(p+i)) x=p+i;
    }
    for(int i=0;i<5;i++){
        if(p+i!=x && (*p+i>*y || y==x)) y=p+i;
    }
    for(int i=0;i<5;i++){
        if(p+i!=x && p+i!=y && (*p+i>*z || z==x || z==y)) z=p+i;
    }
    cout<<*x<<" "<<*y<<" "<<*z<<endl;
    return 0;
}

int* p19(int& n){
    static int c[10]={};
    while(n){c[n%10]++;n/=10;}
    return c;
}

void p20(int* a,int n){
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(*(a+i)>*(a+j)){
                int t=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=t;
            }
    for(int i=0;i<n;i++) cout<<*(a+i)<<" ";
    cout<<endl;
}

void p21(const char* s,int& v,int& c){
    v=c=0;
    while(*s){
        char x=tolower(*s);
        if((x>='a'&&x<='z'))
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u') v++;
            else c++;
        s++;
    }
}
