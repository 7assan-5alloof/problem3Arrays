#include <iostream>

using namespace std;

int main()
{
    int number; cout << "Enter a number >= 2: "; cin >> number; // Input from user

    // Find number of values to add to array
    int cnt = 0;
    for (int i = 2; i <= number; i++)
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
        if (prime) cnt++;
    }

    // Run until the expected number of values expected is reached, and add to array along the way
    int myprime[cnt];
    for (int i = 0; i < cnt; i++) for (int j = 2; j <= number; j++)
        {
            bool prime = true;
            for (int k = 2; k < j; k++)
            {
                if (j == k) continue;
                if (j % k == 0)
                {
                    prime = false;
                    break;
                }
            }
            if (prime) myprime[i] = j;
        }

    // Display results
    for (int i = 0; i < cnt; i++)
    {
        cout << myprime[i];
        if (i + 1 < cnt) cout << " ";
    }

    return 0;
}
