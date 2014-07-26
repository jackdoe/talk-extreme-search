#include <stdio.h>
#include <sys/time.h>
int main(void) {
    int i,j;
    struct timeval t0,t1;    
    gettimeofday(&t0, 0);    
    for (i = 0; i < 1000000; i++)
        if (i % 2 == 0)
            j++;
    gettimeofday(&t1, 0);
    printf("elapsed: %ldns\n",((t1.tv_sec - t0.tv_sec) * 1000000 + t1.tv_usec - t0.tv_usec));
}
