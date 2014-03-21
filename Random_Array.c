#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
 char array[101] ={0,};
 char i;
 char i_rand_data;
 char freq_number = 0;
 srand((unsigned)time(NULL));

 for( i = 0 ; i < 101 ; i++ )
 {
	 i_rand_data = (rand()%101);
	 array[i_rand_data]++;
 };

 for( i = 1 ; i < 101 ; i++ )
   if( array[freq_number] <=  array[i] )
	freq_number = i;

 printf("Most frequently number is %d \n", freq_number);
 
 for( i = 0 ; i <101 ; i++ )
 {
   if (i % 10 != 9 )
      printf("[ %2d ] = %d, ", i , array[i]);
   else
      printf("[ %2d ] = %d\n", i , array[i]);
 }; 
 printf("\n");

 return 0 ;

}


   
