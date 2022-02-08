#include<iostream>
#include<fstream>
#include<string>


using namespace std ;

int main()
{


fstream myfile;

    myfile.open("text.txt" , ios::out) ;

    string b = "\\documentclass{article}" ;
    string a = "\\usepackage[utf8]{inputenc}" ;

    getline(myfile , a);
    getline(myfile , b);


    myfile.close();


cout << "Enter the name of your latex file : ";
string filename ;
getline(cin,filename);

cout << endl;
cout << endl;
cout << endl;

cout << "Enter the title :" ;
string title ; 
getline(cin ,title);

cout << "\n\n Enter the name of the author : ";
string name ;
getline(cin , name);

cout << "\n\n Enter the date , as  Name of month - year ";
string date ; 
getline(cin , date ) ;

ofstream MyFile( filename +".tex");

  // Write to the file
  MyFile << "\\documentclass{article} \n \\usepackage[utf8]{inputenc} \n \\usepackage{graphicx} \n \\graphicspath{ {Screenshots/} } \n \\usepackage{hyperref}" ;
  
  MyFile << "\n\n";

  MyFile << "\n" << "\\title{"<<title<<"} "<< "\n" << " \\author{" << name <<" } " ; 
  cout << endl;

  MyFile << "\n" << "a\\date{"<< date ;
  cout << endl;

  // Close the file
  MyFile.close();

cout << "done" ;


}