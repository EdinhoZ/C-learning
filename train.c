#include <stdio.h>
#include <string.h>

/* 1. Write a program in C to store elements in an array and print them.
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9 */

void printarray(){
    int n;
    scanf("%d\n",&n);
    int array[n];
    for(int i = 0; i < n;i++){
        scanf("%d",&array[i]);
    }
    for(int i = 0;i < n;i++){
        printf("%d",array[i]);
    }

    printf("\n");
}

/*2. Write a program in C to read n number of values in an array and display them in reverse order.
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2 */

void reverse(){
    int n;
    scanf("%d\n",&n);
    int array[n];
    for(int i = 0; i < n;i++){
        scanf("%d",&array[i]);
    }
    for(int i = 0;i < n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    for(int i = n-1; i >= 0;i--){
        printf("%d ",array[i]);
    }

    printf("\n");

}

/*3. Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15 */

void sumarray(){
    int n;
    scanf("%d\n",&n);
    int array[n];
    int sum = 0;
    for(int i = 0; i < n;i++){
        scanf("%d",&array[i]);
        sum += array[i];
    }
    printf("%d\n",sum);
}

/*4. Write a program in C to count the total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1 */

void duplicate(){
    int n;
    scanf("%d\n",&n);
    int array[n];
    int count = 0;
    for(int i = 0; i < n;i++){
        scanf("%d",&array[i]);
        if(array[i] == array[i-1]) count++;
    }
    printf("%d\n",count);
}

/*5. Write a program in C to print all unique elements in an array.
Test Data :
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output :
The unique elements found in the array are:
3 5 */

void unique(){
    int n, i, k;
    scanf("%d\n",&n);
    int a[n];
    for(i = 0; i < n;i++){
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n;i++){
        int count = 0;
        for(int j = 0, k = n; j < k+1; j++){
            if(i != j){
                if(a[i] == a[j]) count++;
            }
        }
        if(count == 0){
            printf("%d ",a[i]);
        }
    }
}

/*6. Write a program in C to show the basic declaration of a pointer.
Expected Output :

 Pointer : Show the basic declaration of pointer :                                                            
-------------------------------------------------------                                                       
 Here is m=10, n and o are two integer variable and *z is an integer                                          
                                                                                                              
 z stores the address of m  = 0x7ffd40630d44                                                                  
                                                                                                              
 *z stores the value of m = 10                                                                                
                                                                                                              
 &m is the address of m = 0x7ffd40630d44                                                                      
                                                                                                              
 &n stores the address of n = 0x7ffd40630d48                                                                  
                                                                                                              
 &o  stores the address of o = 0x7ffd40630d4c                                                                 
                                                                                                              
 &z stores the address of z = 0x7ffd40630d50  */

void pointer(){
    int m = 10;
    int *z = &m;
    int n,o;
    printf("%d\n",m);
    printf("%p\n",z);
    printf("%d\n",*z);
    printf("%p\n",&m);
    printf("%p\n",&n);
    printf("%p\n",&o);
}

/*6. Write a program in C to demonstrate how to handle pointers in a program.
Expected Output :

Address of m : 0x7ffcc3ad291c
 Value of m : 29                                                                                              
                                                                                                              
 Now ab is assigned with the address of m.                                                                    
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 29                                                                                   
                                                                                                              
 The value of m assigned to 34 now.                                                                           
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 34                                                                                   
                                                                                                              
 The pointer variable ab is assigned with the value 7 now.                                                    
 Address of m : 0x7ffcc3ad291c                                                                                
 Value of m : 7 */

void handpoint(){
    int m = 29;
    printf("%d\n",m);
    printf("%p\n",&m);

    int* ab;
    ab = &m;
    printf("%d\n",*ab);
    printf("%p\n",ab);

    m = 34;
    printf("%d\n",*ab);
    printf("%p\n",ab);

    *ab = 7;
    printf("%d\n",m);
    printf("%p\n",&m);
}

int main(){
    int a;
    scanf("%d\n",&a);
    printf("%d\n",a);
    return 0;
}