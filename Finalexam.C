/*
NAME:STEPHEN GITHINJI
REG No:CT101/G/26434/25
DESCRIPTION:ELIGIBILITY FOR FINAL EXAM
*/
#include <stdio.h>

int main() {
    float attendance_percentange,averagemarks;
    
    printf("Enter the attendance percentange of the student:");
    scanf("%f", &attendance_percentange);
    
    printf("Enter the average marks of the student:");
    scanf("%f",&averagemarks);
    
    if(attendance_percentange >= 75 && averagemarks >= 40){
        printf("eligible for final exam");
        
    }else{
        printf("not eligible for final exam");
    }
    return 0;
}