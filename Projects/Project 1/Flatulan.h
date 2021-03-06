//
//  Flatulan.h
//  Proj1
//
//  Created by Hayley Martinez on 4/4/18.
//  Copyright © 2018 Hayley Martinez. All rights reserved.
//

#ifndef Flatulan_h
#define Flatulan_h

class City;

class Flatulan
{
public:
    // Constructor
    Flatulan(City* cp, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    
    // Mutators
    void move();
    bool possiblyGetConverted();
    
private:
    City* m_city;
    int   m_row;
    int   m_col;
};

#endif /* Flatulan_h */
