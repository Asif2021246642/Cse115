#include<stdio.h>

void search(int arr[],int size,int key)
{
    for (int i = 0; i < size;i++)
    {
        if(arr[i]== key)
        {
            printf("Found");
            return;
        }
    }
    printf("Not Found");
}

int main()
{
    int size,key;
    printf("Enter Size: ");
    scanf("%d",&size);
    int arr[size];
    
    for (int i = 0; i < size;i++)
    {
        printf("Enter %d index Array Element : ",i);
        scanf("%d", &arr[i]);
    }
    printf("Enter Key: ");
    scanf("%d", &key);

    search(arr, size, key);

    return 0;
} 