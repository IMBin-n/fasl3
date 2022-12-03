#include <iostream>

using namespace std ;
void draw_circle () ;
void draw_rectangle ();
void draw_triangel ();

int main()
{
   draw_circle ();
   draw_rectangle();
   draw_triangel () ;

    return 0;
}
 void draw_circle () {
    cout<<"\n   * *" ;
    cout<<"\n *      *";
    cout<<"\n   * * " << endl ;

}
void draw_rectangle () {
    cout<<" ________";
    cout<<"\n|        |";
    cout<<"\n ________" <<endl ;


}
void draw_triangel (){
    cout<<"\n  /\\ ";
    cout<<"\n /  \\";
    cout<<"\n/    \\";
    cout<<"\n______";
}
