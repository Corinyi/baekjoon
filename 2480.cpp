#include <iostream>

int main(){
    int a, b,c;
    std::cin >> a >> b >> c;
    int prize;
    int max;

    if(a==b || b==c || a==c){
        if(a==b && b==c){
            prize = 10000+1000*a;
        }
        else{
            prize = 1000;
            if(a==b){
                prize += 100*a;
            }
            else if(b==c){
                prize += 100*b;
            }
            else{
                prize += 100*c;
            }
        }
    }
    else{
        max = a;
        if(b>max){
            max = b;
        }
        if(c>max){
            max = c;
        }
        prize = max*100;
    }

    std::cout << prize << std::endl;
    return 0;
}