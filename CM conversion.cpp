/*Develop a computer program that takes as input given lengths expressed in feet and
inches. The program should then calculate the length in centimeters and display it on the
console.*/
#include <iostream>
using namespace std;
int main (){

	double length_feet;
	double length_inch;
do{
		cout<<"\n\n___. Kindly, enter length of the object in feet."<<endl;
		cin>>length_feet;
		cout<<"___. Now, enter length of the object in inches."<<endl;
		cin>>length_inch;
	
	double cm_conversion = length_feet * 30.48;
	double inch_conversion = length_inch * 2.54;
	
		cout<<"\n\t"<<length_feet<<" would be: ";
		cout<<cm_conversion<<"cm in centimeters. "<<endl;
		
		cout<<"\t"<<length_inch<<" would be: ";
		cout<<inch_conversion<<"cm in centimeters. "<<endl;
}while(length_feet);
return 0;
}