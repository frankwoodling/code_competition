// TopCoder Practice
// SRM 147 DIV 2
// 175.12 of 250 points

#include <iostream>

using namespace std;

class CCipher{
public:
    string decode(string cipherText, int shift){

        for(int i = 0; i < cipherText.size(); i++){
            int ascii = cipherText[i];

            if(ascii + shift <= 90){
                cipherText[i] -= shift;
            }
            else if(ascii + shift > 90){
                int rem = ascii%90 - 65;
                cipherText[i] -= rem;
            }
        }

        return cipherText;
    }
};

// A = 65, Z = 90

int main(){
    CCipher ID;

    string a ="VQREQFGT";
    string ans = ID.decode(a, 2);
    cout << ans;
}


