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

    printf("element pour cherch: ");
    scanf("%d",&num);



    



    int found = 0; 
    for (int i = 0; i < size; i++) {
        if (num == arr[i]) {
                printf("new value: ");
                scanf("%d",&newNum);
                arr[i]=newNum;
                found = 1;
                break; 
        }
    }

    if (!found) {
        printf("%d does not exist in the array.\n", num);
        return 0;
    }

    for(int i=0;i<size;i++){
        printf("element %d: ",arr[i]);
    }

    return 0;
}