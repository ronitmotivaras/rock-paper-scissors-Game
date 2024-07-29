#include <iostream>
using namespace std;

int main()
{
    char ch1, ch2;

    while (true)
    {
        cout << "Choose Your Choice Among of Them \nr for Rock\np for Paper\ns for Seizer" << endl;
        cout << "Enter your choice Player 1: ";
        cin >> ch1;

        if (ch1 == 'r' || ch1 == 'p' || ch1 == 's')
        {
            cout << "\nEnter your choice Player 2: ";
            cin >> ch2;
            cout << endl;

            if (ch2 == 'r' || ch2 == 'p' || ch2 == 's')
            {
                if (ch1 == ch2)
                {
                    cout << "Draw" << endl;
                }
                else if (ch1 == 'r' && ch2 == 'p' || ch1 == 'r' && ch2 == 'p' || ch1 == 's' && ch2 == 'p')
                    cout << "Player 1 is win";
                else
                {
                    cout << "Player 2 is win";
                }
            }
            else
            {
                cout << "Player 2 entered wrong value";
                break;
            }
        }
        else
        {
            cout << "Player 1 entered wrong value";
            break;
        }
    }
}