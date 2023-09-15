#include<iostream>

using namespace std;

class GST
{
    double p, q, bill_amount, gst, total_gst, net_bill, discount_amount, discounted_bill;
    int num;

public:

    GST()
    {
        cout << endl << "|<------BILL With GST------>|" << endl;
        cout << "Number :--->";
        cin >> num;
        cout << "Enter Price :--->";
        cin >> p;
        cout << "Enter Quantity :--->";
        cin >> q;
        bill_amount = p * q ;
        cout << "Bill-Ammount :---> " << bill_amount << endl;
        gst = (p * 18) / 100;
        total_gst = q * gst;
        net_bill = bill_amount + total_gst;
        
        cout << "Enter Discount Percentage :--->";
        double discount_percentage;
        cin >> discount_percentage;
        discount_amount = (discount_percentage / 100) * net_bill;
        discounted_bill = net_bill - discount_amount;
        
        cout << "Gst is :--->" << gst << endl;
        cout << "Total Gst is :--->" << total_gst << endl;
        cout << "Net Bill is :--->" << net_bill << endl;
        cout << "Discounted Amount is :--->" << discount_amount << endl;
        cout << "Discounted Bill is :--->" << discounted_bill << endl;
    }

    void setdata()
    {
        cout << num << "\t" << p << "\t" << q << "\t" << bill_amount << "\t" << gst << "\t" << total_gst << "\t" << net_bill << "\t" << discount_amount << "\t" << discounted_bill << endl;
    }

    double getprice()
    {
        return p;
    }
    double getQun()
    {
        return q;
    }
    double getamt()
    {
        return bill_amount;
    }
    double getgst()
    {
        return gst;
    }
    double gettgst()
    {
        return total_gst;
    }
    double getNetBill()
    {
        return net_bill;
    }
    double getDiscountAmount()
    {
        return discount_amount;
    }
    double getDiscountedBill()
    {
        return discounted_bill;
    }
};

int main()
{
    GST g[4];

    cout << endl << "============================================================================" << endl;
    cout << "                          ---->|Bill With GST|<----" << endl;
    cout << endl << "============================================================================" << endl;
    cout << endl << "No.\t" << "Price\t" << "Qunti\t" << "Ammo\t" << "GST\t" << "T-Gst\t" << "Netbill\t" << "Dis\t" << "Dis Bill\t" << endl;
    cout << endl << "============================================================================" << endl;
    
    double p, q, bill_amount, gst, total_gst, net_bill, discount_amount, discounted_bill;
     
    for (int i = 0; i < 4; i++)
    {
        g[i].setdata();
       
        p += g[i].getprice();
        q += g[i].getQun();
        bill_amount += g[i].getamt();
        gst += g[i].getgst();
        total_gst += g[i].gettgst();
        net_bill += g[i].getNetBill();
        discount_amount += g[i].getDiscountAmount();
        discounted_bill += g[i].getDiscountedBill();
    }

    cout << endl << "=============================================================================" << endl;
    cout <<endl << "TOTAL" <<"\t"<< p <<"\t" << q <<"\t"<< bill_amount<<"\t" << gst<<"\t" << total_gst <<"\t"<< net_bill << "\t" << discount_amount << "\t" << discounted_bill << endl;
    cout << endl << "=============================================================================" << endl;
}
