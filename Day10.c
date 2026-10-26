
#include <stdio.h>

#include <math.h>

int main() {
    int l,k,m,c=0;
    printf("enter length of array \n");
    scanf(" %d ", & l);
    int arr[l];
    printf("enter element of array \n");
    for (int i = 0; i < l; i++) {
        scanf(" %d ", & arr[i]);
    }
//linear search
printf("enter element to be searched\n");
    scanf(" %d ", &k);
    for(int i=0;i<l;i++){
        if(k==arr[i]){
m=arr[i];c++; break;
        }       
    }
    if(c==1)
    printf("element found at position %d ",(m+1));
    else
    printf("element not found ");
}