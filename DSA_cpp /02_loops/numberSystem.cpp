
#include<iostream>
using namespace std;
int main(){


    // Decimal to Binary conversion 
   
    int num = 10;

//   for(int i = num; i>0; i = i/2){
//       int rem = i%2;
//       cout<<rem<<endl;

//   }

//Bitwise AND
   for(int i = num; i>0; i = i/2){
      int rem = i&1;
      cout<<rem<<endl;
   }

    // Binary to Decimal conversion 
      int binValue = 0101;
      int base = 2;
      int digit ;
      int power = 0;
      while (binValue>0)
      {
        int result = binValue%10;
        //    cout<<(result *2 )^(power);
         binValue = binValue/10;
      }
      

  }
    return 0;
}