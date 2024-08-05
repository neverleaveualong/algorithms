#include <iostream>

using namespace std;

int fibonacci(int number){
    if (number == 1)
        return 0;
    else if (number == 2)
        return 1;
    else
        return fibonacci(number-1) + fibonacci(number-2);
}

int main(){
    for(int i = 1; i<15; i++){
        cout<<fibonacci(i)<<" ";
    }

    return 0;
}