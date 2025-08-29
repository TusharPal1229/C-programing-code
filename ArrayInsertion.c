#include<stdio.h>



void display(int arr[],int n){
    
    for(int i=0; i<n; i++){

        printf("%d ",arr[i]);
    }
    printf("  \n");
}




int insertion(int arr[], int capacity, int size, int index,int number){

    if(size<capacity){
        size+=1;
        arr[index]=number;
      
    }else{

        return 0;
        
    }

}


int main(){


    int arr[15]={1,2,3,4,5,6,7,8,9};

    int capacity=15;
    int size=9;
    display(arr,size);
    insertion(arr,capacity,size,4,66);
    size+=1;
    display(arr,size);



    return 0;
}