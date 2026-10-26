 #include <stdio.h>
#include <math.h> 
int main(){ int r,c;
    printf("enter number of rows and columns ");
    scanf(" %d ", &r, &c);
    //pattern with front spacing and then stars
    for(int i=0;i<r; i++){
        for(int k=0;k<r-i-1;k++){
            printf(" ");
        }
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    //pascals triangle
    for(int i=0;i<r;i++)
    {
        for(int k=0;k<r-i-1;k++){
printf(" ");
     
}
for(int j=0;j<2*i+1;j++){
    printf("*");
}
printf("\n");
}
//inverted pascals triangle
for(int i=r;i>=1;i--){
    for(int k=0;k<r-i;k++){
printf(" ");
    }
    for(int j=1;j<=r;j++){
        printf("*");
    }
    printf("\n");
}
}