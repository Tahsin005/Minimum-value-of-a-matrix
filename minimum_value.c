#include<stdio.h>
#include<limits.h>
/*Find out the minimum value in a 2D array*/
int main(){
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int min=INT_MAX;
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(min>arr[i][j]){
                min=arr[i][j];
            }
        }
    }
    printf("The minimum value in this 2D array is: %d\n", min);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(min==arr[i][j])
            printf("The minimum value index is (%d,%d)", i,j);
            break;
        }
    }
    return 0;
}