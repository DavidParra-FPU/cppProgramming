#include<iostream>
#include<random>

int main(void){
    //generating the seed
    std::random_device rd;

    // Initialize a random number enginge with a seed
    std::mt19937 eng(rd());

    // Define a distribution
    std::uniform_int_distribution<int> dist(1, 100);

    int sum = 0;
    for(int i = 0; i < 50; i++){
        int x = dist(eng);
        std::cout<< x << std::endl;
        sum += x;
    }
    int average = sum / 50;
    std::cout << "Average = " << average <<std::endl;


    return 0;
}