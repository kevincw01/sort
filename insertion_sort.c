#include <stdio.h>

int main()
{
    #define SIZE 21
    int A[SIZE] = {2,165,4,9,23,1,493,5,65,49,4,6,96,2,6,72,2,3,35,0,2};
    
    print_arr(&A,SIZE);
    
    i_sort(&A,SIZE);
    
    print_arr(&A,SIZE);

    return 0;
}

void print_arr(int arr[],int siz) {
    //int siz = (sizeof(arr)/sizeof(arr[0]));
    //int siz = sizeof(arr);
    printf("array size=%d\n",siz);
    
    for(int i=0; i<siz;i++) {
        printf("%d",arr[i]);
        if((i+1)<siz)
            printf(", ");  //dont print after last number
        else
            printf("\n");
    }
}

void i_sort(int arr[], int siz) {
    for(int i=1;i<siz;i++) {
        int j = i;
        while (j > 0 && arr[j-1] > arr[j]) {
            int k = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = k;
            j = j-1;
        }
    }
}
