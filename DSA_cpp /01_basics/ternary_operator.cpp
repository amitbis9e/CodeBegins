// condition ? expression_if_true : expression_if_false;

#include<iostream>
using namespace std;

int main(){
    int age = 22;
     
    (age>18)? cout<<"You can vote": cout<<"You can't vote";
    cout<<endl;


    int firstValue = 300;
    int secondValue = 800;

    int result = (firstValue>secondValue)? firstValue: secondValue;
    cout<<"Larger value is: "<<result<<endl;

    return 0;
}