#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;

int p1(){
    ofstream f("output.txt");
    f<<"Hello, File!";
    f.close();
    return 0;
}

int p2(){
    ifstream f("greeting.txt");
    string s;
    while(getline(f,s)) cout<<s<<endl;
    f.close();
    return 0;
}

int p3(){
    string n;
    int a;
    cin>>n>>a;
    ofstream f("user.txt");
    f<<n<<" "<<a;
    f.close();
    return 0;
}

int p4(){
    ifstream f("data.txt");
    string s;
    while(getline(f,s)) cout<<s<<endl;
    f.close();
    return 0;
}

int p5(){
    ifstream s("source.txt");
    ofstream t("target.txt");
    string x;
    while(getline(s,x)) t<<x<<endl;
    s.close(); t.close();
    return 0;
}

int p6(){
    ifstream f("essay.txt");
    string w; int c=0;
    while(f>>w) c++;
    cout<<"Total words: "<<c<<endl;
    f.close();
    return 0;
}

int p7(){
    ifstream f("numbers.txt");
    int x,s=0;
    while(f>>x) s+=x;
    cout<<"Sum: "<<s<<endl;
    f.close();
    return 0;
}

int p8(){
    ifstream f("values.txt");
    int x,m=1e9,n=-1e9;
    while(f>>x){if(x<m)m=x;if(x>n)n=x;}
    cout<<"Max: "<<n<<", Min: "<<m<<endl;
    f.close();
    return 0;
}

int p9(){
    struct S{int i;char n[20];float g;};
    S s;
    cin>>s.i>>s.n>>s.g;
    ofstream f("student.txt");
    f<<s.i<<" "<<s.n<<" "<<s.g;
    f.close();
    return 0;
}

int p10(){
    struct S{int i;char n[20];float g;} s;
    ifstream f("student.txt");
    f>>s.i>>s.n>>s.g;
    cout<<"ID: "<<s.i<<", Name: "<<s.n<<", GPA: "<<s.g<<endl;
    f.close();
    return 0;
}

int p11(){
    struct S{int i;char n[20];float g;} s[3];
    for(int i=0;i<3;i++) cin>>s[i].i>>s[i].n>>s[i].g;
    ofstream f("class.txt");
    for(int i=0;i<3;i++) f<<s[i].i<<" "<<s[i].n<<" "<<s[i].g<<endl;
    f.close();
    return 0;
}

int p12(){
    struct S{int i;char n[20];float g;} s;
    ifstream f("class.txt");
    while(f>>s.i>>s.n>>s.g)
        cout<<"ID: "<<s.i<<", Name: "<<s.n<<", GPA: "<<s.g<<endl;
    f.close();
    return 0;
}

int p13(){
    struct D{int d,m,y;} d;
    cin>>d.d>>d.m>>d.y;
    printf("%02d-%02d-%d\n",d.d,d.m,d.y);
    return 0;
}

int p14(){
    struct S{int i,a;char g;float c;} s = {101,19,'M',3.4};
    cout<<"Id: "<<s.i<<", Age: "<<s.a<<", Gender: "<<s.g<<", CGA: "<<s.c<<endl;
    return 0;
}

int p15(){
    struct S{int l[5],h[3],e[2];} s = {{10,20,30,40,50},{15,15,15},{35,35}};
    int t=0;
    for(int i:s.l)t+=i;
    for(int i:s.h)t+=i;
    for(int i:s.e)t+=i;
    cout<<"Total: "<<t<<", Average: "<<t/10.0<<endl;
    return 0;
}

int p16(){
    struct S{int i,a;char g;float c;} s[3];
    for(int i=0;i<3;i++) cin>>s[i].i>>s[i].a>>s[i].g>>s[i].c;
    for(int i=0;i<3;i++) cout<<s[i].i<<" "<<s[i].a<<" "<<s[i].g<<" "<<s[i].c<<endl;
    return 0;
}

int p17(){
    struct S{int i,a;char g;float c;} a={1,20,'F',3.5},b=a;
    cout<<"Student1: Id="<<a.i<<", Student2: Id="<<b.i<<endl;
    return 0;
}

int p18(){
    struct S{int i,a;char g;float c;} s[5];
    for(int i=0;i<5;i++) cin>>s[i].i>>s[i].a>>s[i].g>>s[i].c;
    s[4]=s[2];
    cout<<"Student3: "<<s[2].i<<", Student5: "<<s[4].i<<endl;
    return 0;
}

int p19(){
    struct D{int d,m,y;};
    struct B{char n[15];int a;float b;D bd;} s;
    cin>>s.n>>s.a>>s.b>>s.bd.d>>s.bd.m>>s.bd.y;
    cout<<"Name: "<<s.n<<", AccountNo: "<<s.a<<", Birthday: ";
    printf("%02d-%02d-%04d\n",s.bd.d,s.bd.m,s.bd.y);
    return 0;
}

int p20(){
    struct P{float x,y;};
    struct L{P a,b;} l;
    cin>>l.a.x>>l.a.y>>l.b.x>>l.b.y;
    float d=sqrt(pow(l.a.x-l.b.x,2)+pow(l.a.y-l.b.y,2));
    cout<<"Distance = "<<d<<endl;
    return 0;
}

int p21(){
    struct P{float x,y;};
    struct T{P a,b,c;} t;
    cin>>t.a.x>>t.a.y>>t.b.x>>t.b.y>>t.c.x>>t.c.y;
    float d1=sqrt(pow(t.a.x-t.b.x,2)+pow(t.a.y-t.b.y,2));
    float d2=sqrt(pow(t.b.x-t.c.x,2)+pow(t.b.y-t.c.y,2));
    float d3=sqrt(pow(t.c.x-t.a.x,2)+pow(t.c.y-t.a.y,2));
    cout<<"Perimeter = "<<d1+d2+d3<<endl;
    return 0;
}

int p22(){
    struct P{int x,y;};
    struct S{P v[4];} s;
    for(int i=0;i<4;i++) cin>>s.v[i].x>>s.v[i].y;
    int a=abs(s.v[0].x-s.v[2].x)*abs(s.v[0].y-s.v[2].y);
    cout<<"Area = "<<a<<endl;
    return 0;
}

int p23(){
    struct G{int l[5],h[3],e[2];int t;} s[3];
    int m=0,k=0;
    for(int i=0;i<3;i++){
        s[i].t=0;
        for(int j=0;j<5;j++) cin>>s[i].l[j],s[i].t+=s[i].l[j];
        for(int j=0;j<3;j++) cin>>s[i].h[j],s[i].t+=s[i].h[j];
        for(int j=0;j<2;j++) cin>>s[i].e[j],s[i].t+=s[i].e[j];
        if(s[i].t>m){m=s[i].t;k=i;}
    }
    cout<<"Student "<<k+1<<" has the highest total: "<<m<<endl;
    return 0;
}

int p24(){
    struct C{char n[30],p[15],e[30];} c[10];
    for(int i=0;i<10;i++) cin>>c[i].n>>c[i].p>>c[i].e;
    char s[30];
    cin>>s;
    for(int i=0;i<10;i++)
        if(strcmp(c[i].n,s)==0) cout<<c[i].n<<" "<<c[i].p<<" "<<c[i].e<<endl;
    return 0;
}
int main() {
    p24();
}