#include "../header/cc.hpp"
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    vector<int> money;
    int value = 0, x = 0;
    vector<int> dp(100, -1);
    cc *coin;

    cout << "enter the money(enter -1 to finish entering): " << endl;

    while (value != -1)
    {
        cin >> value;
        money.push_back(value);
    }
    money.pop_back();
    coin = new cc(x, money, dp);
    for (int i = 0; i < 2; i++)
    {
        cout << "enter the ammount: " << endl;
        cin >> x;
        coin->setValue(x);
        int result = coin->getThenumberOfcoins(coin->getValue());
        cout << result << endl;
    }
}