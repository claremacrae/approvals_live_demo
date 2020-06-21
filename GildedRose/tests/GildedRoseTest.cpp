#include <catch2/catch.hpp>

#include "../lib/GildedRose.h"

TEST_CASE("Foo")
{
    vector<Item> items;
    items.push_back(Item("Foo", 0, 0));
    GildedRose app(items);
    app.updateQuality();
    CHECK("Foo" == app.items[0].name);
}

/*
 * Things to note here:
 * 
 * - 51% coverage of GildedRose.cpp
 * - The actual calculation result (new quality) is not tested
 */

TEST_CASE("TestUpdateQuality")
{
    vector<Item> items;
    items.push_back(Item("Foo", 1, 1));
    GildedRose app(items);
    app.updateQuality();
    CHECK("Foo" == app.items[0].name);
    CHECK(0 == app.items[0].sellIn);
    CHECK(0 == app.items[0].quality);
}

/*
 * Things to note here:
 * 
 * - 51% still coverage of GildedRose.cpp
 * - Now testing the actual calculation result (new quality)
 */