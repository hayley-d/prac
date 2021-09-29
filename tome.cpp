#include<iomanip>
#include<cstring>
#include<string>
#include<iostream>
#include "tome.h"

tome::tome(std::string name, std::string author)
{
    this->tomeName = name;
    this->author = author;
    this->currSpells = 0;
}

tome::tome(std::string name, int tomeSize, std::string author, std::string *initialList)
{
    this->tomeName = name;
    this->author = author;
    this->currSpells = 0;
    for(int i = 0; i < tomeSize; i++)
    {
        references[i] = initialList[i];
        currSpells++;
    }
}

tome::~tome()
{
}

int tome::getTomeSize() const //works
{
    return currSpells;
}

std::string tome::getSpell(int i) const //works
{
    return references[i];
}

std::string tome::getName() const //works
{
    return tomeName;
}

std::string tome::getAuthor() const //works
{
    return author;
}

tome tome::operator+(const std::string &add)//works
{
    if(currSpells < 10)
    {
        references[currSpells] = add;
        currSpells++;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& output, const tome& t)
{
    tome &ref = const_cast <tome&>(t);
    output << "Tome Name: "<< ref.getName() << '\n' << "Author: " << ref.getAuthor() << '\n'<< "References: ";
    for(int i = 0; i < ref.getTomeSize(); i++)
    {
        output << ref.getSpell(i);
    }
    output << std::endl;
    return output;
}

tome tome::operator-(const std::string &sub)//works
{
    int index = 0;
    std::string temp [10];
    for(int i = 0; i < currSpells; i++)
    {
        if(references[i] == sub)
        {
   
        }
        else if(references[i] != sub)
        {
            temp[index] = references[i];
            index++;
        }
    }
    
    for(int i = currSpells-1; i < 10; i++)
    {
        temp[i] = "";
    }
    
    for(int i = 0; i < 10; i++)
    {
        references[i] = temp[i];
    }
    
    return *this;
}

tome& tome::operator=( const tome& oldTome)
{
    tome &ref = const_cast <tome&>(oldTome);
    this->tomeName = ref.getName();
    this->author = ref.getAuthor();
    this->currSpells = ref.getTomeSize();
    for(int i = 0; i < currSpells; i++)
    {
        references[i]  = ref.getSpell(i);
    }
    return *this;
}

bool tome::operator>(const tome& t)
{
    bool greater = true;
    tome &ref = const_cast <tome&>(t);
    if(this->currSpells == ref.getTomeSize())
    {
        greater = false;
    } 
    return greater; 
}

bool tome::operator<(const tome& t)
{
    bool smaller = true;
    tome &ref = const_cast <tome&>(t);
    if(this->currSpells == ref.getTomeSize())
    {
        smaller = false;
    } 
    return smaller; 
}

bool tome::operator==(const tome& t)
{
    tome &ref = const_cast <tome&>(t);
    bool same = false;
    bool found = false;
    std::string spells[10];
    int count  = 0;
    if(this->currSpells == ref.getTomeSize())
    {
        for(int i = 0; i < currSpells; i++)
        {
            spells[i] = ref.getSpell(i);
        }
        for(int i = 0 ; i < currSpells; i++)
        {
            found = false;
            for(int j = 0; j < currSpells; j++)
            {
                if(references[i] == spells[j] && found == false)
                {
                    spells[j] = "h";
                    found = true;
                }
            }
        }
        for(int i = 0; i < currSpells; i++)
        {
            if(spells[i] == "h")
            {
                count++;
            }
        }
        if(count == currSpells)
        {
            same = true;
        }
    }
    return same;
}

