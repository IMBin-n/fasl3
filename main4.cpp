#include <iostream>
using namespace std;
int ihc , afc ;
float tr ;
void io_problem () {
    cout <<"hi ,wellcome please enter your initial house cost \n" ;
    cin >>ihc;
    cout<< "Annual fuel cost :\n" ;
    cin>>afc;
    cout<< "Tax rate :\n";
    cin>>tr;
}

int main() {
    float all;
    io_problem ();
    tr = ihc *tr*5 ;
    all= tr+ihc+(afc*5);
    cout<<"The total cost of the house is "<<all<<endl;
    return 0;
}
