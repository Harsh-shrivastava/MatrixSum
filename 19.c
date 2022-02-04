#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d,*arr1,*arr2,k=1;
    // taking order of matrix
    printf("Enter order of matrix\"1\":\nRow ");
    scanf("%d", &a);
    printf("Column: ");
    scanf("%d", &b);
    printf("Enter order of matrix\"2\":\nRow ");
    scanf("%d", &c);
    printf("Column: ");
    scanf("%d", &d);
    if (a != c || b != d)
    {
        printf("Both has different order,summation not defined");
        exit(0);
    }
    arr1=(int*)malloc((a*b)*sizeof(int));
    arr2=(int*)malloc((c*d)*sizeof(int));
    
    //taking input for array 1 
    for (int i = 0; i < a; i++)
    {
        for (int m = 0; m < b; m++){printf("enter value of matrix index %d %d: ",k,m+1);scanf("%d",arr1+((i*b)+m));}
        printf("\n");
        k++;
    }
    k=1;
    //taking array 2 input
    for (int i = 0; i < c; i++)
    {
        for (int m = 0; m < b; m++){printf("enter value of matrix index %d %d: ",k,m+1);scanf("%d",arr2+((i*b)+m));}        
        printf("\n");
        k++;
    }
    
    //printing sum
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", arr1[i*b+j]+arr2[i*b+j]);
        }
        printf("\n");
    }
    free(arr2);
    free(arr1);
    return 0;
}