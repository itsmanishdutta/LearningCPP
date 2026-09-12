#include <iostream>
using namespace std;

int main(){
int number;
cout<<"Enter the number whose factorial you want to enter:";
cin>>number;  
int product=1;
while(number>=1){
    product=product*number;
    number = number-1;
}
cout<<product;
}

