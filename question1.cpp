// Question 1
#include <iostream>
using namespace std;

int main(){
    int radius,height,area,volume=0;
    float pie=3.141592;
    cout<<"Please enter the radius of your cylinder: "<<endl;
    cin>>radius;
    cout<<"Please enter the height of your cylinder: "<<endl;
    cin>>height;  
    area=(2*pie*radius*height)+(2*pie*radius*radius);
    volume=pie*radius*radius*height;
    cout<<"The area of the cylinder is: "<<area<<" and the volume of the cylinder is: "<<volume;
    return 0;
}

