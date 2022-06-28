#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void interleave (void* output_arr, void* input_arr1, void* input_arr2,size_t arr1_size,size_t arr2_size, size_t elem_size)
{
    int no_of_elements_1 = arr1_size/elem_size;
    int no_of_elements_2 = arr2_size/elem_size;
    int min = no_of_elements_1>no_of_elements_2?no_of_elements_2:no_of_elements_1;
    for (int i=0;i<min;i++)
    {
        memcpy(output_arr+2*i*elem_size,input_arr1+i*elem_size,elem_size);
        memcpy(output_arr+(2*i+1)*elem_size,input_arr2+i*elem_size,elem_size);
    }
    if (no_of_elements_1>min)
    {
        for (int i=min;i<no_of_elements_1;i++)
        {
            memcpy(output_arr+(i+min)*elem_size,input_arr1+i*elem_size,elem_size);
        }
    }else if (no_of_elements_2>min)
    {
        for (int i=min;i<no_of_elements_2;i++)
        {
            memcpy(output_arr+(i+min)*elem_size,input_arr2+i*elem_size,elem_size);
        }
    }
}

int main()
{
    int arr1[] = {13,35,65,24};
    int arr2[] = {51,64,47,48,92,89};
    

    int out[10];
    interleave((void *)out,arr1,arr2,sizeof(arr1),sizeof(arr2),sizeof(int));
    for (int i=0;i<10;i++)
    {
        printf("%d ",out[i]);
    }
    return 0;
}