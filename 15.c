#include<stdio.h>


int main(){

    int size1,size2;


    printf("number of elemets of arr 1: ");
    scanf("%d",&size1);

    if (size1 <= 0) {
        printf("error\n");
        return 1; 
    }

    int arr1[size1];
    for(int i=0;i<size1;i++){
        printf("element %d: ",i+1);
        scanf("%d",&arr1[i]);
    }



    printf("number of elemets of arr 2: ");
    scanf("%d",&size2);

    if (size2 <= 0) {
        printf("error\n");
        return 1; 
    }

    int arr2[size2];

    for(int i=0;i<size2;i++){
        printf("element %d: ",i+1);
        scanf("%d",&arr2[i]);
    }

    int size3=size1+size2;
    int arr3[size3];

    int c1=0;
    int c2=0;
    for(int i =0;i<size3;i++){

        if(i < size2){
            arr3[i]=arr1[c1];
            c1++;
            
        }else{
            arr3[i]=arr2[c2];
            c2++;
        }
    // printf("test %d: \n",arr3[i]);


    }

    for(int i=0;i<size3;i++){
        printf("element %d\n",arr3[i]);
    }




    return 0;
}