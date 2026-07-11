#include<stdio.h>

int main()
{
    // when we not assigned any value it prints 0.000
    float var_1;
    printf("var_1: %f\n", var_1);
    
    // when we assign a value of int instead of float it automatically add decimal and zeros after it 
    float var_2 = 10;
    printf("var_2: %f\n", var_2);
   
    // working as expected
    float var_3 = 12.49484;
    printf("var_3:%f\n",var_3);
    
    //when we assign a value of float (in int data type) instead of int it automatically removes deciaml and value after that
    int var_4= 17.9948;
    printf("var_4:%d\n",var_4);
    
    
}