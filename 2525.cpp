#include <iostream>

int main(){
    int current_h;
    int current_m;
    int current_total;
    int cook_time;
    int end_time=0;
    std::cin >> current_h >> current_m;
    std::cin >> cook_time;
    current_total = 60*current_h + current_m;
    end_time = current_total + cook_time;
    if(end_time>=60*24){
        end_time -= 60*24;
    }
    current_h = end_time/60;
    current_m = end_time%60;

    std::cout << current_h << " " << current_m <<std::endl;
    return 0;
}