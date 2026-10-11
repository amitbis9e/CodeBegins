
// A function is combination logical line of code into single identity,
// fxn organisies code make it readable and maintainable.
#include <iostream>
using namespace std;

void printNameFiveTimes()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << "Amit Bishnoi" << endl;
    }
}

int addThreeNumber(int a, int b, int c)
{
    int result = a + b + c;
    return result;
}

int convertIntoCelcius(int far)
{
    int celcius = (far - 32) * 5 / 9;
    return celcius;
}
//    fxn name         // parameters
char convertIntoUpperCase(char ch)
{
    char answer = ch - 'a' + 'A';
    return answer;
}

void favColor();

void printCounting()
{
    for (int i = 0; i <= 100; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int simpleInterest(int loan, int interest, int time)
{
    int SI = (loan * interest * time) / 100;
    return SI;
}
bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++){
    
        if (n % i == 0)
             return false;
        
    }
    
    return true;
        
}


int main()
{

    cout << "Print my Name five times: " << endl;
    printNameFiveTimes();

    int x = 5;
    int y = 4;
    int z = 1;
    cout << "Sum of all three number: ";

    // function call      // arguments
    cout << addThreeNumber(x, y, z) << endl;

    cout << "Fahrenhiet Converstion:40 " << endl;
    cout << "Celcius of 40 Fahrenhiet is:" << convertIntoCelcius(40) << endl;

    char upper = convertIntoUpperCase('n');
    cout << upper << endl;

    favColor();

    // function printing counting 1 to 100
    printCounting();

    // function to find simple intrest
    // cout<<"For your Simple interest provide some detalis;"<<endl;
    // int loanAmount;
    // int interestRate;
    // int time;
    // cout<<"Principal amount (initial loan or deposit)"<<endl;
    // cin>>loanAmount;
    // cout<<" Annual interest rate (in percent)"<<endl;
    // cin>>interestRate;
    // cout<<"Time duration (in years)"<<endl;
    // cin>>time;

    // int SI = simpleInterest(loanAmount,interestRate,time);
    // cout<<"Simple Interest Amount will be: "<<SI<<endl;

    // fxn for prime numbers 1 to 100
    cout << "Prime number 1 to 100 :" << endl;
    int num = 100;
    for (int i = 1; i <= num; i++)
    {
        if(isPrime(i))
         cout << i << " ";
        
    }
    

    // fxn to check aligible for voting or not
    //  SIP calculator

    return 0;
}

void favColor()
{
    cout << "Black";
}