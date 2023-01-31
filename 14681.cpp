#include <iostream>

int main(){
    int num_x, num_y;
    int ans;
    std::cin >> num_x >> num_y;
    if(num_x > 0){
        if(num_y > 0){
            ans = 1;
        }
        else{
            ans = 4;
        }
    }
    else{
        if(num_y > 0){
            ans = 2;
        }
        else{
            ans = 3;
        }
    }

    std::cout << ans <<std::endl;
    return 0;
}