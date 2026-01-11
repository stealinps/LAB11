#include <iostream>  

using namespace std; 

struct DATE { 

    int month; 

    int day; 

    int year; 

}; 

void increment(DATE& date) { 

    date.day++; 

    if (date.month == 2) { 

        if (((date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0) && date.day > 29) { 

            date.month++; 

            date.day = 1; 

        } 

        else if (!((date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0)&& date.day > 28) { 

            date.month++; 

            date.day = 1; 

        } 

    } 

    if (date.month != 2) { 

        if (date.day > 30 && (date.month == 4 || date.month == 6 || date.month == 9 || date.month == 11)) { 

            date.day = 1; 

            date.month++; 

        } 

        else if (date.day > 31) { 

            date.day = 1; 

            date.month++; 

        } 

    } 

    if (date.month > 12) { 

        date.year++; 

        date.month = 1; 

    } 

} 

int main() { 

      DATE date; 

      cout << "Enter today day:"; 

      cin>>date.day; 

      cout << "\nEnter today month:"; 

      cin>>date.month; 

      cout << "\nEnter today year:"; 

      cin>>date.year; 

      increment(date); 

      cout <<"The next day is " << date.day << "/" << date.month << "/" << date.year << endl; 

     

} 
