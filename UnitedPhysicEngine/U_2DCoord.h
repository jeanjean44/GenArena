#ifndef U2DCOORD_H_INCLUDED
#define U2DCOORD_H_INCLUDED

class U_2DCoord
{
public:
    U_2DCoord();
    U_2DCoord(double x, double y);

    void move2D(U_2DCoord& vec);
    double getNorm();

    double x, y;

};

#endif // U2DCOORD_H_INCLUDED
