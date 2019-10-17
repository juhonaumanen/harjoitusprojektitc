#include <iostream>

struct Vector {
    float origin_x;
    float origin_y;
    float direction_x;
    float direction_y;

    void print(){
        std::cout <<"Vector origin{" << origin_x << ", " << origin_y <<
        "}, direction {" << direction_x << ", " << direction_y << }\n;
    }
}

bool CectorsArePerpendicular(const Vector& v1, Vector& v2)


int main()
{
    Vector v;
    v.origin_x= 3.;
    v.origin_y=0.5;
    v.direction_x=0.2;
    v.direction_y=1.5;

    Vector v1 = {2., 0.2, 3.6, 2.};

bool perpendicular = VectorsArePerpendicular(v1, v2);


}