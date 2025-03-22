#include "funcs.h"

int getStudentSize(int nStudent)
{
     printf("Enter number of students: ");
     cin >> nStudent;
     return nStudent;
}

int getSubjectSize(int nSubject)
{
     printf("Enter number of subjects: ");
     cin >> nSubject;
     return nSubject;
}

void getSubStdNames(int nSubject, int nStudent)
{
     struct Student students[nStudent];
     char tempNameSub[20];
     int i, j;
     printf("\n");
     // get subjects' names
     for (j = 0; j < nSubject; j++)
     {
          printf("Enter subject name %d: ", j + 1);
          fflush(stdin);
          cin >> tempNameSub;
          for (i = 0; i < nStudent; i++)
          {
               strcpy(students[i].sub.name[j], tempNameSub);
          }
     }
     printf("\n");
     // get students' names
     for (i = 0; i < nStudent; i++)
     {
          students[i].total = 0;
          students[i].coefs = 0;
          printf("Enter student name %d: ", i + 1);
          fflush(stdin);
          cin >> students[i].name;

          for (j = 0; j < nSubject; j++)
          {
               printf("Enter %s mark: ", students[i].sub.name[j]);
               fflush(stdin);
               cin >> students[i].sub.mark[j];

               printf("Enter %s coef: ", students[i].sub.name[j]);
               fflush(stdin);
               cin >> students[i].sub.coef[j];

               students[i].total += students[i].sub.mark[j];
               students[i].validation = (students[i].total) / (nSubject);

               students[i].coefs += students[i].sub.coef[j];
          }
     }

     // display
     for (i = 0; i < nStudent; i++)
     {
          printf("\n____________________________________\n");
          printf("%s\n", students[i].name);
          for (j = 0; j < nSubject; j++)
          {
               double mark = students[i].sub.mark[j];
               int coef = students[i].sub.coef[j];
               printf("%s : %.2lf \t|\t Coef: %d\n", students[i].sub.name[j], mark, coef);
          }
          printf("___________________________________\n");
          printf("|\tTotal coefs: %d\n", students[i].coefs);
          printf("|\tTotal marks: %.2lf\n", students[i].total);
          printf("|\tFinal mark: %.2lf\n", students[i].validation);
          if ((students[i].validation) >= 10)
               valid();
          else
               invalid();
          printf("____________________________________\n");
     }
}

void valid()
{
     printf("|\t*You passed, Congratulations!*\n");
}
void invalid()
{
     printf("|\t*You didn't pass, have a good luck next time!*\n");
}