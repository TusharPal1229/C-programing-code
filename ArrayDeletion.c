#include<stdio.h>



void display(int arr[], int size){

    for(int i=0; i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

}

void deletion(int arr[], int capacity, int size, int index){

    if(size!=0){

        int dlt=arr[index];
        for(int i=index+1;i<size-1;i++){
            arr[i]=arr[i+1];
        }


    }
    else{
        return 0;
    }


}



int main(){

    int arr[10]={1,3,5,7,2,9,8};

    int size=7;
    int capacity=10;

    int index=3;

    display(arr,size);
    deletion(arr,capacity,size,index);
    size-=1;
    display(arr,size);



    return 0;
}