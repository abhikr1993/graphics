#ifndef __DATA_STRUCTURE__
#define __DATA_STRUCTURE__
class _2D{
    private:
        int x, y;
    public:
        _2D();
        _2D(int a, int b);
        void setData(); 
        int getData(int);
};
class _3D{
    private:
        int x, y, z;
    public:
        _3D();
        _3D(int a, int b, int c);
        void setData();
        int getData(int);
};
_2D::_2D():x(0),y(0){
}
_2D::_2D(int a, int b):x(a),y(b){
}
_3D::_3D():x(0),y(0),z(0){
}
_3D::_3D(int a, int b, int c):x(a),y(b),z(c){
}

void _3D::setData(){
    int a,b,c;
    cout<<"Enter the coordinates : "<<endl;
    cin>>a>>b>>c;
    x = a;
    y = b;
    z = c;
}

int _2D::getData(int i){
    int res;
    if (i == 1)
        res = y;
    else res = x;
    
    return res;  
}

int _3D::getData(int i){
    int res;
    if (i == 1)
        res = y;
    else if (i==2)
        res = z;
    else res = x;

    return res;  
}
#endif
