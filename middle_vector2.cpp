#include "middle_list.h"

using namespace std;

long itc_sum_even_lst(const vector <int> &lst){ //6
    long qwerty = 0;
    for(long i = 0; i < lst.size(); i+=2){
        qwerty += lst[i];
    }
    return qwerty;
}

long itc_sum_even_part_lst(const vector <int> &lst){ //7
    long qwerty = 0;
    for(long i = 0; i < lst.size(); i++){
        if(lst[i] % 2 == 0){
            qwerty += lst[i];
        }
    }
    return qwerty;
}


void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2){ // 8
    long a = 0, b = 0;
    for(long i = 0; i < lst.size(); i++){
        if(lst[i] % 2 == 0){
            lst1[a] = lst[i];
            a++;
        }else{
            lst2[b] = lst[i];
            b++;
        }
    }
}

void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3){ //9
    long a = 0, b = 0, c = 0;
    for(int i = 0; i < lst.size(); i++){
        if(lst[i] < 0){
            lst1[a] = lst[i];
            a++;
        }if(lst[i] == 0){
            lst2[b] = lst[i];
            b++;
        }else{
            lst3[c] = lst[i];
            c++;
        }
    }
}
