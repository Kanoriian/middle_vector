#include "middle_list.h"

using namespace std;

vector <char> itc_strtlist(string str){ //1
    vector <char> mass;
    for(int i = 0; i < str.size(); i++){
        mass[i] = str[i];
    }
    return mass;
}

string itc_join(vector <char> lst, string sep){ //2
    string qer = "";
    for(int i = 0; i < lst.size(); i++){
        qer += lst[i] + sep;
    }
    return qer;
}

string itc_rmstrspc(string str){ //3
    string stroka;
    for(int i = 0; i < str.size(); i++){
        if(str[i] != ' '){
            stroka += str[i];
        }
    }
    return stroka;
}

string itc_rmstrchar(string str, string ls){ //4
    string result = "";
    for (int i = 0; i < str.size(); i++){
        int a;
        for (a = 0; a < ls.size(); a++){
            if (str[i] == ls[a]){
                break;
            }
        }
        if (a == ls.size()){
            result += str[i];
        }
    }
    return result;
}

long itc_sumlst(const vector <int> &lst){ //5
    long qwerty = 0;
    for(long i = 0; i < lst.size(); i++){
        qwerty += lst[i];
    }
    return qwerty;
}
