#include<iostream>

int main(void){
    int n;
    std::cin >> n;

    for(int j = 0; j < n; j++){
        for(int i = n; i > 0; i--){
            std::cout << i << ' ';
        }

        for(int i = 2; i <= 0; i++){
            std::cout << i << ' ';
        }

        std::cout <<""<<std::endl;
    }




    return 0;
}