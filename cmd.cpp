#include "app.h"
#include "repo.h"
#include <iostream>

using namespace app;
using namespace repo;

int main(int argc, char* argv[]) {
    double amount = 0.0;
    std::cout << "please enter amount:";
    std::cin >> amount;
    MockRateRepository repo;
    Discounter app(&repo);
    std::cout << "discount is:" << app.discount(amount) << std::endl;
}
