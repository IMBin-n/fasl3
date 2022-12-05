#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double n ,a,b;
    const double P = 3.14159265 ;
    cout << "Hello,Enter number:" << std::endl;
    cin>>n;
    b=(2*n +1/3) * P ;
    b = sqrt(b) ;
    a= pow(n,n) * pow(2.71828,-n) ;
     a*=b;

     cout<< n <<"!  equals approximately "<<a ;
     cout<<endl;
     return 0;
}
