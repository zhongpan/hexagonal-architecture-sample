#pragma once
#include "app.h"

namespace repo {
    class MockRateRepository : public app::RateRepository {
    public:
        double getRate(double amount);
    };
}
