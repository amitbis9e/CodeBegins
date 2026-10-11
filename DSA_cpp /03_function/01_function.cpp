
// A function is combination logical line of code into single identity,
// fxn organisies code make it readable and maintainable.
#include <iostream>
using namespace std;

void counting()
{
    for (int i = 1; i < 11; i++)
    {
        cout << i << endl;
    }
}
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

int convertIntoCelcius(int far){
    int celcius = (far - 32)*5/9;
    return celcius; 
}
//    fxn name         // parameters
char convertIntoUpperCase(char ch){
    char answer = ch - 'a' + 'A';
    return answer;
}

void favColor();

int main()
{

    
    cout << "let's count :" << endl;
    counting();
    
    cout<<"Print my Name five times: "<<endl;
    printNameFiveTimes();

    int x = 5;
    int y = 4;
    int z = 1;
    cout << "Sum of all three number: ";

    // function call      // arguments
    cout << addThreeNumber(x, y, z) << endl;


    cout<<"Fahrenhiet Converstion:40 "<<endl;
    cout<<"Celcius of 40 Fahrenhiet is:"<<convertIntoCelcius(40) <<endl;



    char upper = convertIntoUpperCase('n');
    cout<<upper<<endl;

    favColor();

    return 0;
}

void favColor()
{
    cout << "Black";
}