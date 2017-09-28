#define BOOST_TEST_MAIN
#include "app.h"
#include <boost/test/unit_test.hpp>
#include <boost/smart_ptr.hpp>
using namespace boost;

class MockConstRateRepository : public app::RateRepository {
public:
    MockConstRateRepository(double rate) : _rate(rate) {}
    double getRate(double amount) {
        return _rate;
    }
private:
    double _rate;
};

BOOST_AUTO_TEST_SUITE(s_discount)

BOOST_AUTO_TEST_CASE(t_discount)
{
    double RATE_0point01 = 0.01;
    MockConstRateRepository repo(RATE_0point01);
    app::Discounter app(&repo);
    BOOST_CHECK_EQUAL(app.discount(100), 100*RATE_0point01);
    BOOST_CHECK_EQUAL(app.discount(0), 0);
    BOOST_CHECK_EQUAL(app.discount(-100), 0);
}

BOOST_AUTO_TEST_SUITE_END()