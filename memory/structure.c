#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

struct student_record
{
    int id;
    double homework;
    double midterm;
    double final;
};

int init(int num_of_records, struct student_record *records)
{
    int i;
    for(i=0;i<num_of_records;i++)
        records[i].id = rand();
    for(i=0;i<num_of_records;i++)
        records[i].homework = (double)(rand()%100);
    for(i=0;i<num_of_records;i++)
        records[i].midterm = (double)(rand()%100);
    for(i=0;i<num_of_records;i++)
        records[i].final = (double)(rand()%100);
    return 0;
}

int main(int argc, char **argv)
{
    int i,j;
    double midterm_average=0.0;
    int number_of_records = 10000000;
    struct timeval time_start, time_end;
    struct student_record *records;
    records = (struct student_record*)malloc(sizeof(struct student_record)*number_of_records);
    init(number_of_records,records);
    gettimeofday(&time_start, NULL);

    for (j = 0; j < 100; j++)
        for (i = 0; i < number_of_records; i++)
            midterm_average+=records[i].midterm;

    gettimeofday(&time_end, NULL);
    printf("average: %lf\n",midterm_average/number_of_records);
//    printf("memory usage: %lu\n",sizeof(struct student_record)*number_of_records);
    printf("Takes %lf seconds\n",((time_end.tv_sec * 1000000 + time_end.tv_usec)- (time_start.tv_sec * 1000000 + time_start.tv_usec))/1000000.0);
    free(records);
    return 0;
}