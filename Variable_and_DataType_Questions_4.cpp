// Question 4: Write a program to calculate the area of a circle.  Input:r(radius)                                                 Output:PI*r*r(area)

#include<iostream>
#define PI 3.1416
using namespace std;

int main(){
  float r;
  cout<<"Radius of Circle: ";
  cin>>r;

  float Area = PI*r*r;
  cout<<"Area of Circle: "<<Area;

  return 0;
}
