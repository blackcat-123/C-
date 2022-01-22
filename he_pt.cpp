#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    float Dx,Dy,D;
    D=a*e-b*d;
    Dx=c*e-b*f;
    Dy=a*f-c*d;
    if(D==0){
        if(Dx==0 && Dy==0){
            cout<<"VOSONGHIEM";
        }
        if(Dx!=0 || Dy!=0){
            cout<< "VONGHIEM";
        }
    }
    float x=Dx/D,y=Dy/D;
    if(x==-0.00){
        x = abs(x);
    }
    if(y==-0.00){
        y = abs(y);
    }
    return 0;
}