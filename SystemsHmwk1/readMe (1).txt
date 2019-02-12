PA1.c -- Linda Puzey

Readme

Summary of Program:
This program is used to give year a 12 month calendar for a given year. The program starts with the include statement, <stdio.h>, in order to use print and scan functions. The next part I put all of my function prototypes so that they will work in the program. After is my main() function. The main() function is the first function to run and it will print two lines. One that tells you that this is a calendar program, and the other that tells you to input a year. It will then send the input to other functions to use. The next function is the printCalendar() function, which simply loops through the year and it will call the function printMonth() 12 times. The function printMonth() will print all the things needed for one month, including the days of the week, all the days themselves, and the tabs and indentations for the month. It also returns the day in which the next month starts. Next, is the printMonthName() function. This function use a switch statement to print the corresponding month that is inputted. After is the function, numDays(), which is a helper function I made, to calculate the number of days in each month. numDays is used by the function printMonth(). Lastly, I made another helper function called dayCalc(), which calculates the day the starting day of the week in January. dayCalc() is used by the main() function to produce the starting day for the printCalendar() function. All these functions work together to make an awesome calendar.

How to Run this Program:
First you need to open up the PA1.c file and the terminal. If you put the PA1.c file in any folder put the command in the terminal: cd foldername. Once you have done that, to run the program put the command: gcc -Wall -o PA1 PA1.c into the terminal. That will compile the program and to finally run it put in one last command: ./test. The program will then say MONTHLY CALENDAR and Please enter year for this calendar:-. Then you can type in any year and hit enter. This will give you the calendar for that year.

Problems I Had:
1.Indentation Problem: while printing the numbers of the days for each month, I couldn't find a way to get the days to indent at the end of the week. To fix this I made an if statement in my for loop, so when the day is equal to 7(saturday) then it will print and indentation.
2. NumDays Problem: an earlier problem I had was having the printMonthName function produce the month name and the number of days in the month. This didn't work because I had no way to access the number of days of the month for my printMonth function. To fix this problem, what I did was make a helper function called numDays, which would produce the numbers of days of the month for the printMonth function.
3. Mod Problem: The start day algorithm I was using required a mod 7 at the end of the formula. The algorithm used decimals in the problem and apparently you can't use decimals while modding so the compiler complained. To fix this, I separated the mod 7 out of the algorithm and did it on the number starDay variable later.
4. Negative numbers problem: A simpler problem was I realized was that my print function for when people inputted a negative year was not working. To fix this I put the printCalendar function as an else statement.
5. Startday problem 1: My first problem with startDay was I realized that I need to slightly different algorithms for a regular year and a leap year. I realized that the leap year algorithm was one day off, so what I did was just add one to that if statement only.
6. Startday problem 2: One of my later problems, was I realized that my start day was randomized even though I had tested it before and it worked fine. With the help of my friend, Andrew, we realized that the my algorithm was working fine. But then we realized because I had my dayCalc function before the year was inputted in my main function, it was causing the year to be randomized. I fixed it by putting the dayCalc function after the year was inputted.

Sources I used:
https://en.wikipedia.org/wiki/Determination_of_the_day_of_the_week

I used this source to get an algorithm to determine the starting day of the week in January. The algorithm is called disparate variation. It starts with adding the day of the month you are looking for, in my case, it is one for the first of January. Then you will add 2.6*the month(in this case January, so the number 11) minus 0.2. This term gives you the values of months. Next you want to add in the last two digits of the year minus 1. After you want to do the last to digits of the year minus one and then divided by 4. Then you want to add the first two digits of the year divided by 4. After you want to subtract 2 times the first two digits of the year. All of this will be modded by 7. This will give you a number between 1 and 7, which corresponds to a day of the week.

My friend, Andrew

Andrew helped me to fix a lot of math problems that I had and he gave me the idea to use a for loop for the tabs and indentations.

Loop Invariants:
For loop in printCalendar: i>=1 && i<=12, This loop increases the month until it is equal to 12
First for loop in printMonth: i>=1 && i<day, This loop prints a tab while i is less than the day
Second for loop in printMonth:i>=1 && i<numDays(year,month)+1, This loop increases i while i is less than the number of days in the month


