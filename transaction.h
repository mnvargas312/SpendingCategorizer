#ifndef TRANSACTION_H_INCLUDED
#define TRANSACTION_H_INCLUDED

#include <iostream>
#include <string>

/**
 * @brief ADT to hold a single transactions data.
 * 
 */
class Transaction {
    private:
        std::string description;
        double amount;
        int date;
        bool debit;
        bool credit;

    public:
        /**
         * @brief Construct a new Transaction object default to description = ERROR all values 0 and false.
         * 
         */
        Transaction();

        /**
         * @brief Construct a new Transaction object
         * 
         * @param des description
         * @param amo amount
         * @param dat date
         * @param deb debit
         * @param cre credit
         */
        Transaction(std::string des, double amo, int dat, bool deb, bool cre);

        std::string getDescription() const;

        void setDescription(std::string d);

        double getAmount() const;

        void setAmount(double a);

        int getDate() const;

        void setDate(int d);

        std::string getType() const;

        void setType(bool d, bool c);

        void display(std::ostream& outs) const;

        void read(std::istream& ins);
};

#endif