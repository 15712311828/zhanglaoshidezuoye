#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include<iostream>
using namespace std;
class Student{
 public:
   void setName(string str1) {name=str1;}
   void setNum(string str2) {num=str2;}
   void setScore(int n) {score=n;}
   string getName() const { return name;}
   string getNum() const { return num;}
   int getScore() const { return score;}
   Student(string name,string num,int score);
   {
       this->name=name;
       this->num=num;
       this->score=score;
   }

 private:
   string name;
   string num;
   int score;
};

bool operator<(const Student& d)
        {
            if(num<d.num)
            {
                return true;
            }

            if(num == d.num && score < d.score)
         {
            return true;
         }
            return false;

            };


#endif
