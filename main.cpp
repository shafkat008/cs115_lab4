// (Do Not Remove): Write the code from scratch
// by following along with the video demonstrations

// Name:Shafkat Alam
// Student Number:200443237
// Date:21/09/2021

#include "Date.h"


//main function
int main() {
  
  int tempMonth1, tempDay1, tempYear1;
  int tempMonth2, tempDay2, tempYear2;
  

//   instantiate one date object (date1) using the default constructor
 Date date1;

 cout << "Testing the default constructor and the getters" << endl << "The initalized date is (M-D-Y): ";

// use the getters to display the month, day, and year of date1 (should print the default values)
 cout << date1.getMonth() << "-" << date1.getDay() << "-" << date1.getYear();

 cout << endl << endl;
// read keyboard input from the user for a month, day and year

cout << "Please enter a date:(Month Day Year): " ;

cin >> tempMonth1 >> tempDay1 >> tempYear1;
 
// use the setters to set the values of date1 to the values that came from the user
 
date1.setMonth(tempMonth1);
date1.setDay(tempDay1);
date1.setYear(tempYear1);


// read keyboard input from the user for a second date
 

 cout << "Please enter a second date:(Month Day Year): " ;
 
 cin >> tempMonth2 >> tempDay2 >> tempYear2;

// use the constructor with three arguments to instantiate date2 to the second date input from the user

Date date2(tempMonth2,tempDay2,tempYear2);
 
// print both objects using printDate

cout << endl << "Printing two days:" << endl;
date1.printDate();
date2.printDate();


// print a message to say if the two days are the same (testing the sameDay function)
if(date1.sameDay(date2)){
  cout << "The days are same" << endl;
}
else{
  cout << "The days are different" << endl;
}

 }