#include<iostream>
using namespace std;
int main(){

// In do-while loop your first itratation do not depend on any condition;

//    int i = 1;
//    do{
//     cout<<"let's Count: "<<i<<endl;
//     i++;
//    }while(i<=20);

//Nested loop

for(int i = 1; i<=3; i++){
    for (int j = 1; j <=3; j++)
    {
        cout<<" i:"<<i<<" j:"<<j;
    }
    cout<<endl;
}

for(int i =1 ; i<= 2; i++){
    for(int j = 1; j<= 2; j++){
        cout<<i*j<<" ";
    }
}

   return 0; 
    
     
}