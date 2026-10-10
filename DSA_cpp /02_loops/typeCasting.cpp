// Allows to change the data type of variable one to another 
#include<iostream>
using namespace std;

int main(){
    //IMPLICIT CASTING --> Automatic convestion

    // int to float 
    int num1 = 10;
    float num2 = 5.5;
    float  result = num1 + num2; 
    cout<<result<<endl;              // 15.5

    // char to int
    char ch = 'A';    //65 ASCII value
    int a = ch + 1;
    cout<<a<<endl;    //66
    
    //int to char
    int ammo = 99;
    char alpha = ammo + 1;
    cout<<alpha<<endl;    //d

    //EXPLICIT CASTING --> Manual Conversion

    //float to int
    float al = 10;
    float bl = 15.5;
    float out = al + (int)bl;
    cout<<out<<endl;            // 25

    // double to int
    double pi = 3.14159265359;
     int intPi = (int)pi;
     cout<<intPi<<endl;        //3 

     //float to char
     float number = 66.5;
     char name = (char)number;
     cout<<name<<endl;         //B  

     //int to float 
     int integer1 = 10;
     int interger2 = 3;
     float divide = (float)(integer1/interger2);  // Here int/int gives int which stores in float so,
     cout<<divide<<endl;      // 3.333 becomes 3, stored in float
     
     //    int/int = int
     //    int/float = float
     //    float/int = float
}