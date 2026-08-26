#include<iostream>
using namespace std;

int main(){
  int x=10,y=5;
  int exp1 = (y*(x/y + x/y));//20
  int exp2 = (y*x/y + y*x/y);//20
  cout<<exp1<<" ";
  cout<<exp2<<"\n";
  return 0;
}