#include <iostream>
using namespace std;

int main() {
    int num1 = 1;
    int num2 = 1;
    int result = 0;
    int sumOfEvenNum;
    int i;

    while (result < 4000000){
        result = num1 + num2;
        if((result % 2) == 0){
            sumOfEvenNum += result;
        }
        num1 = num2;
        num2 = result;
    }
    cout << sumOfEvenNum;

    return 0;
}