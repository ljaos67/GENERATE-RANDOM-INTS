/****************************************************************
CSCI 340 - Assignment 1 - FALL 2020

Programmer: Leonart Jaos
Z-ID: z1911688
Section: 0002
TA: Saiteja Alubelli
Date Due: September 16, 2020

Purpose: This is the header file that contains the function
definitions and declarations for rgi.cc. The following functions
fill a vector of size VEC_SIZE with random values and print the
contents of the vector. 

****************************************************************/

#ifndef H_RGI // should not be defined any place else 
#define H_RGI // same const value as for ifndef directive

// Pre-processing directives 
// Input/output stream, vector container
// <cstdlib> for rand function
// <algorithm> is used in rgi.cc for sort 
// <iomanip> for spacing
#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<iomanip>
// defintion of variable defined in another file
extern int VEC_SIZE;
// for cout and cin streams
using namespace std;
// Add needed header files here ..

// You need to implement these two functions ...
// sets seed for random number generation
// for loop that fills vector for VEC_SIZE
// range for number generation is 1-10,000
 void genRndNums(vector<int> &v)
{
	srand(1);
	for(int i=0; i<VEC_SIZE;i++)
	{
	      int a =rand()%10000+1;
	      v.push_back(a);
	}
}
// const keyword to limit functionality to read only
// fpr loop iterates through the postions of vector and prints
// value stored at position i with spacing paramter and newline
void printVec(const vector<int> &v)
{
	int c=0;
	for(int i=0;i<VEC_SIZE;i++)
	{
		
		if(c<11)
		{	
		cout << setw(5) << v.at(i)<<" ";
			c++;
		}
		else
		{
			cout<< setw(5) << v.at(i)<<" "<<endl;
			c=0;
		}	
	}
	cout << endl;
}

#endif
