/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
//Written by Will James
int main()
{
   // Initialize random number generator
   srandom(time(NULL));

   // Random value between 0.99 that may be useful
   int value = random() % 100;

float BirthDate = 0;

   // Prompt user for birth year
   float year = 0;
   while ((year < 1900) || (year > 2025))
   {
      cout << "Enter the year you were born [1900..2025]: ";
      cin >> year;
   }
   
    // Prompt user for birth month
   string month = "";
   while (month != "Jan" && month != "Feb" && month != "Mar" && 
          month != "Apr" && month != "May" && month != "Jun" && 
          month != "Jul" && month != "Aug" && month != "Sep" && 
          month != "Oct" && month != "Nov" && month != "Dec")
   {
      cout << "Enter the month you were born [Jan..Dec]: ";
      cin >> month;
   }
   
   // Prompt user for birth day
   float day = 0;
   while ((day < 1) || (day > 31))
   {
      cout << "Enter the day you were born [1..31]: ";
      cin >> day;
   }
   
// Prompt user for karma
    int answer = 0;
    cout << "How many people have you said hello to today? ";
    cin >> answer;

    // Silly karma calculation
    int karma = 0;
    if (answer <= 0) {
        karma = 0;
    } else if (answer == 42) {
        karma = 100;
    } else {
        karma = (answer / 2) + (random() % 5);
    }
    
    //Calculate astrological sign
    string sign = "";
    if ((month == "Mar" && day >= 21) || (month == "Apr" && day <= 20))
      sign = "Aries";
   if ((month == "Apr" && day >= 21) || (month == "May" && day <= 21))
      sign = "Taurus";
   if ((month == "May" && day >= 22) || (month == "Jun" && day <= 21))
      sign = "Gemini";
   if ((month == "Jun" && day >= 22) || (month == "Jul" && day <= 22))
      sign = "Cancer";
   if ((month == "Jul" && day >= 23) || (month == "Aug" && day <= 22))
      sign = "Leo";
   if ((month == "Aug" && day >= 23) || (month == "Sep" && day <= 23))
      sign = "Virgo";
   if ((month == "Sep" && day >= 24) || (month == "Oct" && day <= 23))
      sign = "Libra";
   if ((month == "Oct" && day >= 24) || (month == "Nov" && day <= 22))
      sign = "Scorpio";
   if ((month == "Nov" && day >= 23) || (month == "Dec" && day <= 21))
      sign = "Sagittarius";
   if ((month == "Dec" && day >= 22) || (month == "Jan" && day <= 20))
      sign = "Capricorn";
   if ((month == "Jan" && day >= 21) || (month == "Feb" && day <= 19))
      sign = "Aquarius";
   if ((month == "Feb" && day >= 20) || (month == "Mar" && day <= 20))
      sign = "Pisces";
    
    
    //Predict Romance
    string Romance = "";
   int choice = (karma * 17) % 5;
   string message = "";
   switch(choice)
   {
   case 0:
      message = "Maybe your date would like to see a romantic comedy?";
      break;
   case 1:
      message = "I think it is singles night at the local pub.";
      break;
   case 2:
      message = "You should sit by the fire and read a good romance novel.";
      break;
   case 3:
      message = "Searching online for the perfect date seldom works.";
      break;
   case 4:
      message = "Love is not in the air tonight, time to play video games.";
      break;
   default:
      message = "Romance prediction is impossible.";https://www.onlinegdb.com/edit/hRtYu-dNS#tab-stdin
      break;
   }
   
   //Find money prediction
   float Money = 0;
   string request = "";
{
   int choice = (2025 - year) / 10;
   switch(choice)
   {
   case 0:
      request = "Go ahead and ask your parents for their spare change";
      break;
   case 1:
      request = "This is a good time to your parents for a bigger allowance";
      break;
   case 2:
      request = "You can save more money by buying less beer";
      break;
   case 3:
      request = "Try to save a little extra for a down payment on a house";
      break;
   case 4:
      request = "Yikes, your children's tuition bills are due soon";
      break;
   default:
      request = "Money prediction is impossible ";
      break;
   }
}
    
    //Find job prediction
    string Job = "";
    if ((day < 15) && (karma > 5))
      Job = "Your boss looks generous today, time to ask for a raise.";
   else if ((day > 15) && (karma < 5))
      Job = "Prepare for bad news, your company profits are down.";
   else if ((day == 15) && (karma == 5))
      Job = "Bad news, your company is declaring bankruptcy.";
   else if (karma > day)
      Job = "Great news, your company just went public!";
   else if (karma <= day)
      Job = "It looks like a chance for some overtime.";
   else
      Job = "Money prediction is impossible.";
    
    // Find family prediction
    string Fam = "";
    {
   int familia = (2025 - year) / 10;
   switch(familia)
   {
   case 0:
      Fam = "Your parents are madly in love. Expect a sibling soon";
      break;
   case 1:
      Fam = "Your parents are very busy with work, and will divorce";
      break;
   case 2:
      Fam = "You should call your parents more often";
      break;
   case 3:
      Fam = "Better pay your parents a visit soon, they miss you";
      break;
   case 4:
      Fam = "Time to move your parents to a retirement home";
      break;
   default:
      Fam = "May your parents rest in peace";
      break;
   }
}
    
    //Health prediction
    string Health = "";
    if ((year >= 2000) && (karma >= 5))
      Health = "You are perfectly healthy!";
   else if ((year >= 2000) && (karma < 5))
      Health = "Better get a check up soon.";
   else if ((year < 2000) && (year >= 1975) && (karma >= 5))
      Health = "All is well, besides your achy joints...";
   else if ((year < 2000) && (year >= 1975) && (karma < 5))
      Health = "Shouldn't have drank so much in college. Expect bad news from doctor.";
   else if ((year < 1975) && (karma >= 5))
      Health = "Better start getting regular check ups, but all is good!";
   else if ((year < 1975) && (karma < 5))
      Health = "Visit doctor ASAP. Expect the worst...";
   else 
      Health = "Health prediction is impossible";
    
    //Print birthday
    cout << "  " << endl;
    cout << "Your birthday is " << month << " " << day << ", " << year << endl;
    cout << "Bet you had no idea!\n" << endl;
    
    //Print horoscope
    cout << "Based on your information, here is your horoscope: " << endl;
    cout << "Your karma is: " << karma << ". " << endl;
    cout << "Your Zodiac sign is: " << sign << ". " << endl;
    cout << "Your love prediction says: " << message << endl;
    cout << "If you're in need of money, should you ask your parents?: Due to your age, " << request << ". " << endl;
    cout << "Here is a prediction for your job: " << Job << endl;
    cout << "Your family prediction states: " << Fam << ". " << endl;
    cout << "Health analysis states: " << Health << "\n" << endl;
    
    //End text
    cout << "Hope you enjoyed learning your horoscope! " << endl;
    cout << "Please remember, our horoscope calculating software is 100% accurate! " << endl;
    cout << "Believe everything it says. Come again! " << endl;

    return 0;
}
