#include <iostream>
#include <string>
#include <sstream>


int main()
{
 std::string input, output;
 const unsigned maxInputLength=output.max_size()/2;
 unsigned inputLength=0;
 std::stringstream ss;
 input.reserve(maxInputLength);
 output.reserve(output.max_size());
 std::cout<<"Enter the string to hash:\n";
 std::cin>>input;
 inputLength=input.length();
 if(inputLength>maxInputLength){
  std::cout<<"String exceeded max length, truncating.\n";
  input=input.substr(0,maxInputLength);
 }

 int mediator=0;
 ss<<std::hex;
 for(const char &inputc:input){
  mediator=inputc;
  ss<<mediator;
 }
 output=ss.str();
 std::cout<<output<<std::endl;
 return 0;
}

/*
struct StrWrapper{
 std::string* data=new std::string();
}in,out;
*/
