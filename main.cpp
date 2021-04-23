#include <iostream>

using namespace std;

bool prime(int);
int main()
{
    int number; cout << "Enter a number >= 2: "; cin >> number; // Input from user

    // Find number of values to add to array
    int cnt = 0;
    for (int i = 2; i <= number; i++) if (prime(i)) cnt++;

    // Run until the expected number of values is reached, and add to array along the way
    int myprime[cnt] = {0};
    for (int index = 0; index < cnt;) for (int j = 2; j <= number; j++) if (prime(j))
            {
                myprime[index] = j;
                index++;
            }

    // Display results
    for (int index = 0; index < cnt; index++)
    {
        cout << myprime[index];
        if (index + 1 < cnt) cout << " ";
    }

    return 0;
}

bool prime(int number)
{
    // Preset cases
    if (number == 0 || number == 1) return false;
    if (number == 2) return true;

    // Other cases test
    for (int i = 2; i < number; i++) if (number % i == 0) return false;
    return true;
}
