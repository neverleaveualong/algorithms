#include <iostream>

using namespace std;

int factorial(int number){
    if(number == 0){
        return 1;
    } else {
        return number * factorial(number - 1);
    }
}
int main(){
    cout<<"1!="<<factorial(1)<<endl;
    cout<<"2!="<<factorial(2)<<endl;
    cout<<"3!="<<factorial(3)<<endl;
    cout<<"4!="<<factorial(4)<<endl;
    cout<<"5!="<<factorial(5)<<endl;

    return 0;
}