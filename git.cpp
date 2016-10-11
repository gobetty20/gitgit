#include <iostream>

void print_array(int array[], int size)
{
    int i;
    for(i=0; i<size; i++)
        std::cout << array[i] << " " ;
        
    std::cout << std::endl;
}

int main(int argc, char** argv)
{
    int my_array1[10];
    int my_array2[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    
    for(int i=0; i<10; i++)
        my_array1[i] = i;
        
    print_array(my_array1, 10);
    
    for(int j=0; j<10; j++)
        my_array2[j] = my_array1[j] * my_array2[j];
    
    print_array(my_array2, 10);
    
    return (0);
}