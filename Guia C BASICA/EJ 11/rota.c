#include <stdio.h>


void rotador(int arr[], int n){
    int s = arr[0];
    for(int i = 1; i < n ; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = s;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    rotador(arr,n);

    for(int i = 0;i < n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}