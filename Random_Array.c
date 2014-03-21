#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_N 100

int main()
{
 char array[MAN_N + 1] ={0,};
 char i;
 char i_rand_data;
 char freq_number = 0;
 srand((unsigned)time(NULL));

 for( i = 0 ; i < MAX_N + 1 ; i++ )
 {
	 i_rand_data = (rand()% MAX_N + 1);
	 array[i_rand_data]++;
 };

 for( i = 1 ; i < MAX_N + 1 ; i++ )
   if( array[freq_number] <=  array[i] )
	freq_number = i;

 printf("Most frequently number is %d \n", freq_number);
 
 for( i = 0 ; i <MAX_N + 1 ; i++ )
 {
   if (i % 10 != 9 )
      printf("[ %2d ] = %d, ", i , array[i]);
   else
      printf("[ %2d ] = %d\n", i , array[i]);
 }; 
 printf("\n");

 return 0 ;

}


   
