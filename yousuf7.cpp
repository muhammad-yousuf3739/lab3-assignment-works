#include <iostream>
using namspace 
int main()
{
    //price of five items 
    double price1 =12.95;
    double price2 =24.95;
    double price3 =6.95;
    double price4 =14.95;
    double price5 =3.95;
    //computtations
    double subtotal=price1+price2+price3+price4+price5;
    constant double tax_rate=0.06;
    double tax =subtotal*tax_rate;
    double total=subtotal+tax 
    //outpu twith two decimal places 
    std::cout <<std::fixed<<std::setprecision(2);
    std::cout<<"item 1:$"<<price1<<"\n";
    std::cout<<"item 2:$"<<price2<<"\n";
    std::cout<<"item 3:$"<<price3<<"\n";
    std::cout<<"item 4:$"<<price4<<"\n";
    std::cout<<"item 5:$"<<price5<<"\n";
    std::cout<<"subtotal":$"<<subtotal<<"\n";
    std::cout<<"sales tax(6%):$<<tax<<:"\n";
    std::cout<<"total:$"<<total<<"\n";
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    









