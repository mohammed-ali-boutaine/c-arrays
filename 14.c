#include<stdio.h>


int main(){



    int size, num;
    float moy;


    printf("number of elemets: ");
    scanf("%d",&size);

    if (size <= 0) {
        printf("error\n");
        return 1; 
    }

    int arr[size];

    for(int i=0;i<size;i++){
        printf("element %d: ",i+1);
        scanf("%d",&arr[i]);
    }


    for (int i = 0; i < size; i++) {
        moy+=arr[i];
    }
    moy/=size;
    printf("moyenne: %.2f",moy);



    return 0;
}