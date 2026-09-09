
#include <iostream>
using namespace std;
void sumEven(){
    int num;
    cout<<"How many numbers you want to enter:";
    cin>>num;
    int numbers;
    int even=0;
    int odd=0;
    for(int i=1; i<=num;i++){
        cout<<"Enter the "<<i<<"th position number:";
        cin>>numbers;
        if (numbers%2==0){
            even=even+numbers;
        }
        else{
odd= odd+numbers;
        }
    }
    cout<<"The sum of only even number is: "<< even<< endl;
    cout<<"The sum of only odd number is: "<< odd;


}

int main(){
    sumEven();
}