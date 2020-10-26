#include<stdio.h>
#include<stdlib.h>
int search(int [], int, int);
int main()
{

    int size, index, key;

    int l[20];

    int count = 0;

    int i;

 

    printf("Enter the size of the array: ");

    scanf("%d", &size);

    index = size;

    printf("Enter the elements:");

    for (i = 0; i < size; i++)

    {

        scanf("%d",&l[i]);

    }
    printf("The array is:");

    for(i=0;i<size;i++)

    {

         printf("%d\t",l[i]);

    }

    printf("\nEnter the key to search: ");

    scanf("%d", &key);

    while (index > 1)

    {

        index = search(l, index - 1, key);

        printf("Key found at position: %d\n", index + 1);

        count++;

    }

    if (!count)

        printf("Key not found.\n");

    return 0;

}

int search(int array[], int size, int key)

{

    int location;

    if (array[size] == key)

    {

        return size;

    }

    else if (size == -1)

    {

        return -1;

    }

    else

    {

        return (location = search(array, size - 1, key));

    }

}

