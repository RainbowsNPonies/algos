#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;


void selectionSort(auto& Data){

	int i,j,minIndex;
	string tmp;
	
	for (i = 0; i< Data.size() - 1; i++){
		minIndex = i;
		
		for (j = i+1; j< Data.size();j++) {
			if(Data[j] < Data[minIndex])
				minIndex = j;
		}
		if (minIndex != i) {
			tmp = Data[i];
			Data[i] = Data[minIndex];
			Data[minIndex] = tmp;
		}
	}
}
int main()
{
  vector<string> inputs;
  string input;
  int i;

   cout<<"Welcome to \"sort it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 

   selectionSort(inputs);
 for (i = 0; i < inputs.size(); i++){
	cout << inputs[i]<<endl;
}
 

return 0;

}
