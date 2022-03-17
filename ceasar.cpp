#include<iostream>

using namespace std;

int main()
{
    int key = 3;
    
    string text = "ABC";

    for(auto element : text)
    {
        if(int(element) >= 65 and int(element) <= 91)
        {
            element+=key;
        }
    }

    cout<<text;

}