#pragma once

class Building {
    int Id;
    int MaxAge;
    int InitialCost;
    int CurrentAge;

    void Destroy() const;

public:
    Building(int id, int maxAge, int initialCost);

    [[nodiscard]] int GetCost() const;

    void toAge(int years);
};