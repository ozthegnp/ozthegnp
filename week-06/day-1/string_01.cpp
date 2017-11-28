#include <iostream>

using namespace std;

// An average Green Fox attendee codes 6 hours daily
// The semester is 17 weeks long
//
// Print how many hours is spent with coding in a semester by an attendee,
// if the attendee only codes on workdays.
//
// Print the percentage of the coding hours in the semester if the average
// work hours weekly is 52

int main()
{
    double coding_hrs_per_day = 6;
    double coding_weeks_per_semester = 17;
    double total_coding_hrs = coding_hrs_per_day * 5 * coding_weeks_per_semester;


    cout << "Total hours of coding per semester: " << total_coding_hrs << endl;
    cout << "Average coding hour percentage: " << 5 * coding_hrs_per_day / 52 * 100 << " %" << endl;

    return 0;
}
