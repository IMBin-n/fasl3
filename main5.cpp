#include <iostream>
using namespace std;
int h ,a,b;
void getdata(){
    cout << "Hello, enter h:" <<endl;
    cin>>h;
    cout<<"a:"<<endl;
    cin>>a;
    cout<<"b:";
    cin>>b;
}
int main() {
    int v,s;
    getdata();
    v=a*b*h;
    s=((a+b)*2) * h ;
    cout <<"the volume is :" << v <<endl  ;
    cout << "the surface area is :" <<s <<endl ;
    return 0;
}
