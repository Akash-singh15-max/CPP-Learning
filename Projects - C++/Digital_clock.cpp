// Digital Clock
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
using namespace std;
int input_format();
void fill_time(char*,int);
void fill_date(char*);
void clear_screen();
int main(){
	char time[100];
	char date[100];
	int format = input_format();
	while (1)
	{
		fill_time(time,format);
		fill_date(date);
		clear_screen();
		cout<<"Time: "<<time<<endl;
		cout<<"Date: "<<date<<endl;
		sleep(1);
	}
	

	return 0;
}
int input_format(){
	int format;
	cout<<"Enter the format:"<<endl;
	cout<<"1. 12 Hour format"<<endl;
	cout<<"2. 24 Hour format"<<endl;
	cout<<"Enter your choice: ";
	cin>>format;
	
	return format;
}
void clear_screen(){
	system("cls");
}
void fill_time(char* buffer, int format){
	time_t raw_time;
	struct tm* current_time;
	time(&raw_time);
	current_time = localtime(&raw_time);
	if (format == 1)
	{
		strftime(buffer,100,"%H:%M:%S %p",current_time);
	}
	else{
		strftime(buffer,100,"%I:%M:%S %p",current_time);
	}
	
}
void fill_date(char* buffer){
	time_t raw_time;
	struct tm* current_time;
	time(&raw_time);
	current_time = localtime(&raw_time);
	strftime(buffer,100,"%A %B %d %Y",current_time);
}