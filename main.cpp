#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#include "data_structure.h"

#define max(a,b,c)(a>b?(a>c?a:c):(b>c?b:c))

int main(){
    _3D a, b, c;
    _2D p,q,r;
    int A, B, C;
    cout<<"Enter the coordiantes of vertex a"<<endl;
    a.setData();
    cout<<"Enter the coordiantes of vertex b"<<endl;
    b.setData();
    cout<<"Enter the coordiantes of vertex c"<<endl;
    c.setData();
    int y21 = b.getData(1)-a.getData(1),
        z31 = c.getData(2)-a.getData(2),
        z21 = b.getData(2)-a.getData(2),
        y31 = c.getData(1)-a.getData(1),
        x21 = b.getData(0)-a.getData(0),
        x31 = c.getData(0)-a.getData(0);
    A = abs((y21*z31)-(z21*y31));
    B = abs((z21*x31)-(x21*z31));
    C = abs((x21*y31)-(x31*y21));

    if( max(A,B,C) == A){
        p = _2D(a.getData(1), a.getData(2));
        q = _2D(b.getData(1), b.getData(2));
        r = _2D(c.getData(1), c.getData(2));
    }
   
    else if( max(A,B,C) == B){
        p = _2D(a.getData(2), a.getData(0));
        q = _2D(b.getData(2), b.getData(0));
        r = _2D(c.getData(2), c.getData(0));
    }
    
    else if( max(A,B,C) == C){
        p = _2D(a.getData(0), a.getData(1));
        q = _2D(b.getData(0), b.getData(1));
        r = _2D(c.getData(0), c.getData(1));
    }
    
    cout<<q.getData(0)<<" "<<q.getData(1);
    cout<<r.getData(0)<<" "<<r.getData(1);

    return 0;
}
