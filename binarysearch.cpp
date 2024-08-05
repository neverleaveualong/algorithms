#include <iostream>

using namespace std;

int linearsearch(int array[], int size, int target){
    for(int i = 0; i<size; i++){
        if(target == array[i]){
            return i;
        }
    }

    return -1;
}

int binarysearch(int array[], int size, int target){
    int start = 0;
    int end = size - 1;
    int mid;

    while( start <= end){
        mid = (start + end) / 2;

        if(array[mid] ==  target){
            return mid;
        }
        else if(array[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return -1;

}

int main(){

    int size;
    cout<<"배열의 크기를 입력하세요: "<<endl;
    cin>>size;

    int* array = new int[size];

    cout<<"배열의 요소를 입력하세요." <<endl;
    
    for(int i = 0; i<size; i++){
        cin >> array[i];
    }

    int target;
    cout<<"찾을려는 값을 입력하세요: "<<endl;
    cin>>target;

    int result = linearsearch(array, size, target);

    if(result != -1) {
        cout<<"찾으시는 값: "<<target<<"은 "<<result<<"번째 인덱스에 존재합니다." <<endl;
    }else{
        cout<<"찾으시는 값: "<<target<<"은 배열에 존재하지 않습니다."<<endl;
    }



    int result2 = binarysearch(array, size, target);

    if(result2 != -1) {
        cout<<"찾으시는 값: "<<target<<"은 "<<result2<<"번째 인덱스에 존재합니다." <<endl;
    }else{
        cout<<"찾으시는 값: "<<target<<"은 배열에 존재하지 않습니다."<<endl;
    }

    delete[] array;

    return 0;
}