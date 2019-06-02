#include <iostream>
#include <cstring>
#include <string>
#include <math.h>
#include <cmath>
#include <string.h>
#include <vector>
#include <istream>
#include <sstream>
#include <iterator>
using namespace std;

int main() {
    string input = "this is a sentence backwards but in the same order";
    cout<<"string forwards\n"<<endl;
    cout<<input<<"\n"<<endl;
    vector<string> list;
    vector<string> newlist;
    istringstream sentence(input);
    do{
        string word;
         sentence >> word;
         list.push_back(word);
}
while(sentence);

for(size_t i=0; i<list.size()-1; ++i) {
string intermediate = list[i];
string new_string = intermediate;
int iterator = 1;
for (std::string::size_type i = intermediate.size(); i > 0 ; --i){


new_string[iterator-1]=intermediate[i-1];
    ++iterator;
}
newlist.push_back(new_string);
}

for(std::size_t i=0; i<newlist.size(); ++i) {

cout<<newlist[i]<<" ";
}
return 0;
}