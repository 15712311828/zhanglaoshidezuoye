#include <string>
using namespace std;

class Student{
public:
  Student(string name,string num,int score);
  void setName(string name);
  void setNum(string num);
  void setScore(int score);
  string getName();
  string getNum();
  int getScore();
  void print();
private:
  string name;
  string num;
  int score;
};
