//============================================================================
// Name        : lab2.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
#include<sstream>
using namespace std;
class student{
	string name;
	string usn;
	string branch;
	int semester;
public:
	string buffer;
	void read()
	{
		cout<<"enter the name"<<endl;
		cin>>name;
		cout<<"enter the usn"<<endl;
		cin>>usn;
		cout<<"enter the branch"<<endl;
		cin>>branch;
		cout<<"enter the semester"<<endl;
		cin>>semester;
	}
	void pack()
	{
		string str1,temp;
		stringstream out;
		out<<semester;
		str1=out.str();

		string buffer;
		temp+= usn+'|'+name+'|'+branch+'|'+str1;
	for(int i=buffer.length();i<10;i++)
			temp+='$';
	buffer+=temp;
	cout<<buffer;
	fstream fp;
			fp.open("data1.txt",ios::out|ios::app);
			fp<<buffer;
			fp.close();
	}
	void write()
	{
		cout<<"\n frm write";
	}
	int insert(key)
	{
		f1.open("file.txt",ios::in);
		while(f1.eof())
		{
			f1.getline(buffer,100);
			pos=file.tellp();
			unpack();
		}
	}
};


int main() {
	int choice;
	student s;
	cout<<"enter your choice(1.insert;2.delete;3.search;4.modify)"<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1:
		    s.read();
			s.pack();
			s.write();
			break;
	case 2:


	}

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
