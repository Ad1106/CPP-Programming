#include<iostream>
#include<fstream>
using namespace std;

int main() {
   fstream fp;
   char buf[100];
   int pos;

   // open a file in write mode with 'ate' flag
   fp.open("random.txt", ios :: out | ios :: ate);
   cout << "\nWriting to a file ... " << endl;
   fp << "This is a line" << endl; // write a line to a file
   fp << "This is a another line" << endl; // write another file
   pos = fp.tellp();
   cout << "Current position of put pointer : " << pos << endl;
   
   
   // move the pointer 10 bytes backward from current position 
   fp.seekp(-10, ios :: cur);
   pos = fp.tellp();
   cout << "Current position of put pointer : " << pos << endl;
   
   
   fp << endl << "Writing at a random location  ";
   pos = fp.tellp();
   cout << "Current position of put pointer : " << pos << endl;
   
   
   // move the pointer 7 bytes forward from beginning of the file
   fp.seekp(7, ios :: beg);
   pos = fp.tellp();
   cout << "Current position of put pointer : " << pos << endl;
   
   
   fp << " Hello World  ";
   pos = fp.tellp();
   cout << "Current position of put pointer : " << pos << endl;
   
   
   fp.close(); // file write complete
   cout << "Writing Complete ... " << endl;
   

   // open a file in read mode with 'ate' flag
   fp.open("random.txt", ios :: in | ios :: ate);
   cout << "\nReading from the file ... " << endl;
   
   
   fp.seekg(0); // move the get pointer to the beginning of the file
   // read all contents till the end of file
   pos = fp.tellp();
   cout << "Current position of put pointer : " << pos << endl;
   
   
   while (!fp.eof()) 
   {
      fp.getline(buf, 100);
      cout << buf << endl;
   }
   pos = fp.tellg();
   cout << "\nCurrent Position of get pointer : " << pos << endl;
   return 0;
}
