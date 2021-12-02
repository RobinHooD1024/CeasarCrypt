#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the string: " << endl;
    cin >> size;
    cout << "Enter the step for crypto: " << endl;
    int x;
    cin >> x;
    char *string = new char[size];
    cout << "Enter the string: ";
    for (int i = 0; i < size; i++) {
        cin >> string[i];
    }

        
   

    for (int i = 0; i < size; i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] += x;
            if (string[i] > 'z') {
                string[i] -= 26;
            }
            if (string[i] < 'a') {
                string[i] += 26;
            }
        }

        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] += x;
            if (string[i] > 'Z') {
                string[i] -= 26;
            }
            if (string[i] < 'A') {
                string[i] += 26;
            }
        }
        
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << string[i];
    }
}


