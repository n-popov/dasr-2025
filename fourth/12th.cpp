
Vector sum(Vector a, Vector b) {
    /*
    1st solution

    Vector sum;
    sum.x = a.x + b.x;
    sum.y = a.y + b.y;
    sum.z = a.z + b.z;

    return sum;
    */

    /*
    2nd solution

    Vector sum = a;
    sum.x += b.x;
    sum.y += b.y;
    sum.z += b.z;


    return sum;
    */

    // 3rd solution
    // return Vector{a.x + b.x, a.y + b.y, a.z + b.z};

    // 4th solution
    // return {a.x + b.x, a.y + b.y, a.z + b.z};

    /*
    5th solution
    Vector sum = {a.x + b.x, a.y + b.y, a.z + b.z};
    return sum;
    */

    // {x0, y0, z0} - initializer list

    Vector sum{a.x + b.x, a.y + b.y, a.z + b.z};

    return sum;

}