
#include "Student.h"
#include <iostream>

Student::Student(string name,string num,int score){
  this->name=name;
  this->num=num;
  this->score=score;
}
void Student::setName(string name){
  this->name=name;
}
void Student::setNum(string num){
  this->num=num;
}
void Student::setScore(int score){
  this->score=score;
}
string Student::getName(){
  return name;
}
string Student::getNum(){
  return num;
}
int Student::getScore(){
  return score;
}
void Student::print(){
  cout<<name<<"学号为"<<num<<"分数为"<<score<<endl;
}
bool Student::operator<(Student & rsh){
  return this->score<rsh.getScore();
}
