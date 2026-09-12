#include <iostream>
using namespace std;
int main(){
    // SI=(P*R*T)/100
    float p;
    cout<<"Enter the principal amount:";

    cin >> p;

    float r;
    cout<<"Enter the rate of interest :";

    cin >> r;
    
    float t;
    cout<<"Enter the time period in years :";

    cin >> t;

    cout<<"The simple interest is Rs "<<(p*r*t)/100.0<<endl;
}