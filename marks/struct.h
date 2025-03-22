struct Subject
{
     char name[20][20];
     double mark[20];
     int coef[20];
};
struct Student
{
     char name[20];
     double total;
     int coefs;
     double validation;
     struct Subject sub;
};