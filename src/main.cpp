#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int num01;
int num02;

int gen_num()
{
    srand(time(NULL));

    int num = rand () % 100;

    return num;
}

int main()
{
    system("title CursedCalculator");
    cout << "\nCursedCalculator\nCreated By: NoobBit\n\n";
    while (true)
    {
        cout << "Enter your first number: ";
        cin >> num01;

        cout << "Enter your second number: ";
        cin >> num02;

        int sum = gen_num();

        cout << sum << "\n";
    }
    return 0;
}