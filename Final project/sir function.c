#include<stdio.h>

struct student{
    int id;
    char name[30];
    float cgpa
};


void print_studentinfo(struct student first_student){

    printf("%d\n",first_student.id);
    puts(first_student.name);
    printf("%f\n",first_student.cgpa);
    printf("\n");
}


int main(){
    struct student students[3] = {{1,"raihan",3},{2,"himel",4},{3,"rasib",2}};

    print_studentinfo(students[0]);
    print_studentinfo(students[1]);
    print_studentinfo(students[2]);

    //

  //  print_studentinfo(students[1]);

    return 0;
}
