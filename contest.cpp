#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;


int main() {
    int t,i,len;
    string s;

    cin>> t;

    while(t--){
     int wicket=0,run=0,over,ball;
     string overs,runs,wickets;

        cin >>s;
        len = s.size();

        for(i=0;i<len;i++){

            if(s[i]!='W'){

                run = run+s[i]-'0';
            } else if(s[i]=='W'){
                wicket= wicket+1;
            }
        }

        over= len/6;
        ball = len%6;

        if(len>6){
            overs= "Overs";
        } else{
            overs= "Over";
        }
        if(run>1){
            runs= "Runs";
        } else{
            runs= "Run";
        }
        if(wicket>1){
            wickets= "Wickets";
        } else{
            wickets= "Wicket";
        }

        cout << over << "."<<ball << " " << overs<<" " << run<<" " << runs<< " " << wicket<<" " << wickets<<"." <<endl;


    }

}
