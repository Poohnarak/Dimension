#include <iostream>

using namespace std;

int FirstFactorial(int num)
{
    int ans=1;
    for(; num>=1; num--)
    {
        ans*=num;
    }
    return ans;
}

int main()
{
    int num=0;
    while(1)
    {
        cout << "Input:";
        cin >> num;
        if(num>=1&&num<=18)
        {
             cout << "Output:" << FirstFactorial(num) << endl<< endl;
        }

        else
        {
            cout << "Input again between 1 and 18 " << endl<< endl;
        }

    }
    return 0;
}
