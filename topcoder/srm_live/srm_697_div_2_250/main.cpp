// TopCoder Live
// SRM 697 DIV 2
// 146.52 of 250 points

#include <iostream>

class TriangleMaking{
public:
    int maxPerimeter(int a, int b, int c){

        while(true){
            if (a < (b - c)) {
                if (b > c) {
                    b--;
                }
                else {
                    c--;
                }
            }
            else if(a >= (b + c)){
                a--;
            }
            else if(b < (c - a)) {
                if (c > a) {
                    c--;
                }
                else {
                    a--;
                }
            }
            else if(b >= (c + a)){
                b--;
            }
            else if (c < (a - b)) {
                if (a > b) {
                    a--;
                }
                else {
                    b--;
                }
            }
            else if(c >= (a + b)){
                    c--;
                }
            else{
                break;
            }
        }

        return a+b+c;
    }
};

int main(){
    TriangleMaking ID;
    int test = ID.maxPerimeter(41,64,16);
    std::cout << test;
    return 0;
}


//         b – c < a < b + c
//
//        c – a < b < c + a
//
//        a – b < c < a + b