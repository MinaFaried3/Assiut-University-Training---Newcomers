#include <iostream>

using namespace std;
int main()
{
    double percentage, new_price;
    cin >> percentage >> new_price;
    double new_percentage = 100 - percentage;
    double discount = new_price / new_percentage;
    double discount_price = discount * percentage;
    double old_price = new_price + discount_price;
    cout << old_price;
}