#include "app.h"

namespace app {
    
    double Discounter::discount(double amount) {
        if (amount <= 0) return 0;
        double rate = _rateRepository->getRate(amount);
        return amount * rate;
    }
}