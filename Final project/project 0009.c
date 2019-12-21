#include <stdio.h>
#include <string.h>
void main()
{
    float students_course_gradepoint[10][10];
    float students_cgpa[10];
    float max_cgpa[10];
    int course_credit[10];
    int course;
    int student;
    int total_credit=0;
    int id[10];
    char students_name[10][20];

    //students number...
    for(student=0;student<10;student++){
        //scan students name.....
        printf("enter name of student:%d\n",student+1);
        scanf("%s",students_name[student]);

        printf("enter grade point student:%d\n",student+1);

    //student course information....
        for(course=0;course<10;course++){
            scanf("%f",&students_course_gradepoint[student][course]);
        }
    }

    //scan course credit.....
    printf("enter course credit:");
    for(course=0;course<10;course++){
        scanf("%d",&course_credit[course]);
        total_credit=total_credit+course_credit[course];
    }

    //student grade point calculate......
    for(student=0;student<10;student++){
        printf("Grade point student:%d\n",student+1);

        students_cgpa[student]=0;
        for(course=0;course<10;course++){
            students_cgpa[student]= students_cgpa[student]+ students_course_gradepoint[student][course]*course_credit[course];
            }
        //print student name......
        printf("Student name is:%s\n",students_name[student]);
        //print student cgpa......
        students_cgpa[student]= students_cgpa[student]/total_credit;
        printf("cgpa :%f\n",students_cgpa[student]);
    }
    //find maximum grade .....

    max_cgpa[0]=students_cgpa[0];
    id[0]=0;
    for(student=1;student<10;student++){

        if(max_cgpa[0]<students_cgpa[student]){
            max_cgpa[0]=students_cgpa[student];
            id[0]=student;
        }
    }
    //first maximum cgpa and student........

    printf("student id=%d\n",id[0]+1);
    printf("1st maximum cgpa: %f\n",max_cgpa[0]);

    //delete first maximum ......
    for(student=id[0];student<10;student++){
    students_cgpa[student]=students_cgpa[student+1];
    }
    //take 2nd max = cgpa student cgpa[0]..........
    max_cgpa[1]=students_cgpa[0];
    id[1]=0;
    //use for loop calculate second maximum......
    for (student=1;student<9;student++){
        if(max_cgpa[1]<students_cgpa[student]){
            max_cgpa[1]=students_cgpa[student];
            id[1]=student;
        }
    }
    printf("student id=%d\n",id[1]+1);
    printf("2nd maximum cgpa: %f\n",max_cgpa[1]);

    //delete second maximum.....
    for(student=id[1];student<10;student++){
        students_cgpa[student]=students_cgpa[student+1];
    }
   //take 3rd max=student cgpa[0].....
   max_cgpa[2]=students_cgpa[0];
   id[2]=0;
   //use for loop calculate 3rd maximum.....
   for(student=1;student<8;student++){
    if(max_cgpa[2]<students_cgpa[student]){
        max_cgpa[2]=students_cgpa[student];
        id[2]=student;
      }
   }
   printf("student id=%d\n",id[2]+1);
   printf("3rd maximum cgpa = %f\n",max_cgpa[2]);

   //delete 3rd maximum..........
   for(student=id[2];student<10;student++){
    students_cgpa[student]=students_cgpa[student+1];
   }
    //take 3rd max=student cgpa[0].....
   max_cgpa[3]=students_cgpa[0];
   id[3]=0;

    //use for loop calculate 3rd maximum.....
   for(student=1;student<8;student++){
    if(max_cgpa[3]<students_cgpa[student]){
        max_cgpa[3]=students_cgpa[student];
        id[3]=student;
      }
   }
    printf("student id=%d\n",id[3]+1);
    printf("4th maximum cgpa: %f\n",max_cgpa[3]);
    //delete 4th maximum.....
    for(student=id[3];student<10;student++){
        students_cgpa[student]=students_cgpa[student+1];
    }
   //take 5th max=student cgpa[0].....
   max_cgpa[4]=students_cgpa[0];
   id[4]=0;
   //use for loop calculate 5th maximum.....
   for(student=1;student<6;student++){
    if(max_cgpa[4]<students_cgpa[student]){
        max_cgpa[4]=students_cgpa[student];
        id[4]=student;
      }
   }
   printf("student id=%d\n",id[4]+1);
   printf("5th maximum cgpa = %f\n",max_cgpa[4]);


    //delete 5th maximum.....
    for(student=id[4];student<10;student++){
        students_cgpa[student]=students_cgpa[student+1];
    }
   //take 6th max=student cgpa[0].....
   max_cgpa[5]=students_cgpa[0];
   id[5]=0;
   //use for loop calculate 6th maximum.....
   for(student=1;student<5;student++){
    if(max_cgpa[5]<students_cgpa[student]){
        max_cgpa[5]=students_cgpa[student];
        id[5]=student;
      }
   }
   printf("student id=%d\n",id[5]+1);
   printf("6th maximum cgpa = %f\n",max_cgpa[5]);


    //delete 6th maximum.....
    for(student=id[5];student<10;student++){
        students_cgpa[student]=students_cgpa[student+1];
    }
   //take 7th max=student cgpa[0].....
   max_cgpa[6]=students_cgpa[0];
   id[6]=0;
   //use for loop calculate 6th maximum.....
   for(student=1;student<4;student++){
    if(max_cgpa[6]<students_cgpa[student]){
        max_cgpa[6]=students_cgpa[student];
        id[6]=student;
      }
   }
   printf("student id=%d\n",id[6]+1);
   printf("7th maximum cgpa = %f\n",max_cgpa[6]);


    //delete 7th maximum.....
    for(student=id[6];student<10;student++){
        students_cgpa[student]=students_cgpa[student+1];
    }
   //take 8th max=student cgpa[0].....
   max_cgpa[7]=students_cgpa[0];
   id[7]=0;
   //use for loop calculate 8th maximum.....
   for(student=1;student<3;student++){
    if(max_cgpa[7]<students_cgpa[student]){
        max_cgpa[7]=students_cgpa[student];
        id[7]=student;
      }
   }
   printf("student id=%d\n",id[7]+1);
   printf("8th maximum cgpa = %f\n",max_cgpa[7]);

    //delete 8th maximum.....
    for(student=id[7];student<10;student++){
        students_cgpa[student]=students_cgpa[student+1];
    }
   //take 9th max=student cgpa[0].....
   max_cgpa[8]=students_cgpa[0];
   id[8]=0;
   //use for loop calculate 9th maximum.....
   for(student=1;student<2;student++){
    if(max_cgpa[8]<students_cgpa[student]){
        max_cgpa[8]=students_cgpa[student];
        id[8]=student;
      }
   }
   printf("student id=%d\n",id[8]+1);
   printf("9th maximum cgpa = %f\n",max_cgpa[8]);


     //delete 9th maximum.....
    for(student=id[9];student<10;student++){
        students_cgpa[student]=students_cgpa[student+1];
    }
   //take 10th max=student cgpa[0].....
   max_cgpa[9]=students_cgpa[0];
   id[9]=0;
   //use for loop calculate 10th maximum.....
   for(student=1;student<1;student++){
    if(max_cgpa[9]<students_cgpa[student]){
        max_cgpa[9]=students_cgpa[student];
        id[9]=student;
      }
   }
   printf("student id=%d\n",id[9]+1);
   printf("10th maximum cgpa = %f\n",max_cgpa[9]);
}

