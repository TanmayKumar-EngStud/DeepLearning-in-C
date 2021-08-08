# Mc Culloch Pitts neuron
This is the first neuron model that was been proposed.
<br>This was a highly simplified model of neurons. <hr>
## Key features of this model :
- Works on binary inputs.
- It has a very simple structure.
- The neuron is triggered if the function's result is more than threshlod.
<hr>

## Core Part of this model prototype
```C++
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
```
## How To use?
The Values in inputs must be either 0 or 1, type -1 after giving all your inputs.
After that you have to select what output you want to operate: Here you have to give complete name of the operator in capital letters.
<br><br>
Here You can see the example : <br><br>
![This is how the program works](https://user-images.githubusercontent.com/72539289/128622394-69ebfbb2-a934-4cba-9934-9175ce3c29a0.png)
<br>
- If the Output is '0' : this means that the neuron is not triggered
- If the Output is '1' : this means that the neuron is triggered
