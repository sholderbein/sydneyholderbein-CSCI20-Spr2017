// Created By: Sydney Holderbein
// Date: 5/11/17

// This program is a schedule planner that will allow you to add in an event

#include <iostream>
#include <istream>
#include <string>
#include <fstream>
using namespace std;

int i;
int j;


class YourEvent{
    private:
        string eventNameArray[32];                                              // creating an array for each piece of information for the calendar
        string eventLocationArray[32];
        string eventTimeArray[32];                                              // this is a string so I can use semi colons for the time
        int eventDayArray[32];
    
    public:
        void SetEventName(string name);                                         // set functions
        void SetEventLocation(string location);
        void SetEventTime(string times);
        void SetEventDay(int day);
        
        int GetEventDay();                                                      // get functions
        string GetEventTime();
        string GetEventName();
        string GetEventLocation();
        
};

    void YourEvent::SetEventDay(int day){                                       // setting the user input into its own arrray
        eventDayArray[i] = day;
    }
    
    void YourEvent::SetEventName(string name){
        eventNameArray[i] = name;
    }
    
    void YourEvent::SetEventLocation(string location){
        eventLocationArray[i] = location;
    }
    
    void YourEvent::SetEventTime (string times){
        eventTimeArray[i] = times;
    }

    int YourEvent::GetEventDay(){                                               // displaying the array for the events info
        return eventDayArray[i];
    }
    
    string YourEvent::GetEventName(){
        return eventNameArray[i];
    }
    
    string YourEvent::GetEventLocation(){
        return eventLocationArray[i];
    }
    
    string YourEvent::GetEventTime(){
        return eventTimeArray[i];
    }


int main(){
    
    ofstream ScheduleOutput;                                                    // for file input and output
    char userChoice = 'Y';                                                      // "Would you like to enter another event Y/N"
    int day;                                                            
    string times;                                                               // variables used for user input
    string location;                                                            // will be set into an array
    string name;
    string userMonth;
    YourEvent first;                                                            // creating an object for the class
    
    cout << "What month would you like to enter? " << endl;                     // user picks month
        cin >> userMonth;
        
    cout << "Lets enter your schedule for " << userMonth << "." << endl;
    i=1;                                                                        // set i so that the while loop runs at least once
    
        while (i>0){                                                            // making sure they do not pick a negative day
        cout << endl;
        cout << "What day do you want to schedule? ";
        cin  >> i;                                                              // taking input fot the date, use i to set into array
            while (i<0||i>31){                                                  // testing that it was a correct date
                cout <<  "enter a valid number, or enter 0 to exit.";
                cin  >> i;
                }
            
        if (i>0){                                                               // user enters date
        day = i;
        
        cout << "What is the name of your event? ";                             // user enters name of event - must be only one word
        cin  >> name;
        
        cout << "What time is your " << name << " at? ";                        // time in the form of 5:00pm
        cin  >> times;  
        
        cout << "What street is your " << name << " located on? ";              // street being one word only
        cin  >> location;
        

    
        first.SetEventDay(day);                                                 // run the functions to set the information into its own array
        first.SetEventName(name);
        first.SetEventLocation(location);
        first.SetEventTime(times);

        
        first.GetEventDay();                                                    // returns the event information
        first.GetEventName();
        first.GetEventLocation();
        first.GetEventTime();
        
            
        
    cout << "Would you like to enter another event? (Y/N) . Or 'E' to exit.";   // if N the use can check their schedule
    
    cin  >> userChoice;
    cout << endl;
    
    switch (userChoice){
        case 'Y':
        i=1;
        break;
        
        case 'N':
        i=100;
        break;
        
        case 'E':
        cout << "Happy to help!" << endl;
        return 0;
    }
            
        
        
            
    
    if (i==100){
    
    cout<< "What day would you like to check?" << endl;
    cin >> i;                                                                   // i is used to output all the event info in the separate arrays
        
        
            ScheduleOutput.open("yourday.html");                                // html ouput
            ScheduleOutput << "<!DOCTYPE html>\n";
            ScheduleOutput << "<html>\n";
            ScheduleOutput << "<title>Your Schedule Event </title>\n";
            ScheduleOutput << "</head>\n";
            ScheduleOutput << "<body>\n";
            ScheduleOutput << "<h1> Your event for " << userMonth << "</h1>\n";
            ScheduleOutput << "<h2> Event Date: " << first.GetEventDay() << "</h2>\n";
            ScheduleOutput << "<h2> Event Name: " << first.GetEventName() << "</h2>\n";
            ScheduleOutput << "<h2> Event Location: " << first.GetEventLocation() << "</h2>\n";
            ScheduleOutput << "<h2> Event Time: " << first.GetEventTime() << "</h2>\n";
            ScheduleOutput.close();
            
            cout << "Check your schedule on the html page.";
            cout << endl << endl;
            
    }
    }
    }
}

