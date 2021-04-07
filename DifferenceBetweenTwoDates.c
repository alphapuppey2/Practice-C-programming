#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct date{
	int days;
	int month;
	int year;
	
}datetype;

//global Varaible;
datetype firstdate;
datetype seconddate;

//function prototypes
void input(datetype* date);
int diff_days();

int main(void){
	
	int days;
	input(&firstdate);
	input(&seconddate);
	
	days = diff_days();
	
	printf("assume that all month has 30 days\n");
	printf("%d days between month",days);
	
	return 0;
}
void input(datetype* date){
	printf(" Month 1-12: ");
	scanf("%d",&date->month);
	printf("Enter the day: ");
	scanf("%d", &date->days);
	printf("Enter the year: ");
	scanf("%d",&date->year);
}
int diff_days(){
	//first date must be smaller than the second Date
	// or it will cause a negative days
	datetype alldays; //return varaible
	
	int year,month,days;
	
	year = seconddate.year - firstdate.year;
	month = ((year*12)-firstdate.month) + seconddate.month; 
	days = ((month * 30) - firstdate.days) + seconddate.days;

	return days;
}
