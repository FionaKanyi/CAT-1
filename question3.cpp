#include <iostream>
using namespace std;

int main(){
    float taxrate=0.25;
    int grosssalary,netsalary,taxpayable=0;
    cout<< "Enter your gross salary: ";
    cin>> grosssalary;
    taxpayable=taxrate*grosssalary;
    netsalary=grosssalary*taxpayable;
    cout<<"The tax payable to the government is: "<<taxpayable<<" and the net salary is: "<<netsalary;
    return 0;
}