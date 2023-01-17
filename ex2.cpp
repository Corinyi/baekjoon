#include <iostream>

int main(){
    int score;
    std::string ans;
    std::cin >> score;

    if(score >= 90){
        ans = "A";
    }
    else if(score >= 80){
        ans = "B";
    }
    else if(score >= 70){
        ans = "C";
    }
    else if(score >= 60){
        ans = "D";
    }
    else{
        ans = "F";
    }

    std::cout << ans << std::endl;
}