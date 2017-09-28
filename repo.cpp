#include "repo.h"

namespace repo {
    double MockRateRepository::getRate(double amount) {
        if (amount <= 100) return 0.01;
        if (amount <= 1000) return 0.02;
        return 0.05;
    }
}
