// Algorithms > Warmup > Circular Array Rotation

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k, q, l, temp;
    cin >> n >> k >> q;
    k = k%n;
    vector<int> vec_input(n);

    for(int i = 0; i < vec_input.size(); i++){
        cin >> temp;
        vec_input[(i+k)%n] = temp;
    }

    for(int i = 0; i < q; i++){
        cin >> temp;
        cout <<  vec_input[temp] << endl;
    }
}


// Rotating the array is too slow.
// You must do the math to find out what the array's arrangement will be.
/*
vector<ll int> rotate_right(vector<ll int> vec){
    vector<ll int> rotated(vec.size());

    for(int i = 0; i < vec.size(); i++){
        if(i == 0){
            rotated[i] = vec[vec.size()-1];
        }
        else{
            rotated[i] = vec[i - 1];
        }
    }
    return rotated;
}

int main(){
    ll int n, k, q, l;
    cin >> n >> k >> q;
    k = k%n;
    vector<ll int> vec_input(n);

    for(int i = 0; i < vec_input.size(); i++){
        int temp;
        cin >> temp;
        vec_input[i] = temp;
    }

    for(int i = 0; i < k; i++){
        vec_input = rotate_right(vec_input);
    }

    for(int i = 0; i < q; i++){
        ll int q_line;
        cin >> q_line;
        cout << vec_input[q_line] << endl;
    }
    return 0;
}
*/


/*
int main() {
    int n;
    int k;
    int q;
    int m;
    scanf("%d %d %d",&n,&k,&q); // 3 2 3
    int arr[n];
    int i;

    for(i = 0; i < n; i++){
        scanf("%d",&arr[(i+k)%n]); // 1 2 3
    }

    for(i = 0; i < q; i++){
        scanf("%d",&m); // 0 1 2
        printf("%d\n",arr[m]);
    }

    return 0;
}
*/
