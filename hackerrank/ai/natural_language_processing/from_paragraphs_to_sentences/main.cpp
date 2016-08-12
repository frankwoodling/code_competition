// HackerRank Practice Problems
// Artificial Intelligence > Natural Language Processing > From Paragraphs to Sentences
// Does not pass test 2

#include <iostream>
#include <string>
using namespace std;


int main(){
    string para;
    getline(cin, para);

    int string_start = 0;

    for(int i = 0; i < para.size(); i++){
        string_start = i;
        if(para[i] == '.' || para[i] == '?'  || para[i] == '!' )
        {
            cout << para.substr(string_start+1, i) << endl;
        }
    }

    return 0;
}