#include <iostream>
#include <string>
using namespace std;

int main()
{
int nofw =0 ;
string previous; // previous word; initialized to ""
string current; // current word
while (cin>>current) // read a stream of words
{ 
if (previous == current) // check if the word is the same as last
   ++nofw;
   cout << "word number " << nofw << " repeated: " << current << '\n';
previous = current; // that's where the computer knows the previous word 
}
}