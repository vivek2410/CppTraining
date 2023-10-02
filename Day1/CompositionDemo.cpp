#include <iostream>


class DebitCard
{
    private:
        int _cvv_number;
        std::string _card_number;

    public:
        DebitCard(int cvv, std::string number) 
        : _cvv_number(cvv), _card_number(number) {
            
        }
        ~DebitCard(){
            std::cout << "debit card destryoyed\n";
        }
};

class Account
{
private:
    DebitCard* obj; //DebitCard*, DebitCard&
    std::string _name;
public:
    Account(DebitCard* card, std::string name) : obj(card) {
        this -> _name = name;
    }
    ~Account() {}

    friend std::ostream &operator<<(std::ostream &os, const Account &rhs) {
        os << "obj: " << rhs.obj
           << " _name: " << rhs._name;
        return os;
    }

};

int main(){
    Account* ac1 = new Account(
        new DebitCard(781, "4314 56"), 
        "Vivek"
        );

        std::cout << *ac1;

        DebitCard* db = new DebitCard(201, "6781 91");
        Account* ac2 = new Account(db, "VivekSai");

        std::cout<<*ac2;
}

 /*
int n1=10;//stack(aotomatic storage)
int* n1 = new int(10);//heap
int&n2 = n1; //n2 is a reference to n1(alias)
//card is a stack-allocated debitcard instance
DebitCard card; //stack(automatic storage)
//card is a debit card pointer to heap allocated debir ccard instance
DebiCard* card = new DebitCard();//heap
DebitCard& c1 = card;//c1 is a alternate name for card
//lets not worry about this!! modern cpp
DebitCard&& c1 = std::move(card) ; //c1 isa rvalue reference of card
*/