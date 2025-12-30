//AYUSHMAN KUSHWAHA
//10366
//1E

#include <stdio.h>

int main() {
    int n, i;
    float marks[100], total = 0, percentage;
    char grade;
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%f", &marks[i]);
    }
    for(i = 0; i < n; i++) {
        total += marks[i];
    }
    percentage = total / n;
    if(percentage >= 90)
        grade = 'A';
    else if(percentage >= 80)
        grade = 'B';
    else if(percentage >= 70)
        grade = 'C';
    else if(percentage >= 60)
        grade = 'D';
    else if(percentage >= 50)
        grade = 'E';
    else
        grade = 'F';
    printf("\n--- Result ---\n");
    printf("Total Marks: %.2f\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);

    return 0;
}