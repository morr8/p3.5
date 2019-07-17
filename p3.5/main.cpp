/*
 •• P3.5
 Write a program that reads in three strings and sorts them lexicographically.
 
 Enter three strings: Charlie Able Baker
 Able
 Baker
 Charlie
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter three strings: ";
    string first, second, third;
    cin >> first >> second >> third;
    float fLength = first.length(), sLength = second.length(), tLength = third.length();
    
    if (fLength >= sLength && fLength >= tLength)
    {
        if (sLength >= tLength)
        {
            cout << third << "\n" << second << "\n" << first << "\n";
        }
        else
        {
            cout << second << "\n" << third << "\n" << first << "\n";
        }
    }
    else if (sLength >= fLength && sLength >= tLength)
    {
        if (fLength >= tLength)
        {
            cout << third << "\n" << first << "\n" << second << "\n";
        }
        else
        {
            cout << first << "\n" << third << "\n" << second << "\n";

        }
    }
    else
    {
        if (fLength >= sLength)
        {
            cout << second << "\n" << first << "\n" << third << "\n";
        }
        else
        {
            cout << first << "\n" << second << "\n" << third << "\n";
            
        }
    }
}
