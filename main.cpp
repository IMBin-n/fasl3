#include <iostream>
#include <cmath>

using namespace std ;
int main() {
    double m ,a ,c;
    cout << "Moadel khod ra vared konid :";
    cin>> m;

    c=m- floor(m) ;
    cout<< floor(m) <<"and"<< c ;

    return 0;
}
