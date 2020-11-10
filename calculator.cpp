#include <iostream>
#include <string>
#include <vector>
#include <numeric>

class Student {
public:
double st_spa;
std::string st_name;

int student_info() {
std::cout << "Please type your name:" << std::endl;
std::cin >> st_name;
std::cout << "Type your first SPA" << std::endl;
std::cin >> st_spa;
}};

class Functypes {
public:
int i,x,z,d;
std::string note, depoinput;;        
std::vector <std::string> input = {};
std::vector <std::string> deponotes = {"AA","BA","BB","CB","CC","DC","DD","FD","FF"};
std::vector <double> equalitynotes = {4,3.5,3,2.5,2,1.5,1,0.5,0.0};
std::vector <double> deposit;
double summ, second_spa;

int calculatefunc() {
std::cout << "How many classes do you taking ? " << std::endl;
std::cin >> z;
std::cout << "Please type your notes!" << std::endl;
for(d = 0; d < z; d++) {
std::cin >> depoinput;
input.push_back(depoinput);
}
  for(i = 0; i < input.size(); i++) {
  note = input[i];
    for(x = 0; x < deponotes.size(); x++){
    std::string deponote = deponotes[x];            
      if(note == deponote) {
      deposit.push_back(equalitynotes[x]);
      }
  }
~i,d,
x,z;
}
summ = std::accumulate(deposit.begin(), deposit.end(), decltype(deposit)::value_type(0));
second_spa = summ / input.size();
}};

int main() {
Student student;
Functypes func;
student.student_info();
func.calculatefunc();
std::cout << "Your name:" << student.st_name << std::endl;
std::cout << "Your first SPA:" << student.st_spa << std::endl;
std::cout << "Your second SPA" << func.second_spa << std::endl;
std::cout << "Your GPA is: " << (student.st_spa+func.second_spa) / 2 << std::endl;
}

     
    
