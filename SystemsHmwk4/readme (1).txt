PA4.c -- Linda Puzey and Elizabeth Kirschner

Readme

Summary of Program:
This program is used to simulate customers arriving at a bank and standing in line in front of one of the tellers. People arrive at random intervals. Each person waits in his/her selected line until reaching the head of that line. When a person reaches the head of his line, the teller provides services for a random amount of time. After the service is completed, the person leaves the bank. The purpose of the simulation is to measure the average amount of time people spend between arriving at the bank and leaving the bank. 

How to Run this Program:
First you need to open up the PA4.cpp. If you stored it in a folder, use the cd command to get to it. Once you reach the file it’s stored in, you want to type in make in the terminal. This will compile the program. After you want to type in ./qSim (the number of customers) (the number of tellers) (the time you want the simulation to be) and the (average service time). There is an optional 5th input called seed. See indicates a fixed seed for starting the random number generator. This is all you need to run the program.

Problems I Had:
1.The type ‘Event’ must implement the virtual pure value method: this problem came up a lot when we were coding 
2.Undefined reference to vtable: This happened when we took off the destructor because it was also having problem, then we got this new error.
3.Member declaration not found: this happened because we didn’t include one of our header files.
4. Segmentation fault: it’s a common error that most people have when trying to allocate space or running off arrays. This happened when we tried to push events into the event queue, but we managed to fix it.
5.Expected class name before { token: We had like 10 of these errors going on at once. At first we thought it was because we didn’t have enough include statements, but then we found out it was because we had too many.


Sources I used:
-https://stackoverflow.com/

We used stackoverflow to get random help with many errors that we had problems with, like the ones that were stated above.

-https://www.youtube.com/user/thenewboston

This youtube channel gave great tutorials for everything we needed to to for C++. Whether it was using destructors or working with inheritance, it was all there.

-Linda’s dad

Linda’s dad helped us to get started on a lot of the code by giving us ideas of how we can start.

Results:
We got some good results.

