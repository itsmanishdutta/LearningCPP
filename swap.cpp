#include <iostream>
using namespace std;
void swap(){
    float first;
    cout<<"Enter first number:";
    cin>>first;

    float second;
    cout<<"Enter second number:";
    cin>>second;

    cout<<"The first number is now changed to "<<(first+second)-first<<endl;
        cout<<"The first number is now changed to "<<(first+second)-second;

}
int main(){
    swap();
}