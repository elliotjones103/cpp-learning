#include <iostream>
#include <vector>

// simple function
double simple_return(double initial_price, double final_price) {
    return (final_price - initial_price) / initial_price;
}

// create the vector iteration as a function
double iterate_prices(const std::vector<double>& prices) {
    std::cout << "All prices: " << std::endl;
    for (int i = 0; i < prices.size(); i++) {
        std::cout << "price " << i + 1 << ": " << prices[i] << std::endl;
    }
    return 0;
}

int main() {

    // learning how to use variables
    double spot = 110.0;
    double strike = 105.0;
    int steps = 252;
    bool in_the_money = spot > strike;

    // learning how to use std::cout
    std::cout << "Spot price: " << spot << std::endl;
    std::cout << "Strike price: " << strike << std::endl;
    std::cout << "Steps: " << steps << std::endl;
    std::cout << "In the money: " << std::boolalpha << in_the_money << std::endl;

    // learning how to use functions
    double entry_price = 100.0;
    double current_price = 95.0;
    double profit = simple_return(entry_price, current_price);

    std::cout << "PnL: " << profit << std::endl;

    // learning how to use if statements
    if (profit > 0) {
        std::cout << "Profit" << std::endl;
    } else if (profit < 0) {
        std::cout << "loss" << std::endl;
    } else {
        std::cout << "Break even" << std::endl;
    }

    // learning how to use vectors
    std::vector<double> prices = {100.0, 102.5, 101.0, 105.0};
    
    std::cout << "first price: " << prices[0] << std::endl;
    std::cout << "second price: " << prices[1] << std::endl;
    std::cout << "third price: " << prices[2] << std::endl;
    std::cout << "fourth price: " << prices[3] << std::endl;

    // Use a loop to iterate over vecotor
    std::cout << "All prices: " << std::endl;
    for (int i = 0; i < prices.size(); i++) {
        std::cout << "price " << i + 1 << ": " << prices[i] << std::endl;
    }
    
    iterate_prices(prices);
    iterate_prices({110.0, 108.0, 107.5, 109.0});
    
    return 0;
}