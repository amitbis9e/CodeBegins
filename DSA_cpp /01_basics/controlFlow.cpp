// if- else - nested 
#include<iostream>
using namespace std;

int main(){
    // int budget;
    // cout<<"Enter Your Budget: "<<endl;
    // cin>>budget;
    // if(budget>200000){
    //     cout<<"You can buy a Scorpio N";
    // }else
    // {
    //     cout<<"You can't buy a Scorpio N in this budget"<<endl;
    // }

//if- elseif -else

    // int marks = 75;
    // if(marks > 90){
    //     cout<<"A";
    // }
    // else if (marks>80)
    // {
    //       cout<<"B";
    // }
    // else if (marks > 70)
    // {
    //      cout<<"C";
    // }
    // else if(marks>60)
    // {
    //       cout<<"D";
    // }
    // else
    // {
    //     cout<<"passing marks";
    // }

    // nested if else

    int height;
    cout<< "Enter your height: "<<endl;
    cin>>height;

    int weight;
    cout<<"Enter your weight: " <<endl;
    cin>>weight;

    if(height > 5){
        if(weight> 70){
            cout<<"You got a Good BMI"<<endl;
        }
        else
        {
           cout<<"khaya piya kro"<<endl;
        }
    }
     else
        {
            cout<<"Complan Order kru"<<endl;
        }
    
    
    return 0;
}