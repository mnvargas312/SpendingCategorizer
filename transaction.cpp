#include "transaction.h"

Transaction::Transaction()
    :description("ERROR"),
     amount(0.00),
     date(0),
     debit(false),
     credit(false)
{
}

Transaction::Transaction(std::string des, double amo, int dat, bool deb, bool cre)
    :description(des),
     amount(amo),
     date(dat),
     debit(deb),
     credit(cre)
{
}

    std::string Transaction::getDescription() const{

    }

    void Transaction::setDescription(std::string d){

    }

    double Transaction::getAmount() const{

    }

    void Transaction::setAmount(double a){

    }

    int Transaction::getDate() const{

    }

    void Transaction::setDate(int d){

    }

    std::string Transaction::getType() const{

    }

    void Transaction::setType(bool d, bool c){

    }

    void Transaction::display(std::ostream& outs) const{

    }

    void Transaction::read(std::istream& ins){

    }