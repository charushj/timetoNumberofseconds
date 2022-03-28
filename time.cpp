#include <iostream>
#include <iomanip>
using namespace std;
class Time 
{
    private:
    int seconds;
    int hh,mm,ss;
    public:
    void getTime(void);
    void convertintoseconds(void);
    void displayTime(void);
};
void Time:: getTime(void)
{
    cout<< "Enter time:" << endl;
    cout<<"Hours?  "; cin >>hh;
    cout << "Minutes? "; cin >>mm;

    cout <<" Seconds ? "; cin >>ss;
}
void Time::convertintoseconds(void)

{
    seconds= hh*3600 + mm*60 +ss;
}
void Time::displayTime(void)
{
    cout<< "the time is = "<< setw(2) << setfill('0') << hh <<":"
                           << setw(2) << setfill('0') << mm << ":"
                           << setw(2) << setfill('0') << ss << endl;
    cout << "time in total seconds: " << seconds;
}
 
int main()
{
    Time T; //creating objects
     
    T.getTime();
    T.convertintoseconds();
    T.displayTime();
     
    return 0;
}

 