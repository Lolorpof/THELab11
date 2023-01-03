#include<iostream>
using namespace std;

int main(){
	char grade;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int i = 1;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			//Do something
			count[0]++;
			i++;
		}
		else if(grade == 'B'){ // if grade is B
			//Do something
			count[1]++;
			i++;
		}
		else if(grade == 'C'){
			count[2]++;
			i++;
		}
		else if(grade == 'D'){
			count[3]++;
			i++;
		}
		else if(grade == 'F'){
			count[4]++;
			i++;
		}
		else if(grade == '0'){
			break;
		}
		else{ // grade is wrong input
			cout << "Wrong input. Please input again.\n";
		} 
	}while(true);
	
	
	cout << "In total " << i-1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
