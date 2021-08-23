
#include <bits/stdc++.h>
using namespace std;
bool leap(int n){
  if(n%100==0){
    if(n%400==0)
      return true;
    else
      return false;
  }
  else if(n%4==0)
    return true;
  else
    return false;
}
void calculate(int a,int b,int c,int x,int y,int z){
  int day,month,years;
//days 
  if(x>=a){
    day=x-a;
  }
  else{
    if(((y>7 && y%2==0) or (y<=7 and y%2!=0)) and y!=2){
      day=x-a+31;
    }
    else if(y==2){
      if(leap(z)){
        day=x-a+29;
      }
      else{
        day=x-a+28;
      }
    }
    else{
      day=x-a+30;
    }
  y--;
  }

//month 
if(y>=b){
  month=y-b;
}
else{
  month=y-b+12;
  z--;
}
years=z-c;
cout<<"you are "<<day<<" days "<<month<<" months "<<years<<" years old. \n"<<endl;
}
int main()
{
  int d1,m1,y1,d2,m2,y2;
  cout<<"enter you date of birth \nin (dd/mm/yyyy) format \n";
  cin>>d1>>m1>>y1;
  cout<<"enter you date till which you want\nto calculate age in (dd/mm/yyyy) format \n";
  cin>>d2>>m2>>y2;
  calculate(d1,m1,y1,d2,m2,y2);
}