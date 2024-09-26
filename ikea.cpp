/* 
Names: Tyler Zhang and AJ Sinha
Program Name: Can We Build It? Yes We Can!
Date: 9/26/24
Extra: Utilizes functions to make code more organized and for modularity
*/
#include <iostream>
using namespace std;
// A rounding function that rounds to 2 decimal places
float round(float var)
{
    float value = (int) (var * 100 + .5);
    return (float) value / 100;
}
void printBill(int item_count, float final_cost) {
    if(item_count == 0){
        cout << "Really Dude?" << endl;
    }
    else{
        cout << "Here is your bill." << endl;    
        cout << "\t Number of items ordered: " << item_count << endl;
        cout << "\t Sub total: " << final_cost << endl;
        cout << "\t The NJ Sales Tax is 6.625%."<< endl;
        // Calculates extra sales tax cost by changing the sales tax percentage to a decimal and multiplying it by the total 
        cout << "\t Your final total is: $" << round(final_cost + (final_cost * 0.06625)) << endl;
        cout << "Thank you for shopping at the IKEA Kiosk." << endl;
    }
}
void orderMessage() {
    cout << "What would you like to order?" << endl;
    cout << "We have Standing Desks, Blackout Curtains, Tabletops, and Table Legs"<< endl;
    cout << "Press 0 to stop purchasing" << endl;
    cout << "Press 1 for Standing Desks ($460, $480, $500), 2 for Blackout Curtains ($45, $55), 3 for Tabletops ($70), and 4 for Table Legs ($20)."<< endl;
}

int main() {
    cout << "Welcome to the IKEA Kiosk! We sell a variety of items that you can use for your home. " << endl;
    int total_items = 0;
    int selection, sel2;
    float total_cost = 0;
    while (true) {
        orderMessage();
        cin >> selection;
        // Checks if user has inputted 0, will stop the shopping if they do
        if (selection == 0) {
            break;
        }
    
        else if(selection == 1){
            cout << "Standing Desk chosen. 1 for Small ($460), 2 for Medium ($480), 3 for Large ($500)." << endl;
            cin >> sel2;
            int cur_amount;
            if(sel2 == 1){
                cout << "How many would you like?" << endl;
                cin >> cur_amount;
                total_items += cur_amount;
                total_cost += (cur_amount * 460);
                cout << cur_amount +" small Standing Desk/s added." << endl ;
            }
            
            else if(sel2 == 2){
                cout << "How many would you like?" << endl;
                cin >> cur_amount;
                total_items += cur_amount;
                total_cost+=(cur_amount*480);
                cout << cur_amount << " medium Standing Desk/s added." << endl;
            }

            else if(sel2 == 3){
                cout << "How many would you like?" << endl;
                cin >> cur_amount;
                total_items += cur_amount;
                total_cost+=(cur_amount*500);
                cout << cur_amount << " large Standing Desk/s added." << endl;
            }
        }

        else if(selection == 2){
            cout << "Blackout Curtains chosen. Every inch is a dollar (ranges from 45 to 54 inches). Input the number of inches you want for curtains." << endl;
            cin >> sel2;
            int cur_amount;
            cout << "How many would you like?" << endl;
            cin >> cur_amount;
            total_items += cur_amount;
            total_cost+=sel2;
            cout << cur_amount << " " << sel2 << " inch Blackout Curtain added." << endl;
        }
        
        else if(selection == 3){
            cout << "Tabletops chosen ($70). 1 for Wooden, 2 for Marble, 3 for Granite"<< endl;
            cin >> sel2;
            int cur_amount;
            if(sel2 == 1){
                cout << "How many would you like?" << endl;
                cin >> cur_amount;
                total_items += cur_amount;
                total_cost+= (cur_amount*70);
                cout << cur_amount << " Wooden Tabletop/s chosen." << endl;
            }

            else if(sel2 == 2){
                cout << "How many would you like?" << endl;
                cin >> cur_amount;
                total_items += cur_amount;
                total_cost+= (cur_amount*70);
                cout << cur_amount << " Marble Tabletop/s chosen." << endl;
            }

            else if(sel2 == 3){
                cout << "How many would you like?" << endl;
                cin >> cur_amount;
                total_items += cur_amount;
                total_cost+= (cur_amount*70);
                cout << cur_amount <<" Granite Tabletop/s chosen." << endl;
            }
        }

        else if( selection == 4){
            cout << "Table Legs chosen ($20). 1 for Brown, 2 for Maroon, and 3 for Rust." << endl;
            cin >> sel2;
            int cur_amount;
            if(sel2 == 1){
                cout << "How many would you like?" << endl;
                cin >> cur_amount;
                total_items += cur_amount;
                total_cost+=(cur_amount*20);
                cout << cur_amount << " Brown set/s of Table Legs chosen."<< endl;
            }
            
            else if(sel2 == 2){
                cout << "How many would you like?" << endl;
                cin >> cur_amount;
                total_items += cur_amount;
                total_cost+=(cur_amount*20);
                cout << cur_amount << " Maroon set/s of Table Legs chosen."<< endl;
            }
            
            else if(sel2 == 3){
                cout << "How many would you like?" << endl;
                cin >> cur_amount;
                total_items += cur_amount;
                total_cost+=(cur_amount*20);
                cout << cur_amount << " Rust set/s of Table Legs chosen." << endl;
            }
        }
    }
    printBill(total_items, total_cost);
    return 0;
}