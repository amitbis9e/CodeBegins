#include <iostream>
using namespace std;
int main()
{

    // Unary Operator

    // pre-increment || post-increment
    //   ++a              a++
    // pre-decrement || post-decrement
    //  --a               a--

    // Binary Operator

    cout << "Arthmetic" << endl;
    int a = 10;
    int b = 2;
    cout << (a + b) << endl;
    cout << (a - b) << endl;
    cout << (a * b) << endl;
    cout << (a / b) << endl;
    cout << (a % b) << endl;   // reminder

    cout << "Relational" << endl;
    cout << (a < b) << endl;
    cout << (a > b) << endl;
    cout << (a <= b) << endl;
    cout << (a >= b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;

    cout << "Logical" << endl;
    // &&  AND operator --> if all condition are true o/p is true
    bool cond1 = (10 > 5);
    bool cond2 = (5 <= 5);
    bool cond3 = (2 != 2);
    if (cond1 && cond2 && cond3)
    {
        cout << "all conditions are true" << endl;
    }
    else
    {
        cout << "false condition" << endl;
    }

    // OR || operator  --> if any condition is true  o/p is true
    bool val1 = (10 > 5);
    bool val2 = (5 <= 1);
    bool val3 = (2 != 2);
    if (val1 || val2 || val3)
    {
        cout << "all conditions are true" << endl;
    }
    else
    {
        cout << "false condition" << endl;
    }

    // Not !  --> convert the condition
    bool condition = (5 != 55);
    cout << !condition << endl;

    cout << "Assignment operator" << endl;
    // a = 5;
    // a = a+5 ;    a+=5
    // a = a-5 ;    a-=5
    // a = a*5 ;    a*=5
    // a = a/5 ;    a/=5
    // a = a%5 ;    a%=5
   
 
    cout<<"Bitwise Operator"<<endl;   //Works on bit level
    // &,|,~,<<,>>,^
    int x = 5;
    int y = 4;  
    cout<< (x & y) <<endl;  //4 AND             both   1 --> 1
    cout<< (x | y) <<endl;  //5 OR              anyone 1 --> 1
    cout<<  (~5)  <<endl;     //   Not tilda     filps the bit
    cout<< (5<<3) <<endl;    // << Left shift   Note: (5 multiply by 2 ,three time) a*2^n 
    cout<< (10>>1) <<endl;    // >> Right shift  Note: (10 divided by 2 ,one time)  a/2^n
    cout<< (5^5)<<endl;  //0  //XOR ^   same --> 0  different --> 1
    cout<< (5^4)<<endl; //1


    // h\w  On which data type we apply bitwise operator  


}