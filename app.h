#pragma once

namespace app {
    class RateRepository {
    public:
        virtual double getRate(double amount) = 0;
    };
    
    class Discounter {
    public:
        Discounter(RateRepository* rateRepository)
        : _rateRepository(rateRepository) {}
        
        double discount(double amount);
        
    private:
        RateRepository* _rateRepository;
    };
     
}
