#ifndef TOME_H
#define TOME_H
#include<iostream>

class tome
{
    private:
            std::string references [10];
            std::string tomeName;
            std::string author;
            int currSpells;
    public:
            tome(std::string,std::string);
            tome(std::string,int,std::string,std::string*);
            ~tome();
            int getTomeSize() const;
            std::string getSpell(int) const;
            std::string getName() const;
            std::string getAuthor() const;
            friend std::ostream& operator<<(std::ostream&, const tome&);
            tome operator+(const std::string&);
            tome operator-(const std::string&);
            tome& operator=(const tome&);
            bool operator>(const tome&);
            bool operator<(const tome&);
            bool operator==(const tome&);
            
};
#endif
