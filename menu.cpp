#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
class Restaurant
{
public:
    string customername, mobilenum, items[20];
    int order, bill = 0, n, IGst, SGst, T_Gst, Disc, FBill, a[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    Restaurant()
    {
        cout << "\n\t\t\t\tWelcome To DS RESTAURANT\t" << endl;
        cout << "\n\t\t\t------------------------------------------" << endl
             << endl;
    }
    void set_detail()
    {
        cout << "Enter Your customer Name :-> ";
        cin >> customername;
        cout << "Enter Your mobile Number :-> ";
        cin >> mobilenum;
    }
    void get_detail()
    {
        cout << endl;
        cout << "\tcosromerName :-> " << customername << endl;
        cout << "\tmobile num :-> " << mobilenum << endl;
    }

    int Soup()
    {
        cout << "\t\t\tSteaming Soup" << endl;
        cout << "\t\t\t______" << endl;
        cout << "\t\tItem\t\t\t\t\tPrice" << endl;
        cout << "\t1. Tomato Soup \t\t\t\t\t340/-" << endl;
        cout << "\t2. Manchow Soup \t\t\t\t355/-" << endl;
        cout << "\t3. Creamy Corn Soup \t\t\t\t375/-" << endl;
        cout << "\t4. Thai Coconut Lime Soup\t\t\t420/-" << endl;
        cout << "\t\tPress 0 if You Complet Order" << endl;
        cout << "\t\tPress 8 if You Cancel Order" << endl
             << endl;
        cout << "\n";

        cout << "Your Order : ";
        cin >> order;

        switch (order)
        {
        case 1:
            cout << "Enter Quantity : ";
            cin >> n;
            a[0] += n;
            items[0] = "Tomato Soup";
            bill = bill + (n * 340);
            break;
        case 2:
            cout << "Enter Quantity : ";
            cin >> n;
            a[1] += n;
            items[1] = "Manchow Soup";
            bill = bill + (n * 355);
            break;
        case 3:
            cout << "Enter Quantity : ";
            cin >> n;
            a[2] += n;
            items[2] = "Creamy Corn Soup";
            bill = bill + (n * 375);
            break;
        case 4:
            cout << "Enter Quantity: ";
            cin >> n;
            a[3] += n;
            items[3] = "Thai Coconut Lime Soup";
            bill = bill + (n * 420);
            break;
        case 0:
            break;
        case 8:
            bill = bill;
            break;
        default:
            cout << "your Choice is Wrong ......\n";
            break;
        }
        return bill;
    }
    int Soft_drink()
    {
        cout << "\t\t\t   Soft drink" << endl;
        cout << "\t\t\t_______" << endl;
        cout << "\t\tItem\t\t\t\t\tPrice" << endl;
        cout << "\t1. coca cola \t\t\t\t\t25/-" << endl;
        cout << "\t2. thums up \t\t\t\t\t35/-" << endl;
        cout << "\t3. sprite \t\t\t\t\t45/-" << endl;
        cout << "\t4. pepsi \t\t\t\t\t40/-" << endl;
        cout << "\t\tPress 0 if You Complet Order" << endl;
        cout << "\t\tPress 8 if You Cancel Order" << endl
             << endl;
        cout << "\n";

        cout << "Your Order : ";
        cin >> order;

        switch (order)
        {
        case 1:
            cout << "Enter Quantity : ";
            cin >> n;
            a[4] += n;
            items[4] = "coca cola";
            bill = bill + (n * 25);
            break;
        case 2:
            cout << "Enter Quantity : ";
            cin >> n;
            a[5] += n;
            items[5] = "thums up";
            bill = bill + (n * 35);
            break;
        case 3:
            cout << "Enter Quantity : ";
            cin >> n;
            a[6] += n;
            items[6] = "sprite";
            bill = bill + (n * 45);
            break;
        case 4:
            cout << "Enter Quantity : ";
            cin >> n;
            a[7] += n;
            items[7] = "pepsi";
            bill = bill + (n * 40);
            break;

        case 0:
            break;
        case 8:
            bill = bill;
            break;
        default:
            cout << "your Choice is Wrong .......\n";
            break;
        }
        return bill;
    }
    int Burgers()
    {
        cout << "\t\t\t     Burgers" << endl;
        cout << "\t\t\t______" << endl;

        cout << "\t\tItem\t\t\t\t\t\tPrice" << endl;
        cout << "\t1. mcspicy paneer burger \t\t\t\t295/-" << endl;
        cout << "\t2. big spicy paneer wrap \t\t\t\t385/-" << endl;
        cout << "\t3. veg maharaja mac \t\t\t\t\t500/-" << endl;
        cout << "\t4. double aloo tikki burger \t\t\t\t800/-" << endl;
        cout << "\t\tPress 0 if You Complet Order" << endl;
        cout << "\t\tPress 8 if You Cancel Order" << endl
             << endl;
        cout << "\n";

        cout << "Your Order : ";
        cin >> order;

        switch (order)
        {
        case 1:
            cout << "Enter Quantity : ";
            cin >> n;
            a[8] += n;
            items[8] = "mcspicy paneer burger";
            bill = bill + (n * 295);
            break;
        case 2:
            cout << "Enter Quantity : ";
            cin >> n;
            a[9] += n;
            items[9] = "big spicy paneer wrap";
            bill = bill + (n * 385);
            break;
        case 3:
            cout << "Enter Quantity : ";
            cin >> n;
            a[10] += n;
            items[10] = "veg maharaja mac";
            bill = bill + (n * 500);
            break;
        case 4:
            cout << "Enter Quantity : ";
            cin >> n;
            a[11] += n;
            items[11] = "double aloo tikki burger";
            bill = bill + (n * 800);
            break;
        case 0:
            break;
        case 8:
            bill = bill;
            break;
        default:
            cout << "your Choice is Wrong .......\n";
            break;
        }
        return bill;
    }
    int Pizza()
    {
        cout << "\t\t\t    Pizza" << endl;
        cout << "\t\t\t_____" << endl;
        cout << "\t\tItem\t\t\t\t\tPrice" << endl;
        cout << "\t1. Margherita \t\t\t\t\t900/-" << endl;
        cout << "\t2. Double Cheese Margherita \t\t\t1200/-" << endl;
        cout << "\t3. mexican green wave \t\t\t\t1400/-" << endl;
        cout << "\t4. cheese n corn \t\t\t\t1600/-" << endl;
        cout << "\t5. Paneer makhani \t\t\t\t1700/-" << endl;
        cout << "\t\tPress 0 if You Complet Order" << endl;
        cout << "\t\tPress 8 if You Cancel Order" << endl
             << endl;

        cout << "Your Order : ";
        cin >> order;

        switch (order)
        {
        case 1:
            cout << "Enter Quantity : ";
            cin >> n;
            a[12] += n;
            items[12] = "Margherita";
            bill = bill + (n * 900);
            break;
        case 2:
            cout << "Enter Quantity : ";
            cin >> n;
            a[13] += n;
            items[13] = "Double Cheese Margherita";
            bill = bill + (n * 1200);
            break;
        case 3:
            cout << "Enter Quantity : ";
            cin >> n;
            a[14] += n;
            items[14] = "mexican green wave";
            bill = bill + (n * 1400);
            break;
        case 4:
            cout << "Enter Quantity : ";
            cin >> n;
            a[15] += n;
            items[15] = "cheese n corn";
            bill = bill + (n * 1600);
            break;
        case 5:
            cout << "Enter Quantity : ";
            cin >> n;
            a[16] += n;
            items[16] = "Paneer makhani";
            bill = bill + (n * 1700);
            break;

        case 0:
            break;
        case 8:
            bill = bill;
            break;
        default:
            cout << "your Choice is Wrong .......\n";
            break;
        }
        return bill;
    }
    int italian_Sizzler()
    {
        cout << "\t\t\t    italian sizzler" << endl;
        cout << "\t\t\t_________" << endl;
        cout << "\t\tItem\t\t\t\t\tPrice" << endl;
        cout << "\t1. pasta sizzler \t\t\t\t200/-" << endl;
        cout << "\t2. jain italian sizzler \t\t\t500/-" << endl;
        cout << "\t3. red hot italian sizzler \t\t\t800/-" << endl;
        cout << "\t\tPress 0 if You Complet Order" << endl;
        cout << "\t\tPress 8 if You Cancel Order" << endl
             << endl;
        cout << "\n";

        cout << "Your Order : ";
        cin >> order;

        switch (order)
        {
        case 1:
            cout << "Enter Quantity : ";
            cin >> n;
            a[17] += n;
            items[17] = "pasta sizzler";
            bill = bill + (n * 200);
            break;
        case 2:
            cout << "Enter Quantity : ";
            cin >> n;
            a[18] += n;
            items[18] = "jain italian sizzler ";
            bill = bill + (n * 500);
            break;
        case 3:
            cout << "Enter Quantity : ";
            cin >> n;
            a[19] += n;
            items[19] = "red hot italian sizzler";
            bill = bill + (n * 800);
            break;

        case 0:
            break;
        case 8:
            bill = bill;
            break;
        default:
            cout << "your Choice is Wrong .......\n";
            break;
        }
        return bill;
    }
    int cancel()
    {
        for (int i = 0; i < 20; i++)
        {
            if (a[i] > 0)
            {
                a[i] = 0;
                items[i] = "";
            }
        }
        return bill = 0;
    }
    int Discount(int b)
    {
        if (b >= 5000)
        {
            Disc = b * 0.1;
        }
        else
        {
            Disc = 0;
        }

        return Disc;
    }
    int Gst(int b)
    {
        SGst = round(b * 0.025);
        IGst = round(b * 0.025);
        T_Gst = SGst + IGst;
        return T_Gst;
    }
    int Final_Bill(int b, int Disc_Amt, int gst)
    {
        FBill = b - Disc_Amt + gst;
        return FBill;
    }
    void Thankyou()
    {
        cout << "\n\t*\tThank You for Visiting Us...." << endl;
        cout << "\t*\tvisit Again...." << endl;
    }
    void Get_order()
    {
        cout << "\n\t\t\t\tYour Orderd Details : " << endl;
        cout << "\n\t\t\t*************\n";
        for (int i = 0; i <= 19; i++)
        {
            if (!items[i].empty())
                cout << items[i] << " :-> " << a[i] << endl;
        }
    }
};

int main()
{
    Restaurant R;
    int ch, b = 0, gst = 0, Disc_Amt = 0, Bill = 0, x = 0;
    R.set_detail();
    cout << "\n\t\t\tMENU" << endl;
    cout << "\t\t--------------------";
    cout << "\n";

    do
    {
        cout << "\n\t1. Steaming Soup" << endl;
        cout << "\t2. Soft drink" << endl;
        cout << "\t3. Burgers" << endl;
        cout << "\t4. Pizza" << endl;
        cout << "\t5. italian sizzler" << endl;
        cout << "\t\tPress 0 if You Complet Order" << endl;
        cout << "\t\tPress 8 if You Cancel Order" << endl
             << endl;
        cout << "Enter Your Choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            x = 0;
            b = R.Soup();
            break;
        case 2:
            x = 0;
            b = R.Soft_drink();
            break;
        case 3:
            x = 0;
            b = R.Burgers();
            break;
        case 4:
            x = 0;
            b = R.Pizza();
            break;
        case 5:
            x = 0;
            b = R.italian_Sizzler();
            break;
        case 8:
            x = 1;
            b = R.cancel();
            break;
        case 0:
            break;
        default:
            cout << "your chice is Wrong .......\n";
            break;
        }
    } while (ch != 0);
    Disc_Amt = R.Discount(b);
    gst = R.Gst(b - Disc_Amt);
    Bill = R.Final_Bill(b, Disc_Amt, gst);
    R.get_detail();
    R.Get_order();
    cout << "\n\n\tBill" << endl;
    cout << "Your Actual Bill \t: " << b << endl;
    cout << "Your Disc \t\t: " << Disc_Amt << endl;
    cout << "After Discount \t\t: " << b - Disc_Amt << endl;
    cout << "SGST \t\t\t: " << gst / 2 << endl;
    cout << "IGST \t\t\t: " << gst / 2 << endl;
    cout << "Total GST is \t\t: " << gst << endl;
    cout << "Your Final Bill is \t: " << Bill << endl;
    R.Thankyou();
}