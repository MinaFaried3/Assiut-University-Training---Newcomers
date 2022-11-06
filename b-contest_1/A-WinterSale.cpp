#include <iostream>
#include <iomanip>
using namespace std;

void solution1()
{
    double percentage, new_price;
    cin >> percentage >> new_price;
    double new_percentage = 100 - percentage;
    double discount = new_price / new_percentage;
    double discount_price = discount * percentage;
    double old_price = new_price + discount_price;
    cout << old_price;
}
void solution2()
{
    float new_price, percentage;
    cin >> percentage >> new_price;
    new_price *= 100;
    float new_percentage = (100 - percentage);
    float old_price = new_price / new_percentage;

    cout << fixed << setprecision(2) << old_price;
}

int main()
{
    solution2();
}