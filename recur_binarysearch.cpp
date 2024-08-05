#include <iostream>

using namespace std;

int binarysearch(int array[], int start, int end, int target){
    
    if ( start > end){
        return -1;
    }

    int mid = (start + end) / 2;
   
    if(array[mid] == target){
        return mid;
    }
        
    else if(array[mid] < target){
        binarysearch(array, mid+1, end, target);
    }
        
    else{
        binarysearch(array, start, mid-1, target);
    }

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

    int start = 0;
    
    int result2 = binarysearch(array, start, size-1, target);

    if(result2 != -1) {
        cout<<"찾으시는 값: "<<target<<"은 "<<result2<<"번째 인덱스에 존재합니다." <<endl;
    }else{
        cout<<"찾으시는 값: "<<target<<"은 배열에 존재하지 않습니다."<<endl;
    }

    delete[] array;

    return 0;
}