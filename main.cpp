#include <iostream>

using namespace std;

int numberOfPrimes(int);
int main()
{
    int number; cout << "Enter a number >= 2: "; cin >> number; // Input from user
    int length = numberOfPrimes(number); // Store needed length for array
    int myprime[length]; // Will specify length of array as needed as per user's input

    // Find values to add to array


    // Display results
    for (int i = 0; i < length; i++)
    {
        cout << myprime[i];
        if (i + 1 < length) cout << " ";
    }

    return 0;
}

int numberOfPrimes(int input)
{
    int result;
    for (int i = 2; i < input; i++)
    {
        bool prime = true;
        for (int j = 2; j < i; j++)
        {
            if (i == j) continue;
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime) result++;
    }

    return result;
}
