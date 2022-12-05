#include <iostream>
#include <cmath>
using namespace std;
float dis ,theta,velocity;
void info_m(){
    cout<<"Enter distance (ft) to target: "<<endl;
    cin >> dis;
    cout<<"Enter angle (radians) of elevation:"<<endl;
    cin>>theta;
    cout<<"Enter projectile velocity (ft/sec):"<<endl;
    cin>>velocity;
    cout<<endl;

}
int main() {

    float time , height ;
    const float G = 32.17 ;

     info_m();

     time= dis/(velocity*cos(theta));
     height=velocity*sin(theta)*time-(G* pow(time,2)/2);

     cout<<"time (sec) of flight :"<<time<<endl ;
     cout<<"height at impact :"<<height<<endl ;

    return 0;
}
