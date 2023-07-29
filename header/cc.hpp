#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class cc
{
private:
    int value;         // value of the the money we have to exchange
    vector<int> money; // the set of money
    vector<vector<int>> dp;    // a dp vector

public:
    cc(int value, vector<int> money, vector<vector<int>> dp)
    {
        this->value = value;
        this->money = money;
        this->dp = dp;
    }
    ~cc();

    void setValue(int value)
    {
        this->value = value;
    }

    int getValue()
    {
        return value;
    }

    void setMoney(vector<int> money)
    {
        this->money = money;
    }
    vector<int> getMoney()
    {
        return money;
    }

    int coins(int index,int value)
    {
        if (value == 0)
            return 1;
        if (value < 0)
            return 0;
        if (dp[index][value] != -1)
            return dp[index][value];
        
        int way = 0;
        for(int i = 0; i<= value; i+=money[index]){
            way+= coins(index-1, value-i);
        }
        return dp[index][value]= way;

    }
    int getThenumberOfcoins(int value)
    {
    }
};
