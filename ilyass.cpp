#include <iostream>
using namespace std;

int main() 
{

    int i;
    cin >> i;
    int RESULT;
    int inputArray[0];


    if (i >= 1000000 || i == 0)
    {
        cout << "the number entred is not valide" << endl;
    }
    else
    {
        for ( RESULT = 0; RESULT <= i; RESULT++)
        {
            cin >> inputArray[RESULT];
            cout << "\n";
        }
        RESULT = inputArray[0];
        for (RESULT = 0; RESULT <= i; RESULT++)
        {
            if (inputArray[i] > RESULT)
            {
                RESULT = i + 1;
            }   
        }
    }
    cout << RESULT << endl;
    return 0;
}