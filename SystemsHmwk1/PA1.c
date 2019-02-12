/**PA1.c -- Linda Puzey*/
#include <stdio.h>

/**function prototypes*/
int printMonthName(int year, int month);

int printMonth(int year,int month, int day);

int printCalendar(int year, int startDay);

int numDays(int year, int month);

int dayCalc(int year);

/**prints Calendar line and the enter year line. Calls on dayCalc() and printCalendar()*/
int main(){
	
	printf("MONTHLY CALENDAR\n");

	int year; //Year is inputted by the user
	int startDay; //Calculated from dayCalc() states starting day the week, where 1==Sunday..

	printf("Please enter year for this calendar:-");
	scanf("%d", &year);
	
	startDay = dayCalc(year);
/*Testing the year to see if it is below or equal to zero
If it true, it will print a line
If it is false, it will call printCalendar() to print your calendar*/
	if(year <= 0){
		printf("Please print a positive year\n");
	}
	else{
		printCalendar(year,startDay);
	}
	
	return 0; 
}

/**loops through year calls printMonth() twelve times
*@param year,Equal to the month, where 1==January.
*@param starDay, Starting day of the week where 1==Sunday*/
int printCalendar(int year, int startDay){
	
	printf("***  CALENDAR for %d  ***\n",year);

	int i; //Equal to the month, where 1==January
	int day; //Starting day of the week where 1== Sunday 

	day = startDay;

	for(i=1;i<=12;i++) // i>=1 && i<=12, increases the month until it is equal to 12
	{
		day = printMonth(year, i, day);
	}
	return 0;

}


/**returns number of the day on which the next month starts and calls printMonthName()
*@param year, the year that is inputted by the user.
*@param month, Equal to the month, where 1==January
*@param day, Equal to the day of the week where 1==Sunday*/
int printMonth(int year,int month, int day){

	printMonthName(year, month);

	printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
	

	int i;//Represents the indinidual day of a month

	for(i=1;i<day;i++) //i>=1 && i<day, prints a tab while i is less than the day
	{
		printf("\t");
	}

/*The if statement is testing to see if the day is equal to 7
If this is true, it will print the day and indent it
If this is false, it will print the next day without indenting*/
	for(i=1; i < numDays(year,month)+1;i++)//i>=1 && i<numDays(year,month)+1,This loop increases i while i is less than the number of days in the month
	{
		if(day == 7)
			{
			printf("%d \n",i);
			day=1;
			}
		else
		{
			printf("%d\t",i);
			day++;
		}
	}
	return day;
}

/**prints out the line identifying the month and year
*@param year, the year that is inputted by the user.
*@param month, Equal to the month, where 1==January*/
int printMonthName(int year, int month){
	printf("\n");
	switch(month){
		case 1: printf("January %d \n\n",year);  break;
		case 2: printf("\nFebuary %d \n\n",year);  break;
		case 3: printf("\nMarch %d \n\n", year);  break;
		case 4: printf("\nApril %d \n\n", year);  break;
		case 5: printf("\nMay %d \n\n", year);  break;
		case 6: printf("\nJune %d \n\n", year);  break;
		case 7: printf("\nJuly %d \n\n", year);  break;
		case 8: printf("\nAugust %d \n\n", year);  break;
		case 9: printf("\nSeptember %d \n\n", year);  break;
		case 10: printf("\nOctober %d \n\n", year);  break;
		case 11: printf("\nNovember %d \n\n", year);  break;
		case 12: printf("\nDecember %d \n\n", year);  break;  
	}

	return 0;

}

/**produces the number of days for the coresponding month
*@param year, the year that is inputted by the user.
*@param month, Equal to the month, where 1==January */
int numDays(int year,int month){

	int febDays; //Changes depending of if the year is a leap year or not
	
/*This is testing the year to see if it is a leap year.
If the statement is true, it sets Febuary's days equal to 29.
If the statement is false, it sets Febuary's days equal to 28*/
	if((!(year % 4)&&(year % 100)) || !(year % 400)){
			febDays = 29;}
		else {febDays = 28; }
	

	switch(month){
		case 1: return 31; break;
		case 2: return febDays; break;
		case 3: return 31; break;
		case 4: return 30; break;
		case 5: return 31; break;
		case 6: return 30; break;
		case 7: return 31; break;
		case 8: return 31; break;
		case 9: return 30; break;
		case 10: return 31; break;
		case 11: return 30; break;
		case 12: return 31; break; 
	}
	return 0; 
}

/**calculates the starting day of the week for January
@param year,the year that is inputted by the user. */
int dayCalc(int year){

	int firstPart; //Produces the first two digits of a year
	int lastPart;//Produces the last two digits of a year
	int day; //Is the starting day, which is always equal to 1
	int month;//Is the starting month, which is always equal to 11 for January

	int startDay;//What is returned from this function, it is what day of the week January starts on for that year. Where 1==Sunday

	firstPart = year/100;
	lastPart = year % 100;
	day =1;
	month = 11;

/*Testing to see if the year is a leap year.
If the statement is true, it will do the special leap year formula to produce the starting day.
If the statement is false, it will do the normal formula to produce the starting day*/ 
	if((!(year % 4)&&(year % 100)) || !(year % 400)){
		startDay= ((day + (2.6*month -0.2) + ((100+lastPart)-1) + 
	(((lastPart+100)-1)/4) +((firstPart -1)/4)-2*(firstPart-1)));
		
	startDay = (startDay % 7)+1;
		}
	else{
		startDay = ((day + (2.6*month -0.2) + lastPart + 		
	((lastPart-1)/4) +(firstPart/4)-2*firstPart));
	
	startDay = startDay % 7;
	}		

	return startDay;

	
}


