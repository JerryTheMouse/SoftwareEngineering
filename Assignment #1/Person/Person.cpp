#include <iostream>
#include <string.h>
using namespace std;
class Person {
private:
static const int LIMIT = 25;
string lname; // Person’s last name
char fname[LIMIT]; // Person’s first name
public:
Person() {lname = ""; fname[0] = '\0'; } // #1

Person(const string & ln, const char * fn = "Heyyou"){

lname = ln;
strncpy(fname,fn,LIMIT);
}; // #2
// the following methods display lname and fname
void Show() const{
std::cout<<fname<<" "<<lname<<std::endl;

}; // firstname lastname format


void FormalShow() const {

  std::cout<<lname<<", "<<this->fname<<std::endl;
}; // lastname, firstname format


};
