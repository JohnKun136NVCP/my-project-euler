#include <iostream>
using namespace std;

int main()
{
    long long int valueA = 2, lastValue = 1, pairSum = 0;
    while (valueA<=4000000){
        if(valueA%2==0){
            pairSum +=valueA;
        }
        valueA +=lastValue;
        lastValue = valueA - lastValue;
    };
    cout<<pairSum;
    return 0;
}