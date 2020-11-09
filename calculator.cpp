#include <iostream>
#include <string>
#include <vector>
#include <numeric>

class Functypes {
public:
int i,x,z,d;
std::string note, depoinput;;        
std::vector <std::string> input = {};
std::vector <std::string> deponotes = {"AA","BA","BB","CB","CC","DC","DD","FD","FF"};
std::vector <double> equalitynotes = {4,3.5,3,2.5,2,1.5,1,0.5,0.0};
std::vector <double> deposit;
double summ;
};


int calculatefunc() {
Functypes get;
std::cout << "How many classes do you taking ? " << std::endl;
std::cin >> get.z;
std::cout << "Please type your notes!" << std::endl;
for(get.d = 0; get.d < get.z; get.d++) {
std::cin >> get.depoinput;
get.input.push_back(get.depoinput);
}
  for(get.i = 0; get.i < get.input.size(); get.i++) {
  get.note = get.input[get.i];
    for(get.x = 0; get.x < get.deponotes.size(); get.x++){
    std::string deponote = get.deponotes[get.x];            
      if(get.note == deponote) {
      get.deposit.push_back(get.equalitynotes[get.x]);
      }
  }
~get.i,get.d,
get.x,get.z;
}
get.summ = std::accumulate(get.deposit.begin(), get.deposit.end(), decltype(get.deposit)::value_type(0));
std::cout << "Your GPA is:" << get.summ / get.input.size();
}  


int main() {
calculatefunc();
}
