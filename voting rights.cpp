#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter age of a user:";
    cin>>a;

    if (a >= 18) 
	{
        cout << "You are eligible for voting.\n";
        cout << "Choose your Minister wisely!";
    } else 
	{
        cout << "You are not eligible for voting.\n";
        cout << "Wait for "<<18-a<<" years for choosing your Minister.\n";
    }

    return 0;
}
