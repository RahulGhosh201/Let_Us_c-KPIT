// Create a structure called student that can contain data given below:
// Roll number, Name, Department, Course, Year of joining
// Assume that there are not more than 450 students in the college.
// (1) Write a function to print names of all students who joined in a
// particular year.
// (2) Write a function to print the data of a student whose roll
// number is received by the function.
#include <stdio.h>

struct student
{
    int rno;
    char name[10];
    char dept[10];
    char course[10];
    int yOfJoining;
};

// function to print names of student who joined in a particular year
void printStudentNameByYear(struct student students[], int n, int year)
{
    printf("Name of the students joined in year %d are:\n", year);
    for (int i = 0; i < n; i++)
    {
        if (students[i].yOfJoining == year)
        {
            printf("%s\n", students[i].name);
        }
    }
    printf("\n");
}

// function to print the details of a student by getting their roll number
void printStudentByRoll(struct student students[], int n, int roll)
{
    printf("Student details of roll number %d\n", roll);
    for (int i = 0; i < n; i++)
    {
        if (students[i].rno == roll)
        {
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].dept);
            printf("Course: %s\n", students[i].course);
            printf("Year of joining: %d\n", students[i].yOfJoining);
            return;
        }
    }
    printf("Data not found\n");
}

int main()
{
    struct student students[450];
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &students[i].rno);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Department: ");
        scanf(" %[^\n]", students[i].dept);
        printf("Course: ");
        scanf(" %[^\n]", students[i].course);
        printf("Year of joining: ");
        scanf("%d", &students[i].yOfJoining);
    }

    printf("Enter the year of joining of a particular student: ");
    int year = 0;
    scanf("%d", &year);
    printStudentNameByYear(students, n, year);

    printf("Enter a specific student's roll number: ");
    int roll = 0;
    scanf("%d", &roll);
    printStudentByRoll(students, n, roll);

    return 0;
}