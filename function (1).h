#include <iostream>

using namespace std;

/////////////////////////////////// [ ASSESSING VARIOUS FUNCTIONS DEFINED BY ME ] ///////////////////////////////////////////


void Adminlogin() ;				// admin.cpp		{ access to admin functions. }
void Employeelogin();				// employee.cpp		{ access to employee functions. }
void std_stafflogin();				// staff.cpp		{ access to user functions. }
int ADMIN_VERIFICATION_1();			// admin.cpp		{ access to admin passwords file}
int ADMIN_VERIFICATION_2();			// admin.cpp		{ access to employee passwords file}
int ADMIN_VERIFICATION_3();			// admin.cpp		{ access to user / staff passwords file}


///////////////////////////////////// [* DISPLAY MENU INCLUDED IN-ALL *] ////////////////////////////////////////////////////

void display_stock();			// defined in employee.cpp [ 1521-1585 ]

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////// [ ADMIN FUNCTIONS ]***********


void adminMenu();			// [ 1 ]	admin.cpp	{ local main for admin functions. }
void managestock();			// [ 2 ]	admin.cpp	{ similarity of two functons. }
void notification();			// [ 3 ]	admin.cpp	{ gen. notification for item lower in quantity. }
void orderitem();			// [ 4 ]	admin.cpp       { order item lower in quantity. }
void management();			// [ 5 ]	admin.cpp	{ similar to the manage stock. }
void credentials();			// [ 6 ]	admin.cpp	{ change the credentials of all. }
void funfacts();			// [ 7 ]	admin.cpp	{ gen. interesting notifications. }	
void complain();			// [ 8 ]	staff.cpp	{ reviews can only be read and responded. }
void best_seller();			// [ 9 ]	admin.cpp	{ see the higest deller employee }
void track_sales();			// [ 10 ]	admin.cpp	{ track the salesper day and total sales }.

void admin_credentials();			// admin.cpp ( 1712-1756 )

/////////////// [ EMPLOYEE FUNCTONS ]***********


void employeeMenu();			// employee.cpp		{local main for employee functions. }

void take_order();			// [ 1 ]		{ can take orders directly from customers. }
void low_quantity();			// [ 3 ]		{ can see the lower quantity products notifications. }

void emp_credentials();			// admin.cpp		{ for changing the passwords and names. admin only }

///////////// [ USER-STAFF FUNCTIONS ]**********


void std_staffMenu();			// staff.cpp		{ local main for user functions. }

void search_order();			// [ 1 ] search and order food.
void review();				// [ 2 ] complaints. 
void pre_order();			// [ 4 ] online / scheduled orders.
void chit_chats();			// [ 5 ] see interesting notifications.
void games();				// [ 6 ] play online games.

void user_credentials();			// admin.cpp 

void new_user();			// main.cpp

//////////////////////////////////////// [ FUNCTION COMMON IN 3-CASES ] /////////////////////////////////////////////////

void see_response();			// staff.cpp    for seeing response user.only.

void search_item();			// [ 2,3 ]	SAME FOR { STAFF / STUDENT & EMPLOYEE } FUNCTION.

void online_orders();			// [ 4 ]		// SIMILAR FOR ADMIN AND EMPLOYEE.

void responseOrder();				// employee.cpp


/////////////////////////////////////// *[ SUB-FUNCTIONS OF ADMIN ]* ////////////////////////////////////////////////////



void del_item();			// delete item from stock ( existing one ).
void add_item();			// add new item to the stock.
void update_menu();			// update already existing item like ( quantity , price )


void day_sales();		// FOR DAY SALES.

void total_sales();		// FOR OVERALL SALES.

void stock_price();		// FOR CALCULATING THE TOTAL PRICE OF ITEMS IN STOCK.


			
void arrange(int , int No_Items[], char iT_Name[][30], double Price[], int Total_Price[]);	// sort on basis of quantity.


/////////////////////////////////////////////*[ SALES TRACKING FUNCTIONS ]* //////////////////////////////////////////


void monday_sales();
void tuesday_sales();
void wed_sales();
void thursday_sales();
void friday_sales();
void sat_sales();
void sun_sales();

void buttons();


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

