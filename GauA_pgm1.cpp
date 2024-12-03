// Student: Anya Gau
// Class: CS 2010 at 8:30am MWF
// Project 1 (pgm1), due 9/16/24
// Program: Using the input of a movie name, number of adult and child tickets sold,
// the program can tell you how much gross and net profit the movie theater made and how much was paid to the distrubuter.
// Process: Through the input of the movie name, number of adult tickets sold, and child tickets sold, the program will multiply the number
// of tickets sold by the respective cost for the gross profit, and multiply that number by .2 for the net profit, and subtract the net from
// the gross for the distributer's profit.
// Results: Once you input the movie name, number of adult tickets sold, and number of kid tickets sold (respectively), the program will 
// calculate the numbers and output a small block of text detailing the movie name, number of adult/kid tickets sold, the gross profit for the
// theater from those tickets, the net profit for the theater, and what the theater will pay to the distrubuter.

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    string movieTitle;
    double adultTickets;
    int numAdults;
    double kidTickets = 0.0;
    int numKids;
    double grossProfit;
    double movieDistributer;
    const double percent_profit = .20;


    cin >> movieTitle;
    cin >> numAdults;
    cin >> numKids;


    kidTickets = numKids * 7.75;
    adultTickets = numAdults * 11.50;
    grossProfit = kidTickets + adultTickets;
    movieDistributer = grossProfit * percent_profit;   

    cout << fixed << setprecision(2);
    cout << "Enter movie title: " << movieTitle << endl;
    cout << "How many adult tickets were sold: " << numAdults << endl;
    cout << "How many children's tickets were sold: " << numKids << endl;
    cout << "Gross Ticket Tales for " << movieTitle << ": $" << grossProfit << endl;
    cout << "Theater Net Profit: $" << grossProfit - movieDistributer << endl;
    cout << "Amount Paid to Distributor: $" << movieDistributer << endl;

    return 0;
}





