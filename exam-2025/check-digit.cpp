#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    //cin>>number;
    //number=-12;
    //number=0;
    number=-35;
    if (number<0){
        cout<<"Negative number"<<endl;
    }
    else if (number==0){
        cout<<"Zero"<<endl;
    }
    else{
        cout<<"Positive number"<<endl;
    }
    if (number%2==0){
        cout<<"Even number"<<endl;
    }
    else{
        cout<<"Odd number"<<endl;
    return 0;
}
}