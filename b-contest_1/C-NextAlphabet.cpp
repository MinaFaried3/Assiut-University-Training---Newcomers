#include <iostream>
using namespace std;
void solution1()
{
    char letter;
    cin >> letter;
    int askChar = letter;
    if (askChar == 122)
    {
        cout << 'a' << endl;
        return;
    }
    ++letter;

    cout << letter << endl;
}

void solution2()
{
    char letter;
    cin >> letter;

    letter++;
    letter %= 123;
    if (letter < 97)
        letter += 97;

    cout << letter << endl;
}
int main()
{
    solution2();
}