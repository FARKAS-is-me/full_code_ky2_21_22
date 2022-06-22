#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
float random( float min, float max )
{
    float scale = rand() / (float) RAND_MAX; 
    return min + scale * ( max - min ); 
}
 
int main(){
    srand((int)time(0));
    float x1 = random(0,1);
    float x2 = random(0,1);
    printf("%0.5f %0.5f \n", x1, x2);
    printf("So sau khi lam tron\n");
    printf("%0.5f %0.5f ", round(x1), round(x2));
    
    return 0;
}
 
