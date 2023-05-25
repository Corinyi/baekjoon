#include <iostream>
#helloworld

int main(){
    int h;
    int m;
    int total;

    std::cin >> h >> m;
    total = 60*h + m;

    if(total < 45){
        h = 23;
        m = 15+total;
    }
    else{
        total -= 45;
        h= total/60;
        m = total%60;
    }


    std::cout << h  << " " << m <<std::endl;
    return 0;
}
