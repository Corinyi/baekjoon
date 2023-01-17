#include <iostream>

int main(){
    int year;
    int ans=0;
    std::cin >> year;

    if((year%4) == 0 ){
        if(year%100 != 0 || year%400 == 0){
            ans = 1;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}