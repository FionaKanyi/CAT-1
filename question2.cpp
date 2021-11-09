#include <iostream>
using namespace std;

int main(){
     int fahrenheit,celcius=0;
    cout<<"Enter your temperature in farenheight"<<endl;
    cin>>fahrenheit;
    celcius = 5.0/9.0*(fahrenheit - 32.0);
    cout<<"The temperature in celcius is: "<<celcius<<endl;
    return 0;
}