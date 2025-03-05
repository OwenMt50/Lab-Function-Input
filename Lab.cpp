//Created by Owen Martin
//Date: 3/4/25
//Description: Function that takes an integer parameter called "dozens" and outputs how many eggs are in those dozens

#include <iostream>
#include <cmath>

using namespace std;
//the function where the chosen dozen from user input is multiplied by 12 eggs (12 eggs = 1 dozen)
void multiply(int dozens, int num){
    cout<<dozens<<"x"<<num<<"="<<dozens*num<<"\n";
}
//sets up integers for user input, and 12 eggs in a dozen
int main(){
    int dozen = 0;
    int egg = 12;
//input of dozen amount from user
    cout<<"How many eggs would you like in dozens? ";
    cin>>dozen;
//function called to multiply the user's input of dozen amount to 12 eggs in a dozen
    multiply(dozen, egg);
//message at the end telling the user that the equation from function is the amount of eggs they are getting from their dozen(s)
    cout<<"This is the amount of eggs you will be given.";
}