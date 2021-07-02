#include <iostream>
#include <fstream>
using namespace std;

#define MAXPREPOSITIONS 100

int main(){
string matrixFile;
int rows=5, cols=4;

//cout<< "Enter Name of the file with input word matrix: ";
cin>> matrixFile;

//cout<< "Enter number of rows, number of columns: ";
//cin>> rows >> cols;

ifstream file;

//opening Articles.txt
file.open("Articles.txt");

string articles[3];
int aWeight[3];
int count = 0;

while(file>> articles[count] >> aWeight[count]){
count++;
}
file.close();


//opening Preposition.txt
file.open("Preposition.txt");

string prepositions[MAXPREPOSITIONS];
int pWeight[MAXPREPOSITIONS];
count = 0;

while(file>> prepositions[count] >> pWeight[count]){
count++;
}

file.close();   


//opening input matrixFile
file.open(matrixFile);
  
int **weightMatrix = new int*[rows];
string word;
bool firstElementIsArticle = false;

for(int i=0; i<rows; i++){
weightMatrix[i] = new int[cols];

for(int j=0; j<cols; j++){
file>> word;

weightMatrix[i][j] = 0;
bool found = false;

for(int k=0; k<3; k++){
if(word == articles[k]){
weightMatrix[i][j] = aWeight[k];
found = true;

if(i == 0 && j == 0){
firstElementIsArticle = true;
}
break;
}
}

if(!found){
for(int k=0; k<count; k++){
if(word == prepositions[k]){
weightMatrix[i][j] = pWeight[k];
break;
}
}
}

}
}

file.close();


//diplaying Weight Matrix

cout<< "\nWeight Matrix :\n";
for(int i=0; i<rows; i++){
for(int j=0; j<cols; j++){
cout<< weightMatrix[i][j] << "\t";
}
cout<<endl;   
}   


//if element at 0,0 is an article
if(firstElementIsArticle)
{   
//converting weight matrix to desired output matrix
while(weightMatrix[0][0] != 0){

int temp1 = weightMatrix[0][0];

for(int j=1; j<cols; j++){
int temp = weightMatrix[0][j];
weightMatrix[0][j] = temp1;
temp1 = temp;
}

for(int i=1; i<rows; i++){
int temp = weightMatrix[i][cols-1];
weightMatrix[i][cols-1] = temp1;
temp1 = temp;
}

for(int j=cols-2; j>=0; j--){
int temp = weightMatrix[rows-1][j];
weightMatrix[rows-1][j] = temp1;
temp1 = temp;
}

for(int i=rows-2; i>=0; i--){
int temp = weightMatrix[i][0];
weightMatrix[i][0] = temp1;
temp1 = temp;
}

}

//diplaying Desired Output Matrix


cout<< "\nDesired Output Matrix (first element is article):\n";
for(int i=0; i<rows; i++){
for(int j=0; j<cols; j++){
cout<< weightMatrix[i][j] << "\t";
}
cout<<endl;   
}
}

else{ //if element at 0,0 is preposition

cout<< "\nElements in outer row/column from (0,0) in clockwise:\n";
for(int j=0; j<cols; j++){
cout<< weightMatrix[0][j] << " ";
}

for(int i=1; i<rows; i++){
cout<< weightMatrix[i][cols-1] << " ";
}

for(int j=cols-2; j>=0; j--){
cout<< weightMatrix[rows-1][j] << " ";
}

for(int i=rows-2; i>0; i--){
cout<< weightMatrix[i][0] << " ";
}

cout<< endl;

}   
  

//deallocating dynamically allocated memory
for(int i=0; i<rows; i++){
delete weightMatrix[i];
}
delete weightMatrix;

}