#include <omp.h> 
#include <stdio.h> 
int main() { 
int sum = 0; 
#pragma omp parallel 
{ 
#pragma omp critical 
{ 
sum += omp_get_thread_num(); 
printf("Thread %d updated sum to %d\n", omp_get_thread_num(), sum); 
} 
} 
return 0; 
} 