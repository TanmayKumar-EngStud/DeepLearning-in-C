#include <iostream>
#include <vector>
using namespace std;

class Neuron{
  private: 
    vector<int> inputs;
    int output;
    vector<string> category ={"AND", "OR", "NAND", "NOR"};
  public :
    void set_inputs(vector<int> inputs){
        this->inputs = inputs;
    }
    int get_output(){
        return output;
    }
    int logic(vector<int> inputs, string category){
      int threashold = 0;
      int temp1 = 0;
        if(category == "AND"){
          threashold = inputs.size();
          int *temp = &temp1;
          for (int i = 0; i < (int)inputs.size(); i++){
            *temp = *temp + inputs[i];
          }
        }
        else if(category == "OR"){
          threashold = 1;
          int *temp = &temp1;
          for (int i = 0; i < (int)inputs.size(); i++){
            *temp = *temp + inputs[i];
          }
        }
        else if(category == "NAND"){
          threashold = 1;
          int *temp = &temp1;
          for (int i = 0; i < (int)inputs.size(); i++){
            *temp = *temp + inputs[i];
          }
          if (*temp == (int)inputs.size()){
            *temp = 0;
          }
          else{
            *temp = 1;
          }
        }
        else if(category == "NOR"){
          threashold = 1;
          int *temp = &temp1;
          for (int i = 0; i < (int)inputs.size(); i++){
            *temp = *temp + inputs[i];
          }
          if (*temp == 0){
            *temp = 1;
          }
          else{
            *temp = 0;
          }
        }
      if (temp1 >= threashold){
          return 1;
      }
      else{
          return 0;
      }
    }
};

int main(){
  Neuron n;
  //Now we are going to test all the 4 categories.
  //We will take input from the user and check the output.
  vector<int> inputs;
  //User can give any number of inputs.
  cout << "Enter the inputs for the neuron. And -1 in the end \n";
  while(true){
    int temp;
    cin >> temp;
    if(temp == -1){
      break;
    }
    inputs.push_back(temp);
  }
  cout<<"What category you want to select ?\na. AND\nb. OR\nc. NAND\nd. NOR\n";
  string choice;
  cin >> choice;
  int output = n.logic(inputs, choice);
  cout << "The output is " << output <<"\n\n"<< endl;

  return 0;
}