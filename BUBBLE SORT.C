#include<stdio.h>
 int main()
 {
    int a[50], num, x, y, temp;    
	printf("Please Enter the Number of Elements you want in the array: ");
	scanf("%d", &num);    
	printf("Please Enter the Value of Elements: ");
	for(x = 0; x < num; x++)
    scanf("%d", &a[x]);
    for(x = 0; x < num - 1; x++){       
        for(y = 0; y < num - x - 1; y++)
		{          
            if(a[y] > a[y + 1]){               
                temp = a[y];
                a[y] = a[y + 1];
                a[y + 1] = temp;
            }
        }
    }
    printf("Array after implementing bubble sort: ");
    for(x = 0; x < num; x++)
	{
        printf("%d  ", a[x]);
    }
    return 0;
}
