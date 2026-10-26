#pragma once

#include <string>
#include <utility>
#include <vector>

class Item
{
public:
    std::string name;
    int sellIn;
    int quality;
    Item(std::string  name, const int sellIn, const int quality) : name(std::move(name)), sellIn(sellIn), quality(quality)
    {}
};

class GildedRose
{
public:
    std::vector<Item> & items;
    explicit GildedRose(std::vector<Item> & items);
    
    void updateQuality() const;
};
