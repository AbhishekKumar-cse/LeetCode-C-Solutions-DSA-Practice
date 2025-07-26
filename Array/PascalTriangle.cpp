#include<iostream>
using namespace std;
#include<vector>


 vector<vector<int>> generate(int numRows){
 	
 	vector<vector<int>> triangle;
 	
 	for(int i =0; i <numRows; i++){
 		vector <int> row(i+1,1);
 			for(int j =1; j <i; j++){
 				row[j]= triangle[i-1][j]+triangle[i-1][j];
 				
	 }
	  triangle.push_back(row);
 }
 return triangle;
}

 
 int main(){
 	int rows;
 	cout<<"No. of Rows:";
 	cin>>rows;
 	vector<vector<int>> pascalTriangle = generate(rows);
 	for(const auto& row : pascalTriangle){
 		for(int num : row){
 			cout<<num<<" ";
 		}
 		cout<<endl;
 	}
 	return 0;
    }