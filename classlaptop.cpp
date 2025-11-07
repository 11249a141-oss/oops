#include<iostream>
using namespace std;
class laptops{
    int ramsize;
    float proccesortype;
    string brandname;
    public:
    void getdetails()
    {
    cout <<"enter the brandname:";
    cin >> brandname;
    cout <<"enter proccesortype:";
    cin >> proccesortype;
    cout <<"enter ramsize:";
    cin >> ramsize;
    }
    void showdetails()
    {
        cout<<"\n brand_name:"<<brandname;
        cout<<"\n proccesortype:"<<proccesortype;
        cout<<"\n ramsize:"<<ramsize << endl;
    }
};
 int main()
{ 
    laptops l1,l2;
    cout<<"enter get details for brandname 1\n";
    l1.getdetails();
    cout<<"\nenter get details of brandname 2\n";
    l2.getdetails();
    cout<<"\n---laptop details---\n";
    l1.showdetails();
    l2.showdetails();
    return 0;
}
