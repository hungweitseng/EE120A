#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int *id;
double *homework;
double *midterm;
double *final;

int init(int num_of_records)
{
    int i;
    for(i=0;i<num_of_records;i++)
        id[i] = rand();
    for(i=0;i<num_of_records;i++)
        homework[i] = (double)(rand()%100);
    for(i=0;i<num_of_records;i++)
        midterm[i] = (double)(rand()%100);
    for(i=0;i<num_of_records;i++)
        final[i] = (double)(rand()%100);
    return 0;
}

int main(int argc, char **argv)
{
    int i,j;
    double midterm_average=0.0;
    int number_of_records = 10000000;
    struct timeval time_start, time_end;
    id = (int*)malloc(sizeof(int)*number_of_records);
    midterm = (double*)malloc(sizeof(double)*number_of_records);
    final = (double*)malloc(sizeof(double)*number_of_records);
    homework = (double*)malloc(sizeof(double)*number_of_records);
    init(number_of_records);
    gettimeofday(&time_start, NULL);
    
    for (j = 0; j < 100; j++)
        for (i = 0; i < number_of_records; i++)
            midterm_average+=midterm[i];
            
    gettimeofday(&time_end, NULL);
    printf("average: %lf\n",midterm_average/number_of_records);
//    printf("memory usage: %lu\n",sizeof(int)*number_of_records+sizeof(double)*number_of_records+sizeof(double)*number_of_records+sizeof(double)*number_of_records);
    printf("Takes %lf seconds\n",((time_end.tv_sec * 1000000 + time_end.tv_usec)- (time_start.tv_sec * 1000000 + time_start.tv_usec))/1000000.0);
    free(id);
    free(midterm);
    free(final);
    free(homework);
    return 0;
}