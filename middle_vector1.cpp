#include<middle_list.h>

using namespace std;

vector <char> itc_strtlist(string str){ //1
    vector <char> mass;
    for(int i = 0; i < str.size(); i++){
        mass[i] = str[i];
    }
    return mass;
}

string itc_join(vector <char> lst, string sep){
    string str;
    for(int i = 0; i < str.size(); i++){
        str += mass[i] + sep;
    }
    return mass;
}

string itc_rmstrspc(string str){
    string stroka;
    for(int i = 0; i < str.size(); i++){
        if(str[i] != ' '){
            stroka += str[i];
        }
    }
    return stroka;
}
