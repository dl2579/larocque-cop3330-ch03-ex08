#include "ch03-ex08.h"
using namespace std;


int main()
{
    int num;
    cout << "Enter an integer: "; //<< std::endl;
    cin >> num;

    oddOrEven(num);

    return 0;
}

void oddOrEven(int num){
    if(num%2 == 0) {
        cout << "The value " << num << " is an even number";
    }
    else{
        cout << "The value " << num << " is an odd number";
    }
}