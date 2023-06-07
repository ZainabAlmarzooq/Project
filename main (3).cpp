/******************************************************************************

Online C++ Compiler.
Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Shahad Albaharnah & Sadeem Alkhamis & Zainab Almarzooq & Zahra Alawami


#include <iostream>
#include <math.h>


using namespace std;

//Function 1
void printMainMenu ()
{
cout << "\nMenu:\n";
cout << "1. Kinetic Energy\n";
cout << "2. Newton Second Law\n";
cout << "3. Equation of ideal gas\n";
cout << "4. Momentum\n";
cout << "5. Exit\n";
}

//Function 2
void calculateKineticEnergyEquation()
{
double Velocity, Mass, KE;
int x;
cout << "\t.....Welcome To Kinetic Energy Law Calculator..... \n";
cout << " Enter value for velocity :";
cin >> Velocity;
cout << "Enter valur for mass :";
cin >> Mass;
x = pow(Velocity, 2);
KE = (0.5) * (Mass) * (x);
cout << "The result for kinetic energy equation =" << KE<<"J";
}

//Function 3
void calculateMomentum()
{
double Mass, Velocity, momentum;
cout << "\t.....Welcome To Momentum Law Calculator..... \n";
cout << "Enter the value of mass ";
cin >> Mass;
cout << "Enter value of velocity ";
cin >> Velocity;
momentum = Mass * Velocity;
cout << "The value of momentum = " << momentum<<"kgm/s";
}


int main()
{

float acceleration,Force;
float mass,volume,mol,temperature,pressure;
int choice,choice2;

cout<<"********************************************************************** \n";
cout<<"\t Hello To The Best Physics Calculator \t \n";
cout<<"********************************************************************** \n";
do {
cout<<"\n --------------------------------------------------------------- \n";
printMainMenu();
cout << "Enter your choice (1-4) or 5 to exit: ";
cin >> choice;

switch (choice)
{
//Kinetic Energy:
case 1:
{
calculateKineticEnergyEquation();
}
break;

//Newton Second Law:
case 2:
{
cout << "\t.....Welcome To Newton Second Law Calculator..... \n";
cout<<"1. To calculate the force. \n ";
cout<<"2. To calculate the acceleration. \n ";
cout<<"3. To calculate the mass. \n ";
cout << "Enter your choice (1-3) ";
cin >> choice2;

switch (choice2)
{
case 1:
{
cout << "Enter the mass:\n";
cin>>mass;
cout << "Enter the acceleration:\n";
cin>>acceleration;
Force=mass*acceleration;
cout<<"Force= "<<Force<<"N"<<endl;
cout<<"-------------------------------------------------------------------------";
break;
}
case 2:
{
cout << "Enter the mass:\n";
cin>>mass;
cout << "Enter the force:\n";
cin>>Force;
acceleration=Force/mass;
cout<<"acceleration= "<<acceleration<<"m/s2"<<endl;
cout<<"-------------------------------------------------------------------------";
break;
}
case 3:
{
cout << "Enter the acceleration:\n";
cin>>acceleration;
cout << "Enter the force:\n";
cin>>Force;
mass=Force/acceleration;
cout<<"mass= "<<mass<<"Kg"<<endl;
cout<<"-------------------------------------------------------------------------";
break;
}
}
}

break;

//Equation of ideal gas:
case 3:
{
cout << "\t.....Welcome To Ideal Gas Law Calculator..... \n";
cout<<"1. To calculate the Pressure. \n ";
cout<<"2. To calculate the Volume. \n ";
cout<<"3. To calculate the Mol. \n ";
cout<<"4. To calculate the Temperature. \n ";
cout << "Enter your choice (1-4) ";
cin >> choice2;

switch (choice2)
{
case 1:
{
cout << "Enter the number of mol:\n";
cin>>mol;
cout << "Enter the volume:\n";
cin>>volume;
cout << "Enter the Temperature:\n";
cin>>temperature;
double const R=0.08206;
pressure=(mol*R*temperature)/volume;
cout<<"Pressure= "<<pressure<<"atm"<<endl;
cout<<"-------------------------------------------------------------------------";
break;
}
case 2:
{
cout << "Enter the number of mol:\n";
cin>>mol;
cout << "Enter the Pressure:\n";
cin>>pressure;
cout << "Enter the Temperature:\n";
cin>>temperature;
double const R=0.08206;
volume=(mol*R*temperature)/pressure;
cout<<"Volume= "<<volume<<"L"<<endl;
cout<<"-------------------------------------------------------------------------";
break;
}
case 3:
{
cout << "Enter the number of Volume:\n";
cin>>volume;
cout << "Enter the Pressure:\n";
cin>>pressure;
cout << "Enter the Temperature:\n";
cin>>temperature;
double const R=0.08206;
mol=(pressure*volume)/(R*temperature);
cout<<"mol= "<<mol<<"mol"<<endl;
cout<<"-------------------------------------------------------------------------";
break;
}
case 4:
{
cout << "Enter the number of Volume:\n";
cin>>volume;
cout << "Enter the Pressure:\n";
cin>>pressure;
cout << "Enter the mol:\n";
cin>>mol;
double const R=0.08206;
temperature=(pressure*volume)/(R*mol);
cout<<"Temperature= "<<temperature<<"K"<<endl;
cout<<"-------------------------------------------------------------------------";
break;
}
}
break;

//Momentum:
case 4:
{
calculateMomentum();
}
break;


case 5:
cout << "Exiting...\n";
break;

default:
cout << "Invalid choice! Please enter again.\n";
break;
}
}
}
while (choice != 5);




return 0;
}


