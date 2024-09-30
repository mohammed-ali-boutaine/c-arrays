#include<stdio.h>


int main(){



    int size;
    int num,newNum;

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



    int found = 0; 
    for (int i = 0; i < size; i++) {
        if (arr[i]%2 == 0) {
                printf("%d ",arr[i]);
                found = 1;
        }
    }

    if (!found) {
        printf("no pair nums.\n");
        return 0;
    }


    return 0;
}