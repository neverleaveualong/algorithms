#include <iostream>

using namespace std;

int linearsearch (int array[], int size, int target){
    for(int i = 0; i<size; i++){
        if(array[i] == target){
            return i;
        }
    }

    return -1;
}

int main(){

    int size;

    cout << "배열의 크기를 입력하시오: "<<endl;
    cin >> size;

    int* array = new int[size];

    cout << "배열의 요소를 입력하세요: "<<endl;
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    int target;

    cout << "찾으실려는 값을 입력하세요: " <<endl;
    cin >> target;

    int result = linearsearch(array, size, target);

    if (result != -1){
        cout<<"찾으시는 값 "<<target<<"은 "<<result<<"번째 인덱스에 존재합니다."<<endl;
    } else {
        cout<<"찾으시는 값"<<target<<"은 배열에 존재하지 않습니다."<<endl;
    }

    delete[] array;
    
    return 0;
    
    
}