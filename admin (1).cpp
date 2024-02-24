#include "header.h"


char nameA[100], passA[100];			// DECLEARING GLOBALY SO THAT I CAN USE IT IN VARIOUS PURPOSE LIKE ORDERS.


////////////////////////////////////////////// [ ADMIN-FUNCTIONS DEFINITIONS ] /////////////////////////////////////////////

void Adminlogin() 
{

    char admin[100];
    char password[100];
    
    bool login = false;
    
    int count = 4 ;

    do{

        cout<<"\n ENTER THE ADMIN NAME : ";
        cin>>nameA;
        cout<<"\n ENTER THE ADMIN PASSWORD : ";
        cin>>passA;

        ifstream pass("admin_pass.txt" , ios::in );

        while(!pass.eof() )
        {
            
            pass >> admin >> password;
            
            if ( ( strcmp( admin, nameA ) == 0 ) && ( strcmp(password, passA) == 0 ) )
            {
                login = true;
                cout<<"\n ****** VERIFICATION COMPLETED ***** \n\n";
                break;  
            }
        }
         
	count -- ;				// DECRIMENTING THE COUNTER EACH TIME.
	
	if(count == 0 )				// RESTRICTING TO ONLY THREE ATTEMPTS.
        {
        	cout<<"n\t NO MORE CHANCE WILL BE ALLOCATED. \n\n";
        	return;
        }
	
        if(!login)
        {
            cout<<"\n WRONG CREDENTIALS PLEASE RE-ENTER THE ADMIN NAME AND PASSWORD.\n";
            cout<<"\n                      !!!  BE-AWARE !!!    \n";
            cout<<"\t YOU ARE LEFT WITH ONLY  [ "<< count - 1 <<" ]  CHANCES.  \n";
        }
        
        
        
        pass.close();

    }while(!login);
 
 adminMenu();
    
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////// [ AUTHENTICATION ++ ] ///////////////////////////////////////////////////


int ADMIN_VERIFICATION_1() 
{
    
    char admin[100];
    char password[100];
    
    bool login = false;
    
    int count = 4 ;

    do{
	
	cout<<"\n LET US MAKE SURE THAT WHO ARE YOU ? \n";
	cout<<"\n BECAUSE THIS SITE IS MEANT ONLY FOR THE ADMIN. \n";
	
        cout<<"\n ENTER THE ADMIN NAME : ";
        cin>>nameA;
        cout<<"\n ENTER THE ADMIN PASSWORD : ";
        cin>>passA;

        ifstream f("admin_pass.txt");				// OPENING FILE IN READING MODE.

        while(!f.eof() )
        {							// VERIFICATION PROCESS.
        
            f>>admin>>password;
            
            if( ( strcmp( admin, nameA ) == 0 ) && ( strcmp(password, passA) == 0 ) )
            {
                login = true;
                cout<<"\n ****** VERIFICATION COMPLETED ***** \n\n";
                break;  
            }
        }
        
        f.close();					// CLOSING FILE TO PREVENT CORRUPTION.

        count -- ;					// DECRIMENTING THE COUNTER EACH TIME.
        
        if(count == 0 )					// RESTRICTING TO ONLY THREE ATTEMPTS.
        {
        	cout<<"n\t NO MORE CHANCE WILL BE ALLOCATED. \n\n";
        	return 0;
        }
        
        if(!login)
        {
            cout<<"\n WRONG CREDENTIALS PLEASE RE-ENTER THE ADMIN NAME AND PASSWORD.\n";
            cout<<"\n                      !!!  BE-AWARE !!!    \n";
            cout<<"\t YOU ARE LEFT WITH ONLY  [ "<< count - 1 <<" ]  CHANCES.  \n";
        }
        
        

    }while(!login);
    
	cout<<"\n #### YOU NOW HAVE ACCESS TO THE STUDENT-STAFF USERNAME & PASSWORDS. \n";
    	cout<<"\n           NOTE THAT THESE FILES ARE CONFIDENTIAL. \n";
	
	const int size = 30;
	char name[20][size];					// FOR READING FILE DATA.
	char pass[20][size];
	
	ifstream o("admin_pass.txt" );				// OPENING FILE IN READING MODE.
	
	if(!o)
	{
		cout<<"\n FILE NOT FOUND. \n";
		cout<<" CHECK THE FILE NAME.";
	}
	
	int i=0;
	cout<<"\t\t | "<<"-----------------"<<" | "<<endl;
	while( o >> name[i] >> pass[i]  )			// POPULATING THE ARRAY DATA.
	{	 	
	 	
	 	
	 	cout<<"\t\t | "<<name[i]<<"  "<<pass[i] <<endl;
	 	cout<<"\t\t | "<<"-----------------"<<" | "<<endl;
	 	i++ ;	
	}
	o.close();						// CLOSING FILE TO PREVENT CORRUPTION.
 	
 	return 1;

}


////////////////////////////////////////////////////////////////////////////////


int ADMIN_VERIFICATION_2() 
{
    
    char admin[100];
    char password[100];
    
    bool login = false;
    
    int count = 4 ;

    do {
	
	cout<<"\n LET US MAKE SURE THAT WHO ARE YOU ? \n";
	cout<<"\n BECAUSE THIS SITE IS MEANT ONLY FOR THE ADMIN. \n";
	
        cout<<"\n ENTER THE ADMIN NAME : ";
        cin>>nameA;
        cout<<"\n ENTER THE ADMIN PASSWORD : ";
        cin>>passA;

        ifstream f("admin_pass.txt");

        while(!f.eof() )
        {
            f>>admin>>password;
            
            if( ( strcmp( admin, nameA ) == 0 ) && ( strcmp(password, passA) == 0 ) )
            {
                login = true;
                cout<<"\n ****** VERIFICATION COMPLETED ***** \n\n";
                break;  
            }
        }
        f.close();				// CLOSING FILE TO PREVENT CORRUPTION.
        
        count -- ;				// DECRIMENTING THE COUNTER EACH TIME.
	
	if(count == 0 )				// RESTRICTING TO ONLY THREE ATTEMPTS.
        {
        	cout<<"n\t NO MORE CHANCE WILL BE ALLOCATED. \n\n";
        	return 0;
        }
	
        if(!login)
        {
            cout<<"\n WRONG CREDENTIALS PLEASE RE-ENTER THE ADMIN NAME AND PASSWORD.\n";
            cout<<"\n                      !!!  BE-AWARE !!!    \n";
            cout<<"\t YOU ARE LEFT WITH ONLY  [ "<< count - 1 <<" ]  CHANCES.  \n";
        }
        
        

    }while(!login);
    
	cout<<"\n #### YOU NOW HAVE ACCESS TO THE STUDENT-STAFF USERNAME & PASSWORDS. \n";
    	cout<<"\n           NOTE THAT THESE FILES ARE CONFIDENTIAL. \n";
	
	const int size = 30;
	char name[20][size];					// FOR READING FILE DATA.
	char pass[20][size];
	
	ifstream o("employee_pass.txt" );			// OPENING FILE IN READING MODE.
	
	if(!o)
	{
		cout<<"\n FILE NOT FOUND. \n";
		cout<<" CHECK THE FILE NAME.";
	}
	
	int i=0;
	cout<<"\t\t | "<<"-----------------"<<" | "<<endl;
	while( o >> name[i] >> pass[i]  )			// POPULATING THE ARRAY DATA.
	{	 	
	 	
	 	
	 	cout<<"\t\t | "<<name[i]<<"    "<<pass[i] <<endl;
	 	cout<<"\t\t | "<<"-----------------"<<" | "<<endl;
	 	i++ ;	
	}
	o.close();						// CLOSING FILE TO PREVENT CORRUPTION.

 	
 	return 1;
   
}


//////////////////////////////////////////////////////////////////////////////////


int ADMIN_VERIFICATION_3() 
{
    
    char admin[100];
    char password[100];
    
    bool login = false;
    
    int count = 4 ;

    do {
	
	cout<<"\n LET US MAKE SURE THAT WHO ARE YOU ? \n";
	cout<<"\n BECAUSE THIS SITE IS MEANT ONLY FOR THE ADMIN. \n";
	
        cout<<"\n ENTER THE ADMIN NAME : ";
        cin>>nameA;
        cout<<"\n ENTER THE ADMIN PASSWORD : ";
        cin>>passA;

        ifstream f("admin_pass.txt");

        while(!f.eof() )
        {
              f>>admin>>password;
            
            if( ( strcmp( admin, nameA ) == 0 ) && ( strcmp(password, passA) == 0 ) )
            {
                login = true;
                cout<<"\n ****** VERIFICATION COMPLETED ***** \n\n";
                break;  
            }
        }
        
        f.close();				// CLOSING FILE TO PREVENT CORRUPTION.
        
        count -- ;
        
        if(count == 0)				// RESTRICTING TO ONLY THREE ATTEMPTS.
        {
        	cout<<"n\t NO MORE CHANCE WILL BE ALLOCATED. \n\n";
        	return 0;
        }				// DECRIMENTING THE COUNTER EACH TIME.

        if(!login)
        {
            cout<<"\n WRONG CREDENTIALS PLEASE RE-ENTER THE ADMIN NAME AND PASSWORD.\n";
            cout<<"\n                      !!!  BE-AWARE !!!    \n";
            cout<<"\t YOU ARE LEFT WITH ONLY  [ "<< count - 1 <<" ]  CHANCES.  \n";
        }
        

    }while(!login);
    
    cout<<"\n #### YOU NOW HAVE ACCESS TO THE STUDENT-STAFF USERNAME & PASSWORDS. \n";
    cout<<"\n           NOTE THAT THESE FILES ARE CONFIDENTIAL. \n";
    
        const int size = 30;
	char name[20][size];				// FOR READING FILE DATA.
	char pass[20][size];
	
	int i=0;
	
	ifstream o("user_pass.txt" );		// OPENING FILE IN READING MODE.
	
	if(!o)
	{
		cout<<"\n FILE NOT FOUND. \n";
		cout<<" CHECK THE FILE NAME.";
	}
	
	
	cout<<"\n\n\t\t | "<<"-----------------"<<" | "<<endl;
	
	while( o >> name[i] >> pass[i]  )			// POPULATING THE ARRAY DATA.
	{	 	
	 	cout<<"\t\t | "<<name[i]<<"    "<<pass[i] <<endl;
	 	cout<<"\t\t | "<<"-----------------"<<" | "<<endl;
	 	i++ ;	
	}
	
	o.close();						// CLOSING FILE TO PREVENT CORRUPTION.

 	
 	return 1;
   
}


//////////////////////////////// [* FUNCTION TO DISPLAY THE ADMIN MENU. *] /////////////////////////////////////////////////

void adminMenu()
{

    char choice;
    char exit;

    do{
		
		cout<< "\n\t\t-----------------------------------"; 
		cout<< "\n\t\t| >> WELCOME TO  ADMIN   MENU <<  |";
        	cout<< "\n\t\t-----------------------------------\n\n";

        	cout<<"\t\t -"<<setfill('-')<<setw(57)<<"-"<<setfill(' ')<<endl;
  		cout<<"\t\t | "<<setw(55)<<left<<"<< ENTER THE RESEPCTED CHARACTER TO PROCEED >> "<<"|\n";
  		cout<<"\t\t | "<<setw(55)<<left<<"A. CAFE STOCK MANAGEMENT "<<"|\n";
  		cout<<"\t\t | "<<setw(55)<<left<<"B. GENERATE NOTIFICATION ( If item lower in quantity )"<<"|\n";
  		cout<<"\t\t | "<<setw(55)<<left<<"C. ORDER ITEM [ IF LOWER IN QUANTITY ] "<<"|\n";
  		cout<<"\t\t | "<<setw(55)<<left<<"D. SEARCH, ADD, REMOVE & UPDATE ANY ITEM IN STOCK"<<"|\n";
  		cout<<"\t\t | "<<setw(55)<<left<<"E. ADD OR REMOVE CREDENTIALS OF EMPLOYEE OR STAFF."<<"|\n";
  		cout<<"\t\t | "<<setw(55)<<left<<"F. DISPLAY INTERESTING NOTIFICATIONS"<<"|\n";
  		cout<<"\t\t | "<<setw(55)<<left<<"G. SEE ONLINE ORDERS "<<"|\n";
  		cout<<"\t\t | "<<setw(55)<<left<<"H. HANDLE COMPLAINTS "<<"|\n";
  		cout<<"\t\t | "<<setw(55)<<left<<"I. BEST-SELLER EMPLOYES"<<"|\n";
  		cout<<"\t\t | "<<setw(55)<<left<<"J. TRACK THE SALES RECORD. [ AT ONE-STOP ] "<<"|\n";
  		cout<<"\t\t | "<<setw(55)<<left<<"K. PLAY GAMES [* AMUSEMENT *].  "<<"|\n";
  		cout<<"\t\t | "<<setw(55)<<left<<"L. LOGOUT FROM THE SITE "<<"|\n";
  		cout<<"\t\t -"<<setfill('-')<<setw(57)<<"-"<<setfill(' ')<<endl;
  		
		cin>> choice;
    

        switch (choice)
        {
            case 'A':
            case 'a':						// [ 1 ]
            		managestock();
            		
            break;
            case 'B':
            case 'b':						// [ 2 ]
           	
           		notification();				// WHEN PRODUCT LOW IN QUANTITY.
           		
            break;
            case 'C':
            case 'c':						// [ 3 ]
                	
                	orderitem();
                	
            break;
            case 'D':
            case 'd':						// [ 4 ]
                	
                	cout<<"\n *** WELCOME TO THE STOCK MANAGEMENT PORTAL *** \n\n";
                	management();
                	
            break;
            case 'E':
            case 'e':						// [ 5 ]
                
                	credentials();	
                	
            break;
            case 'F':
            case 'f':						// [ 6 ]
                	
                	funfacts();
                	
            break;
            case 'G':
            case 'g':						// [ 7 ]
                	
                	cout<<"\n\t YOU CAN SEE AND RESPOND TO THE ONLINE ORDERS FROM HERE. \n";
                	online_orders();
                	responseOrder();
                	
            break;
            case 'H':
            case 'h':						// [ 8 ]
                	
                	complain();
                	
            break;
            case 'I':
            case 'i':						// [ 9 ]
                	
                	best_seller();
                	
            break;
            case 'J':						// [10]
            case 'j':
            
            		track_sales();
            
            break;
            case 'K':						// [11]
            case 'k':
            
            		games();
            
            break;           
            case 'L':
            case 'l':						// [ 12 ]
                	  	
  			cout<<"\n\t\t\t -"<<setfill('-')<<setw(50)<<"-"<<setfill(' ')<<endl;
			cout<<"\t\t\t | "<<setw(48)<<left<<"    ** LOGGING OUT OF THE SITE. ** "<<"|\n";
  			cout<<"\t\t\t | "<<setw(48)<<left<<"         && THANKS FOR COMING && "<<"|\n";
  			cout<<"\t\t\t | "<<setw(48)<<left<<"\t           خدا حافظ "<<"   |\n";
  			cout<<"\t\t\t -"<<setfill('-')<<setw(50)<<"-"<<setfill(' ')<<endl<<endl;
  			break;
                	
            
            default:
            
		 	cout<<"\n\t\t--------------------------------------\n";
		  	cout<<"\t\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
			cout<<"\t\t----------------------------------------\n";
			break;
          
       }
         
       // [ ASKING USER IF HE/SHE WANTS TO QUIT. ]
              
	cout<< "\n\t\t---------------------------------------------------"; 
        cout<< "\n\t\t|  DO YOU WANT TO EXIT FROM ADMIN MENU ? [ Y/N ]  |";
        cout<< "\n\t\t---------------------------------------------------\n\n";
	cin>>exit;
	if(exit=='y' || exit=='Y')
	{
		cout<<"\n\t\t -"<<setfill('-')<<setw(50)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(48)<<left<<"         ** EXITING THE ADMIN MENU. ** "<<"|\n";
	  	cout<<"\t\t | "<<setw(48)<<left<<"             && THANKS FOR COMING && "<<"|\n";
	  	cout<<"\t\t | "<<setw(48)<<left<<"\t              خدا حافظ "<<"   |\n";
	  	cout<<"\t\t -"<<setfill('-')<<setw(50)<<"-"<<setfill(' ')<<endl<<endl;
	  	break;
	
	}
	else if(exit=='n' || exit=='N')
	{
		cout<<"\n ******* SELECT THE FUNCTION YOU WANT TO PERFORM AGAIN ******* \n";
	
	}continue;



    }while(1);


}

////////////////////////////////////////// [* STOCK HANDLING *] //////////////////////////////////////////////////////////

void managestock()			// [ 1 ] #####################
{
	char w;
	cout<<"\n *** [ WELCOME TO THE STOCK MANAGEMENT MENU ] *** \n\n";
	cout<<" WHAT OPERATION DO YOU WANT TO PERFORM ? \n";
	cout<<"\t ENTER >> \n\t [1]. TO SEE THE STOCK. \n\t [2]. TO HANDLE STOCK AT ONE PLACE. \n\t [3]. EXIT. \n\n";
	cin>>w;
	
	switch(w)
	{
		case '1':
			
				display_stock();
		
		break;
		case '2':
		
				management();
		
		break;
		case '3':
			cout<<"\n *** [ EXITING FROM THE STOCK MANAGEMENT MENU ] *** \n";
		break;
		default:
			cout<<"\n\t\t--------------------------------------\n";
		  	cout<<"\t\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
			cout<<"\t\t----------------------------------------\n";
			managestock();
		
	}
	
}

/////////////////////////////////// [* GENERATE NOTIFICATION FOR ITEM LOWER IN  QUANTITY *] /////////////////////////////

void notification()					// [ 2 ] #############################			
{
    char loader[200];
    char iT_Name[30][30];
    const int a = 30;
    double Price[a];
    int No_Items[a];
    int Total_Price[a];
    int i = 0;

    fstream stock("stock.txt", ios::in);

    if(!stock)
    {
        cout<<"\n !!! FILE NOT FOUND !!!";
        cout<<"\n CHECK THE FILE NAME.";
    }
    else
    {
        				// LOADING DATA IN ARRAYS FROM FILE.
        stock.getline(loader, 100, '\n');

        while(stock.getline(iT_Name[i], 20, ' '), stock >> Price[i] >> No_Items[i] >>Total_Price[i])
        {
            stock.ignore();
            i++;
        }
    }

    stock.close();					// CLOSING FILE TO AVOID CORRUPTION.
    
    arrange(i, No_Items, iT_Name, Price, Total_Price);	// CALLING THE SORT FUNCTION [BY-QUANTITY].

    cout<<setw(6)<<"\n INDEX "<<loader<<endl;		// DISPLAYING THE MENU.
    
    for(int k=0 ; k<i ; k++)					// DISPLAY THE FILE CONTENT STORED IN ARRAYS.
    {				// to prevent variable data from changing.
    
        const char* color = ANSI_COLOR_RESET;			// NON-CONSTANT POINTER TO CONSTANT DATA.

        if(No_Items[k] == 0)
        {
            color = ANSI_COLOR_YELLOW;				// ASSINING THE YELLOW COLOR FOR EMPTY.
        }
        else if( (No_Items[k] > 0 ) && ( No_Items[k] <= 20) )
        {
            color = ANSI_COLOR_RED;				// ASSINING THE RED COLOR FOR THRESHOLD.
        }
        else
        {
            color = ANSI_COLOR_GREEN;				// ASSINING GREEN COLOR TO NORMAL PRODUCTS.
        }

        cout<<color<<" [ "<< setw(2) <<k + 1<<" ] "<<setw(10) <<iT_Name[k] <<"  |  "<< setw(5) << Price[k] << "  |  "
             << setw(5) << No_Items[k] <<"  |  "<< setw(7) << Total_Price[k] << ANSI_COLOR_RESET <<endl;
    }

    const int g = 20;
    char search[g];
    cout<<"\n IN ORDER TO GENERATE NOTIFICATION :: ";				// GETTING THE KEY.
    cout<<"\n\n ENTER THE PRODUCT WHICH IS LOWER IN QUANTITY >>>   ::   ";
    cin>>search;
    int p = 0;

    while(p < i)
    {
        if(strcmp(iT_Name[p], search) == 0)				// DETERMINING THE FOOD EXISTANCE.
        {
            break;
        }
        else
        {
        	p++;
        }
    }

    if(p == i)
    {
        cout<<"\n ITEM NOT FOUND IN THE CART. \n\n";
    }
    else
    {
        cout<<"\n ITEM FOUND IN THE CART AT [ "<< p+1 <<" ] \n\n";		// INCRIMENT IN INDEX(+1).
        
        const int size = 200;
        char noti[size];
        
        cout<<"\n ENTER THE NOTIFICATION >>> \n";
	cin.ignore();
	cin.getline(noti, size);
	
	ofstream o("orderItem.txt", ios::app);		// OPEN IN APPEND MODE TO AVOID TRUNKING.
	
	if (o.is_open() )
	{							// WRITING IN FILE.
	
        	o<<" ITEM TO BE ORDERED :: { "<<search<<" } BY >> [ "<<nameA<<" ] ::  "<<noti<<endl;
        	
        	o.close();				// CLOSING FILE TO AVOID CORRUPTION.
        }
        else
        {
        	cout<<"\n FILE NOT FOUND. \n";
        }
        
    }
    
    
    return;
    
}

////////////////////////////////////////// [* ORDER ITEM LOWER IN QUANTITY *] ////////////////////////////////////////////

void orderitem()			// [ 3 ] #####################
{
	char choice;
	cout<<"\n *** WELCOME TO THE ORDER ITEM MENU [* ADMIN ONLY FUNCTIONS. *]  \n";
	cout<<"\n SEE THE STOCK AND ORDER THE ITEM THAT LOWERS IN QUANTITY. \n";
	
	display_stock();				// CALLING THE DISPLAY STOCK FUNCTION.
	
	cout<<"\n   DO YOU WANT TO ORDER THE ITEM ? \n";
	cout<<"       THAT WAS LOWER IN QUANTITY. \n";
	cout<<"\n ENTER [Y/y] FOR YES AND [N/n] FOR NO. \n";
	cin>>choice;
	
	switch(choice)
	{
		case 'Y':
		case 'y':
		{
			ofstream g("placeOrder.txt" , ios::app );		// OPENING FILE IN APPEND MODE.
			
			if(!g)							// VALIDATING FILE EXISTANCE.
			{
				cout<<"\n ERROR OPENING FILE. \n";
				cout<<" CHECK THE FILE NAME. \n";
				break;
			}
			else
			{
				const int s = 20 , o = 100 ;
				char pro_name[s];
				char order[o];
				
				cin.ignore();
				cout<<"\n ENTER THE PRODUCT NAME [ONLY]. ID NOT ACCEPTABLE >>> \n";
				cin.getline(pro_name , s );
				
				cout<<"\n ENTER THE [ "<<pro_name<<" ] DETAILS TO PROCEED FURTHER >> :: \n";
				cin.getline(order , o );
				
				g<<" [ "<< pro_name<<" ] "<<order<<endl;	// WRITIN DATA IN THE FILE.
				
				g.close();			// CLOSING FILE TO AVOID CORRUPTION.
			}
			
		break;	
		}
		case 'N':
		case 'n':
		{
			cout<<"\n OK ! YOU CAN OREDR IT LATER WHEN YOU HAVE ENOUGH BUDGET. \n";
			cout<<"                 JUST KIDDING  [ (: ]  \n";
			cout<<"\n               <<<<  خدا حافظ  >>>>  \n\n";
		
		
		break;	
		}
		default:
		{
			cout<<"\n\t\t--------------------------------------\n";
		  	cout<<"\t\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
			cout<<"\t\t----------------------------------------\n";
			break;
		}
		
	}
	
	return ;
	
}


////////////////////////////////////////// [* SEARCH,ADD,REMOVE & UPDATE *] ///////////////////////////////////////////////


void management()			// [ 4 ] #####################
{
	char c;
	char yes;
	
	
	buttons();				// CALLING THE BUTTONS FUNCTION.
	
	cout<<"\t\t -"<<setfill('-')<<setw(32)<<"-"<<setfill(' ')<<endl;
	cout<<"\t\t | "<<setw(30)<<left<<" [ WHAT DO YOU WANT TO DO ? ] "<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<"1. SEARCH ITEM IN STOCK."<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<"2. ADD ITEM TO STOCK."<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<"3. REMOVE ITEM FROM STOCK."<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<"4. UPDATE ANY ITEM IN STOCK."<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<"5. EXIT FROM THE MENU."<<"|\n";
  	cout<<"\t\t -"<<setfill('-')<<setw(32)<<"-"<<setfill(' ')<<endl;
  	
	cin>>c;
	
	switch(c)
	{
		case '1':
		{
			cout<<"\n *** SEARCH ITEMS IN THE STOCK *** \n";
			search_item();
		
		break;	
		}
		case '2':
		{
			cout<<"\n YOU CAN ADD ANY PRODUCT [* TRENDING *] FROM HERE \n";
			add_item();
		
		break;
		}
		case '3':
		{
			cout<<"\n *** YOU CAN REMOVE ANY ITEM IN THE STOCK FROM HERE *** \n";
			del_item();
		
		break;
		}
		case '4':
		{
			cout<<"\n *** YOU CAN UPDATE THE NAME, PRICE, QUANTITY & TOTAL PRICE FROM HERE. *** \n\n";
			update_menu();
		
		break;
		}
		case '5':
		{
			cout<<"\n\t *** EXITING FROM THE MANAGEMENT MENU. \n";
			cout<<"\n <<<<  خدا حافظ  >>>>  \n\n";
			return;
			
		break;	
		}
		default:
			cout<<"\n\t\t--------------------------------------\n";
		  	cout<<"\t\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
			cout<<"\t\t----------------------------------------\n";
			cout<<"\t\t REDIRECTING TO THE STOCK MANAGEMENT MENU. \n";
			
			management();
			
	}
	
	cout<<"\n\t\t--------------------------------------------------\n";
	cout<<"\t\t| DO YOU WANT TO RETURN TO THE MANAGEMENT PORTAL ? |\n";
	cout<<"\t\t|    PROCEED WITH  [Y/Y] AND RETURN WITH  [N/n]    |\n";
	cout<<"\t\t----------------------------------------------------\n";
	
	cin>>yes;
	
	if(yes=='y' || yes=='Y')
	{
		management();
	}
	else if(yes=='N' || yes=='n')
	{
		return;
	}
	else
	{
		cout<<" INVALID INPUT. \n";
		return;
	}
	
	return;
	
}

////////////////////////////////////////// [* CHANGE CREDENTIALS 'employee' *] ////////////////////////////////////////////


void credentials()					// CHANGE PASS.
{
		char choice;
        	                
                buttons();				// CALLING THE BUTTONS FUNCTION.
                
                cout<<"\t\t -"<<setfill('-')<<setw(34)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(33)<<left<<"[ WHAT DO YOU WANT TO CHANGE ? ] "<<"|\n";
  		cout<<"\t\t | "<<setw(33)<<left<<" 1. YOUR OWN NAME/PASS. "<<"|\n";
  		cout<<"\t\t | "<<setw(33)<<left<<" 2. EMPLOYEE NAME/PASS. "<<"|\n";
  		cout<<"\t\t | "<<setw(33)<<left<<" 3. STUDENT_STAFF NAME/PASS . "<<"|\n";
  		cout<<"\t\t -"<<setfill('-')<<setw(34)<<"-"<<setfill(' ')<<endl;

                	cin>>choice;

                	switch(choice)
                	{
                		case '1':
                			
                			int x;
                			x=ADMIN_VERIFICATION_1();
                			
                			if(x==1)
                			{
                				admin_credentials();
                			}
                			else
                			{
                				cout<<"\n\t\t CANNOT GRANT ACCESS BCZ.";
                				cout<<"\n\t\t  YOU ARE NOT THE ADMIN. \n";
                				return;
                			}
                				                		
                		break;
                		case '2':
                		{	
                			int y;
                			y=ADMIN_VERIFICATION_2();
                			
                			if(y==1)
                			{
                				emp_credentials();
                			}
                			else
                			{
                				cout<<"\n\t\t CANNOT GRANT ACCESS BCZ.";
                				cout<<"\n\t\t  YOU ARE NOT THE ADMIN. \n";
                				return;
                			}
                		}	
                		break;
                		case '3':
                		{	
                			int z;
                			z=ADMIN_VERIFICATION_3();
                			
                			if(z==1)
                			{
                				user_credentials();
                			}
                			else
                			{
                				cout<<"\n\t\t CANNOT GRANT ACCESS BCZ.";
                				cout<<"\n\t\t YOU ARE NOT THE ADMIN. \n";
                				return;
                			}

                		}
                		break;
                		case '4':
                		{	
                			cout<< "\n\t\t-----------------------------------"; 
        				cout<< "\n\t\t| >>   GOOD BYE FROM THIS SITE << |";
        				cout<< "\n\t\t-----------------------------------\n\n";
        				return;
                		}
                		break;
                		default:
                		{
                			cout<<"\n\t\t--------------------------------------\n";
		  			cout<<"\t\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
					cout<<"\t\t----------------------------------------\n";
					
                			cout<<" DON'T BE WORRIED. WE ARE RE-DIRECTING YOU TO THE CHOICE MENU. \n";
                			
                			credentials();
                			
                		}
	
                	}
                	
         return;
}


/////////////////////////////////////////


void emp_credentials()				// [ 5 ] #####################
{
    
    const int size = 50;
    char employees[20][size];
    char passwords[20][size];
    
    bool login = false;
    
    char nameE[size];
    char passE[size];

    int n = 0;

    ifstream read("employee_pass.txt" , ios::in );			// READING DATA FROM THE FILE AND STORING IT IN ARRAYS.
    
    while( read >> employees[n] >> passwords[n] )
    {
        read.ignore();
        n++;
    }
    
    read.close();				// CLOSING THE FILE TO PREVENT DATA CORRUPTION.

    do{
        
	
        cout<<"\n\n ENTER THE EMPLOYEE NAME: ";
        cin.ignore();
        cin.getline( nameE , size );
        
        cout<<" ENTER THE EMPLOYEE PASSWORD: ";
        cin.getline( passE , size );

        for( int i = 0 ; i<n ; ++i )			
        {
            if(strcmp(employees[i], nameE) == 0 && strcmp(passwords[i], passE) == 0)
            {
                login = true;
                
                cout<<"\n ****** VERIFICATION COMPLETED ***** \n\n";		// FLAG GREEN [PASSED].

                
                char newPass[size];
                char newName[size];
                
                char del;
                cout<<" DO YOU WANT TO CHANGE HIS/HER NAME AND PASSWORD ? \n";		// ASKING IF CHANGE DEMANDED.
                cout<<"\n ENTER [Y/y] FOR YES OR [N/n] FOR NO. \n";
                cin>>del;
                
                if(del=='Y' || del=='y')
                {
                	cin.ignore();
                	cout<<"\n ENTER THE NEW NAME OF THAT EMPLOYEE >>> ";
                	cin.getline( newName , size );

                	cout<<"\n\n ENTER THE NEW PASSWORD >>> ";
                	cin.getline( newPass , size );
	
                	strcpy(employees[i] , newName );		// COPYING THE DATA OF THE NEW ARRAY.
                	strcpy(passwords[i] , newPass );	// 1st ARRAY COPY THE DATA OF THE 2nd ARRAY.
                	
                	break;
                }
                else if(del=='N' || del=='n')
                {
                	cout<<"\n\n\t <<< YOU CAN DO THIS LATER AS WELL >>> \n";		// EXITTING WITHOUT CHANGING.
                	cout<<"\n\t          <<<<  خدا حافظ  >>>>  \n\n";
                	return;
                }
                else
                {
                	cout<<"\n\t\t--------------------------------------\n";
		  	cout<<"\t\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
			cout<<"\t\t----------------------------------------\n";
                	break;
                }

            }
        }

        if(!login)				// VALIDATING THE USERNAME - PASS.
        {
            
            cout<<"\n WRONG CREDENTIALS. PLEASE RE-ENTER THE EMPLOYEE NAME AND PASSWORD.\n";
            cout<<"\n PRESS ANY KEY TO CONTINUE >>> \n";
        }

    } while(!login);					// FLAG.


    ofstream write("employee_pass.txt" );			// WRITING THE SPECIFIC DATA OF INDEX BACK TO THE FILE.

    for(int i = 0; i < n ; ++i)
    {
        write<<employees[i]<<" "<<passwords[i]<<endl;
    }

    write.close();					// CLOSSING THE FILE TO PREVENT THE CORRUPTION.
    
    cout<<"\n <<< THE NAME OF THE EMPLOYE OR THE PASSWORD NAME HAS BEEN CHANGED >>> \n";
    cout<<"\n >>> THE CHANGES HAVE ALSO BEEN SAVED TO THE FILE TO PREVENT DATA LOSS <<< \n";
    
    
    // The problem that i faced a lot here was that there was an issue displaying because of the same name for naming and writing in the file. It was with the object but it was decleraing the operand wrong like [ << ] insertion operator as illegal.
    return;
    
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////// [* GENERATE NOTIFICATION ' NOTIFICATION HANDLING ' *] /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void funfacts()				// [ 6 ] #####################
{
	const int maxLines = 150;
	const int size = 300;
   	char chat[maxLines][size];
    	int line = 1;
    	int key;
	int choice;
	
	buttons();				// CALLING THE BUTTONS FUNCTION.
	
	cout<<"\t\t -"<<setfill('-')<<setw(32)<<"-"<<setfill(' ')<<endl;
	cout<<"\t\t | "<<setw(30)<<left<<" [ WHAT DO YOU WANT TO DO ? ] "<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<" 1. ADD NOTIFICATIONS. "<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<" 2. VIEW NOTIFICATIONS. "<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<" 3. REMOVE NOTIFICATIONS. "<<"|\n";
  	cout<<"\t\t -"<<setfill('-')<<setw(32)<<"-"<<setfill(' ')<<endl;
  	
	cin>>choice;

	switch (choice)
	{
        	case 1: 		/////// [ ADD ] ///////
        	{
       		    cout<<"\nENTER THE NOTIFICATION >>>>\n";
       		    
        	    fstream o("notification.txt", ios::app);		// OPENING FILE IN APPEND MODE.
        	    
       		    cin.ignore();
       		    
        	    cin.getline(chat[line], size);
        	    
        	    o<< chat[line] <<endl;				// SAVING DATA IN FILE.
        	    
        	    o.close();						// CLOSING FILE TO PREVENT CORRUPTION.
        	   break; 
        	}
        	case 2: 		////////// [ VIEW ] //////////// 
        	{
        	    ifstream d("notification.txt");		// IT IS READING AND DISPLAYING DATA AT THE SAME TIME.

        	    while(line < maxLines && d.getline(chat[line], size))
		   {
			    cout<<" [ "<< line <<" ] "<<chat[line] <<endl;
			    line++;
		   }
        	   break; 
        	}
        	case 3:                     ////////// [ DELETE ] /////////
        	{
        	    ifstream e("notification.txt");
	            line = 0;
	
	            while(e.getline(chat[line], size) && line < maxLines)	// READING AND DISPLAYING FILE AT-ONCE
	            {
	                cout<<" [ "<< line + 1 <<" ] "<<chat[line] <<endl;
	                line++;
	            }

	            cout<<"\nENTER THE NOTIFICATION INDEX YOU WANT TO REMOVE: >>>\n";
	            cin>>key;

	            if(key >= 1 && key <= line)
	            {
	                key -- ; 			// Adjust key to array index [0].
	                
	                ofstream w("notification.txt", ios::out);	// TRUNK THE SPECIFIC LINE FROM THE FILE.
	
	                for(int i = 0; i < line; i++)
	                {
	                    if(i!= key)
	                    {
	                        w<< chat[i]<<endl;
	                    }
	                }
	
	                w.close();				// CLOSING FILE TO PREVENT CORRUPTION.
            	    }
            		else
            		{
                		cout<<"\nINVALID INDEX.\n";
            		}
            		break;
        	}
        	case 4:
        	
        		cout<<"\n <<< EXITING THE NOTIFICATION HANDLING MENU >>> \n";
        		break;
        	
        	default:
            		cout<<"\n\t\t--------------------------------------\n";
		  	cout<<"\t\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
			cout<<"\t\t----------------------------------------\n";
            		
            		funfacts();				// CALLING THE FUNCTION AGAIN.
            	break;
    	}
    	
    	char q;
    	cout<<"\n DO YOU WANT OT BE RE-DIREECTED TO THE NOTIFICATION HANDLING MENU ? \n";
    	cout<<" ENTER [Y/y] FOR YES OR [N/n] FOR QUITING. \n";
    	cin>>q;
    	
    	if(q=='Y' || q=='y')
    	{
    		funfacts();				// MULTIPLE TIMES ASKING.
    	}
    	else
    	{
    		cout<<"\n CASE EXITED SUCCESSFULLY. \n";
    		return;
    	}

}



////////////////////////////////////// [ COMPLAIN FEEDBACK FUNCTION ] //////////////////////////////////////////////////////
		
void complain()				// [ 8 ] #####################
{
       cin.ignore();
	char c;
	cout<<"\n ****** WELCOME TO THE REVIEW SECTION ****** \n\n";
	cout<<" YOU CAN SEE AND RESPOND THE CUSTOMERS REVIEWS FROM HERE. \n";
	cout<<" DO YOU WANT TO GIVE RESPOSE TO THE REVIEWS AND COMPLAINTS GIVEN BY THE USER ?\n";
	cout<<"\n YES [Y/y]  or NO TO READ ONLY	 [N/n] \n";
	cin>>c;
	  
	if(c=='y' || c=='Y')
	{
		
		const int s=200;
		char reaD[s];
	
		ifstream read("review.txt",ios::in);		// READING THE REVIEWS BY THE USERS.
	
		while(read.getline(reaD,s,'\n'))
		{
	  
			cout<<reaD<<endl;
	  
		}
		read.close();					// CLOSING FILE TO PREVENT CORRUPTION.
		
		const int size = 200 , a = 10 ;
		char res[size];
		char name[a];
		cin.ignore();
		cout<<"\n ENTER THE USER NAME OR ID HERE >>> \n";
	
		cin.getline(name, a );
	
		cout<<"\n ENTER YOUR RESPONSE >>> \n";		// GIVING RESPONSE TO THE USERS REVIEWS.
	
		cin.getline(res, size);
	
		ofstream t("response.txt", ios::app);
	
		if ( !t )
		{
        		cout<<"\n FILE NOT FOUND. \n";			
        	}
        	else
        	{
        		t<<" RESPONDING TO  [ "<<name<<" ] :: "<<res<<endl;
        		t.close();			// CLOSING FILE TO PREVENT CORRUPTION.
        	}
		

	}
	else if(c=='n' || c=='N')
	{
		cout<<"\n HERE YOU CAN ONLY READ THE REVIEWS AND COMPLAINTS OF THE USERS. \n";
		fstream read;
		char reaD[1000];
	
		read.open("review.txt",ios::in);
	
		while(read.getline(reaD,1000,'\n'))		// READING AND DISPLAYING CONTENT AT THE SAME TIME.
		{
	  
			cout<<reaD<<endl;
	  
		}
		read.close();			// CLOSING FILE TO PREVENT CORRUPTION.
	}
	
	return;
	
}

////////////////////////////////////////// [* SEE THE BEST SELLER EMPLOYEE *] //////////////////////////////////////////////////


void best_seller()			// [ 9 ] #####################
{
	char yes;
	int ID;
	
		cout<<"\n\t\t----------------------------------------------------------\n";
		cout<<"\t\t|  >>> YOU CAN SEE THE BEST SELLER EMPLOYEE FROM HERE  <<< |\n";
		cout<<"\t\t------------------------------------------------------------\n";
	
	
	buttons();				// CALLING THE BUTTONS FUNCTION.
	
	cout<<"\t\t -"<<setfill('-')<<setw(32)<<"-"<<setfill(' ')<<endl;
	cout<<"\t\t | "<<setw(30)<<left<<" >>> [ SELECT THE ID ] <<< "<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<" [1].   EMPLOYEE_1 "<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<" [2].   EMPLOYEE_2 "<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<" [3].   EMPLOYEE_3 "<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<" [4].   EMPLOYEE_4 "<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<" [5].   EMPLOYEE_5 "<<"|\n";
  	cout<<"\t\t -"<<setfill('-')<<setw(32)<<"-"<<setfill(' ')<<endl;
    	 
    	cout<<"\n\t ENTER THE EMPLOYEE-ID TO TRACK SALES RECORD  [ 1-5 ] >>> ::  \n";
    	cin>>ID;
    	
    	if(ID==1)
    	{
    		
    		const int s = 40 ;
    		char id_p[s][20];
    		int pri[s];
    		double T_Pri[s];
    		int Quan[s];
    		int sum = 0;
    		int w=0 ;
    
    
    		ifstream q( "emp1.txt" , ios::in );		// READING FROM FILE.
    
    		if(!q)
    		{
    			cout<<" FILE NOT FOUND ! \n";
    		
    		}
    
    		int R=0;
    		cout<<"\n\t\t---------------------------------------\n";
		cout<<"\t\t| TOTAL SALES MADE BY EMPLOYEE_1  ARE = |\n";
		cout<<"\t\t-----------------------------------------\n";
    		
    		cout<<" ORDER "<<"  PRODUCT_NAME   "<<" PRICE "<<"  QUANTITY "<<"  TOTAL_PRICE"<<endl<<endl;
    
    		while( !q.eof() )
    		{
    			q>>id_p[R] >>pri[R] >>Quan[R] >>T_Pri[R] ;	// DISPLAYING CONTENT OF FILE.
    			
    			if( !q.eof() )
    			{
	    	cout<<setw(4)<<" [ "<<R+1<<" ]  "<<setw(10)<<id_p[R]<<"  |  "<<setw(5)<<pri[R]<<"  |  "<<setw(5)<<Quan[R]<<"  |  "<<setw(5)<<T_Pri[R]<<endl  ;
    	    			R++;    
    			}
    				
    		}
    			
    
    		q.close();			// CLOSING FILE TO AVOID CORRUPTION.
    		
    				
   		for( ; w<R ; w++ )
    		{
    			sum += T_Pri[w] ;			// CALCULATING THE TOTAL SALE SUM.
   		}
    		
    		cout<<"\n\n\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(25)<<left<<" NO. OF ORDERS   >>  "<<"   ::  "<<setw(8)<<w<<"|\n";
   		cout<<"\t\t | "<<setw(25)<<left<<" TOTAL BILLINGS  >>  "<<"   ::  "<<setw(8)<<sum<<"|\n";
		cout<<"\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		
    	        	
    	}
    	else if(ID==2)
    	{
    		
    		const int s = 40 ;
    		char id_p[s][20];
    		int pri[s];
    		double T_Pri[s];
    		int Quan[s];
    		int sum = 0;
    		int w=0 ;
    
    
    		ifstream q( "emp2.txt" , ios::in );		// READING FROM FILE.
    
    		if(!q)
    		{
    			cout<<" FILE NOT FOUND ! \n";
    		
    		}
    
    		int R=0;
    		cout<<"\n\t\t---------------------------------------\n";
		cout<<"\t\t| TOTAL SALES MADE BY EMPLOYEE_2  ARE = |\n";
		cout<<"\t\t-----------------------------------------\n";
    		
    		cout<<" ORDER "<<"  PRODUCT_NAME   "<<" PRICE "<<"  QUANTITY "<<"  TOTAL_PRICE"<<endl<<endl;
    
    		while( !q.eof() )
    		{
    			q>>id_p[R] >>pri[R] >>Quan[R] >>T_Pri[R] ;	// DISPLAYING CONTENT OF FILE.
    			
    			if( !q.eof() )
    			{
	    	cout<<setw(4)<<" [ "<<R+1<<" ]  "<<setw(10)<<id_p[R]<<"  |  "<<setw(5)<<pri[R]<<"  |  "<<setw(5)<<Quan[R]<<"  |  "<<setw(5)<<T_Pri[R]<<endl  ;
    	    			R++;    
    			}
    				
    		}
    			
    
    		q.close();			// CLOSING FILE TO AVOID CORRUPTION.
    		
    				
   		for( ; w<R ; w++ )
    		{
    			sum += T_Pri[w] ;			// CALCULATING THE TOTAL SALE SUM.
   		}
    		
    		cout<<"\n\n\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(25)<<left<<" NO. OF ORDERS   >>  "<<"   ::  "<<setw(8)<<w<<"|\n";
   		cout<<"\t\t | "<<setw(25)<<left<<" TOTAL BILLINGS  >>  "<<"   ::  "<<setw(8)<<sum<<"|\n";
		cout<<"\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		
    	        	
    	}
    	else if(ID==3)
    	{
    		
    		const int s = 40 ;
    		char id_p[s][20];
    		int pri[s];
    		double T_Pri[s];
    		int Quan[s];
    		int sum = 0;
    		int w=0 ;
    
    
    		ifstream q( "emp3.txt" , ios::in );		// READING FROM FILE.
    
    		if(!q)
    		{
    			cout<<" FILE NOT FOUND ! \n";
    		
    		}
    
    		int R=0;
    		cout<<"\n\t\t---------------------------------------\n";
		cout<<"\t\t| TOTAL SALES MADE BY EMPLOYEE_3  ARE = |\n";
		cout<<"\t\t-----------------------------------------\n";
    		
    		cout<<" ORDER "<<"  PRODUCT_NAME   "<<" PRICE "<<"  QUANTITY "<<"  TOTAL_PRICE"<<endl<<endl;
    
    		while( !q.eof() )
    		{
    			q>>id_p[R] >>pri[R] >>Quan[R] >>T_Pri[R] ;	// DISPLAYING CONTENT OF FILE.
    			
    			if( !q.eof() )
    			{
	    	cout<<setw(4)<<" [ "<<R+1<<" ]  "<<setw(10)<<id_p[R]<<"  |  "<<setw(5)<<pri[R]<<"  |  "<<setw(5)<<Quan[R]<<"  |  "<<setw(5)<<T_Pri[R]<<endl  ;
    	    			R++;    
    			}
    				
    		}
    			
    
    		q.close();			// CLOSING FILE TO AVOID CORRUPTION.
    		
    				
   		for( ; w<R ; w++ )
    		{
    			sum += T_Pri[w] ;			// CALCULATING THE TOTAL SALE SUM.
   		}
    		
    		cout<<"\n\n\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(25)<<left<<" NO. OF ORDERS   >>  "<<"   ::  "<<setw(8)<<w<<"|\n";
   		cout<<"\t\t | "<<setw(25)<<left<<" TOTAL BILLINGS  >>  "<<"   ::  "<<setw(8)<<sum<<"|\n";
		cout<<"\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		
    	        	
    	}
    	else if(ID==4)
    	{
    		
    		const int s = 40 ;
    		char id_p[s][20];
    		int pri[s];
    		double T_Pri[s];
    		int Quan[s];
    		int sum = 0;
    		int w=0 ;
    
    
    		ifstream q( "emp4.txt" , ios::in );		// READING FROM FILE.
    
    		if(!q)
    		{
    			cout<<" FILE NOT FOUND ! \n";
    		
    		}
    
    		int R=0;
    		
    		cout<<"\n\t\t---------------------------------------\n";
		cout<<"\t\t| TOTAL SALES MADE BY EMPLOYEE_4  ARE = |\n";
		cout<<"\t\t-----------------------------------------\n";
    		
    		cout<<" ORDER "<<"  PRODUCT_NAME   "<<" PRICE "<<"  QUANTITY "<<"  TOTAL_PRICE"<<endl<<endl;
    
    		while( !q.eof() )
    		{
    			q>>id_p[R] >>pri[R] >>Quan[R] >>T_Pri[R] ;	// DISPLAYING CONTENT OF FILE.
    			
    			if( !q.eof() )
    			{
	    	cout<<setw(4)<<" [ "<<R+1<<" ]  "<<setw(10)<<id_p[R]<<"  |  "<<setw(5)<<pri[R]<<"  |  "<<setw(5)<<Quan[R]<<"  |  "<<setw(5)<<T_Pri[R]<<endl  ;
    	    			R++;    
    			}
    				
    		}
    			
    
    		q.close();			// CLOSING FILE TO AVOID CORRUPTION.
    		
    				
   		for( ; w<R ; w++ )
    		{
    			sum += T_Pri[w] ;			// CALCULATING THE TOTAL SALE SUM.
   		}
    		
    		cout<<"\n\n\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(25)<<left<<" NO. OF ORDERS   >>  "<<"   ::  "<<setw(8)<<w<<"|\n";
   		cout<<"\t\t | "<<setw(25)<<left<<" TOTAL BILLINGS  >>  "<<"   ::  "<<setw(8)<<sum<<"|\n";
		cout<<"\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		
    	        	
    	}
    	else if(ID==5)
    	{
    		
    		const int s = 40 ;
    		char id_p[s][20];
    		int pri[s];
    		double T_Pri[s];
    		int Quan[s];
    		int sum = 0;
    		int w=0 ;
    
    
    		ifstream q( "emp5.txt" , ios::in );		// READING FROM FILE.
    
    		if(!q)
    		{
    			cout<<" FILE NOT FOUND ! \n";
    		
    		}
    
    		int R=0;
    		
    		cout<<"\n\t\t---------------------------------------\n";
		cout<<"\t\t| TOTAL SALES MADE BY EMPLOYEE_5  ARE = |\n";
		cout<<"\t\t-----------------------------------------\n";
    		
    		cout<<" ORDER "<<"  PRODUCT_NAME   "<<" PRICE "<<"  QUANTITY "<<"  TOTAL_PRICE"<<endl<<endl;
    
    		while( !q.eof() )
    		{
    			q>>id_p[R] >>pri[R] >>Quan[R] >>T_Pri[R] ;	// DISPLAYING CONTENT OF FILE.
    			
    			if( !q.eof() )
    			{
	    	cout<<setw(4)<<" [ "<<R+1<<" ]  "<<setw(10)<<id_p[R]<<"  |  "<<setw(5)<<pri[R]<<"  |  "<<setw(5)<<Quan[R]<<"  |  "<<setw(5)<<T_Pri[R]<<endl  ;
    	    			R++;    
    			}
    				
    		}
    			
    
    		q.close();					// CLOSING FILE TO AVOID CORRUPTION.
    		
    				
   		for( ; w<R ; w++ )
    		{
    			sum += T_Pri[w] ;			// CALCULATING THE TOTAL SALE SUM.
   		}
    		
    		cout<<"\n\n\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(25)<<left<<" NO. OF ORDERS   >>  "<<"   ::  "<<setw(8)<<w<<"|\n";
   		cout<<"\t\t | "<<setw(25)<<left<<" TOTAL BILLINGS  >>  "<<"   ::  "<<setw(8)<<sum<<"|\n";
		cout<<"\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		
    	        	
    	}
    	else
    	{
    		cout<<"\n\t\t--------------------------------------\n";
		cout<<"\t\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
		cout<<"\t\t----------------------------------------\n";
    	}
    	
    	
    	cout<<"\n\t\t---------------------------------------------\n";
	cout<<"\t\t| DO YOU WANT TO SEE OTHER'S EMPLOYEE SALES ? |\n";
	cout<<"\t\t| PROCEES WITH  [Y/Y] AND RETURN WITH  [N/n]  |\n";
	cout<<"\t\t-----------------------------------------------\n";
	
	cin>>yes;
	
	if(yes=='y' || yes=='Y')
	{
		best_seller();
	}
	else
	{
		return;
	}
    	
    	
	return;
	
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  ##################### ##################### ##################### ##################### ##################### ######### //
////////////////////////////////////////// *[ SOME EXTRA ADMIN FUNCTIONS ]* //////////////////////////////////////////////////



void del_item()					// @@@@@@@@@@@@ [ SUB-FUN-01 ] @@@@@@@@@@@@@
{
    char del;				// DELETE ITEM ON DEMAND.
    char loader[100];			// DATA FROM FILE.
    char iT_Name[30][30];		// NAME OF PRODUCT.
    const int a = 30;
    double Price[a];
    int No_Items[a];
    int Total_Price[a];
    int i = 0;

    ifstream read("stock.txt");			// OPENING FILE IN READING MODE.

    if (!read)
    {
        cout<<"\n FILE NOT FOUND. ";
        cout<<"\n CHECK THE FILE NAME. ";
    }
    else
    {
        					// LOADING DATA IN ARRAYS FROM FILE.
        read.getline(loader, 100, '\n');

        while (read.getline(iT_Name[i], 20, ' '), read >> Price[i] >> No_Items[i] >> Total_Price[i])
        {
            read.ignore();
            i++;
        }
    }

    read.close();							// CLOSING FILE TO PREVENT CORRUPTION.
    
    arrange(i, No_Items, iT_Name, Price, Total_Price);		// CALLING THE SORT FUNCTION [BY-QUANTITY].

    cout<<setw(6)<<"\n INDEX "<<loader<<endl;		// DISPLAYING THE MENU.
    
    for(int k = 0; k < i; k++)					// DISPLAY THE FILE CONTENT STORED IN ARRAYS.
    {
    					// to prevent variable data from changing.
    
        const char* color = ANSI_COLOR_RESET;			// NON-CONSTANT POINTER TO CONSTANT DATA.

        if(No_Items[k] == 0)
        {
            color = ANSI_COLOR_YELLOW;				// ASSINING THE YELLOW COLOR FOR EMPTY.
        }
        else if( (No_Items[k] > 0 ) && ( No_Items[k] <= 20) )
        {
            color = ANSI_COLOR_RED;				// ASSINING THE RED COLOR FOR THRESHOLD.
        }
        else
        {
            color = ANSI_COLOR_GREEN;				// ASSINING GREEN COLOR TO NORMAL PRODUCTS.
        }

        cout<<color<<" [ "<< setw(2) <<k+1<<" ] "<<setw(10) <<iT_Name[k] <<"  |  "<<setw(5) << Price[k] <<"  |  "
             <<setw(5)<<No_Items[k]<<"  |  "<<setw(7)<<Total_Price[k]<<ANSI_COLOR_RESET<<endl;
    }

    char search[a];				// GETTING THE KEY.
    cout<<"\n ENTER THE ITEM FROM THE MENU YOU WANT TO REMOVE >>> ";
    cin>>search;
    int p = 0;

    while(p < i)
    {
        if(strcmp(iT_Name[p], search) == 0)			// FINDING ITEM IN STOCK.
        {
            break;
        }
        else
        {
        	p++;
        }
    }

    if(p == i)
    {
        cout<<"\n ITEM NOT FOUND IN THE CART. \n";        
    }
    else
    {
        cout<<"\n ITEM FOUND IN THE CART AT [ "<< p+1 <<" ] \n\n";		// INCRIMENT IN INDEX(+1).
        cout<<" DO YOU WANT TO REMOVE THIS ITEM ? \n";
        cout<<" TO DELETE [Y/y] OTHERWISE [N/n] \n";
        cin>>del;
        
        switch(del)
        {
        	case 'Y':
        	case 'y':
        	{
        		fstream task("stock.txt", ios::out);	// TRUNCATING PREVIOUS DATA IN THE FILE.

       			 task<< loader <<endl;

       			 for(int a = 0; a < i; a++)		// WRITING UP-DATED DATA BACK TO THE FILE.
       			 {
         		    if(a == p)
            		    continue;
            		    task<<iT_Name[a] <<" "<<Price[a] <<" "<<No_Items[a] <<" "<<Total_Price[a] <<endl;
        		 }
        		
			task.close();				// CLOSING FILE TO PREVENT CORRUPTION.
 
        	break;	
        	}
        	case 'N':
        	case 'n':
        	{
        		cout<<"\n WELL ! YOU CAN DO THIS LATER TOO. \n\n";
        		break;
        		
        	break;	
        	}
        	default:
        	
        		cout<<"\n\t\t--------------------------------------\n";
		  	cout<<"\t\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
			cout<<"\t\t----------------------------------------\n";
        	
        	break;
	
        }
    }
    
    return;
}

/////////////////////////////////////////// *[ ADDING NEW-ITEM TO THE STOCK ]* ////////////////////////////////////////// 


void add_item()					// @@@@@@@@@@@@ [ SUB-FUN-02 ] @@@@@@@@@@@@@
{
    char ADD[100];
    char iT_Name[30][30];
    const int a = 30;
    double Price[a];
    int No_Items[a];
    int Total_Price[a];
    int i = 0;

    fstream stock("stock.txt", ios::in);			// OPENING THE FILE IN READING MODE.

    if(!stock)						// VALIDATING THE FILE EXISTANCE.
    {
        cout<<"\n FILE NOT FOUND. \n";
        cout<<"\n CHECK FILE NAME. \n";
    }
    else
    {
        stock.getline(ADD, 100, '\n');			// STORING DATA IN ARRAYS.

        while(stock.getline(iT_Name[i], 20, ' '), stock >> Price[i] >> No_Items[i] >> Total_Price[i])
        {
            stock.ignore();
            i++;
        }
    }

    stock.close();				// CLOSING FILE TO PREVENT CORRUPTION.

    arrange(i, No_Items, iT_Name, Price, Total_Price);	// CALLING THE SORT FUNCTION [BY-QUANTITY].

    cout<<setw(6)<<"\n INDEX "<<ADD<<endl;
    
    		// ASSIGNING COLOR TO THE ITEMS ACCORDING TO THEIR QUANTITY.
    
    for(int k=0 ; k<i ; k++)					// DISPLAY THE FILE CONTENT STORED IN ARRAYS.
    {				// to prevent variable data from changing.
    
        const char* color = ANSI_COLOR_RESET;			// NON-CONSTANT POINTER TO CONSTANT DATA.

        if(No_Items[k] == 0)
        {
            color = ANSI_COLOR_YELLOW;				// ASSINING THE YELLOW COLOR FOR EMPTY.
        }
        else if( ( No_Items[k] > 0 ) && ( No_Items[k] <= 20 ) )
        {
            color = ANSI_COLOR_RED;				// ASSINING THE RED COLOR FOR THRESHOLD.
        }
        else
        {
            color = ANSI_COLOR_GREEN;				// ASSINING GREEN COLOR TO NORMAL PRODUCTS.
        }

        cout<<color<<" [ "<< setw(2) <<k + 1<<" ] "<< setw(10) << iT_Name[k] <<"  |  "<< setw(5) << Price[k]<<"  |  "
             <<setw(5)<<No_Items[k] <<"  |  "<< setw(7) <<Total_Price[k] <<ANSI_COLOR_RESET<<endl;
    }
    

///////////////////////////////////////////// [ ADDING NEW PRODUCT TO STOCK FILE. ] /////////////////////////////////////
			
    char newname[a];
    double newprice;
    int newquantity;

    cout<<"\n ENTER THE DETAILS OF THE PRODUCT YOU WANT TO ADD :: \n";
    cout<<" PRODUCT NAME : ";
    cin>>newname;
    cout<<" PRICE :: ";
    cin>>newprice;
    cout<<" QUANTITY :: ";
    cin>>newquantity;
    
    cin.ignore();
    
    fstream write("stock.txt", ios::app);		// WRITING FILE IN APPEND MODE TO PREVENT TRUNKING.

						// [ENTERING THE PRODUCT IN THE STOCK].
				
    write <<newname<<" "<<newprice<<" "<<newquantity<<" "<<newprice * newquantity<<endl;

    write.close();					// CLOSING FILE TO PREVENT CORRUPTION.

    cout<<"\n ITEM ADDED SUCCESSFULLY IN THE PREVIOUS STOCK. \n";
    
    return;
    
}



///////////////////////////////////////////// *[ UPDATING THE FILE FUNCTION ]* ///////////////////////////////////////



void updateProduct(char iT_Name[][30], double Price[], int No_Items[], int Total_Price[], int index,
                   const char* newName, double newPrice, int newQuantity, int newTotalPrice) 
                   {
    			strcpy(iT_Name[index], newName);	// NON-CONSTANT POINTER TO CONSTANT DATA.
    			Price[index] = newPrice;
    			No_Items[index] = newQuantity;
    			Total_Price[index] = newTotalPrice;
    			return;
		   }

///////////////////////////////////////////

void update_menu()					// @@@@@@@@@@@@ [ SUB-FUN-03 ] @@@@@@@@@@@@
{
    const int row = 30 ;
    char head[100];
    char iT_Name[row][30];
    double Price[row];
    int No_Items[row];
    int Total_Price[row];
    int i = 0;

    fstream stock("stock.txt", ios::in);		// READING DATA FROM THE FILE

    if(!stock)
    {
        cout<<"\n !! FILE NOT FOUND !!";
        cout<<"\n CHECK THE FILE NAME \n";
    }
    else
    {
        stock.getline(head, 100, '\n');		// STORING DATA IN ARRAY TILL END OF LINE.

        while (stock.getline(iT_Name[i], 30, ' '), stock >> Price[i] >> No_Items[i] >> Total_Price[i])
        {
            stock.ignore();
            i++;
        }
    }

    stock.close();					// CLOSING FILE TO PREVENT CORRUPTION.
    
    arrange(i, No_Items, iT_Name, Price, Total_Price);	// CALLING THE SORT FUNCTION [BY-QUANTITY].

    cout<<setw(6)<<"\n INDEX "<<head<<endl;
    
    for (int k=0 ; k<i ; k++)					// DISPLAY THE FILE CONTENT STORED IN ARRAYS.
    {				// to prevent variable data from changing.
    
        const char* color = ANSI_COLOR_RESET;			// NON-CONSTANT POINTER TO CONSTANT DATA.

        if(No_Items[k] == 0)
        {
            color = ANSI_COLOR_YELLOW;				// ASSINING THE YELLOW COLOR FOR EMPTY.
        }
        else if( (No_Items[k] > 0 ) && ( No_Items[k] <= 20 ) )
        {
            color = ANSI_COLOR_RED;				// ASSINING THE RED COLOR FOR THRESHOLD.
        }
        else
        {
            color = ANSI_COLOR_GREEN;				// ASSINING GREEN COLOR TO NORMAL PRODUCTS.
        }

        cout<<color<<" [ "<<setw(2) <<k + 1<<" ] "<< setw(10) <<iT_Name[k] <<"  |  "<<setw(5) <<Price[k] <<"  |  "
             <<setw(5) <<No_Items[k] <<"  |  "<<setw(7) <<Total_Price[k] <<ANSI_COLOR_RESET<<endl;
    }

    int index;
    
    cout<<"\n\n\t ENTER THE INDEX [ 0-9 ] OF THE PRODUCT TO UPDATE >> :: ";
    cin>>index;
    
    index= index - 1 ;				// [ SETTING IT TO THE ARRAY INDEXING FROM 0.th ]

    if (index >= 0 && index < i )
    {
        char newName[30];
        double newPrice;
        int newQuantity;

        cout<<"\n ENTER THE NEW PRODUCT NAME >>> ";
        cin>>newName;
        cout<<"\n ENTER THE NEW PRODUCT PRICE >>> ";
        cin>>newPrice;
        cout<<"\n ENTER THE TOTAL QUANTITY >>> ";
        cin>>newQuantity;

        int newTotalPrice = newPrice * newQuantity ;
							// CALLING THE UPDATE-PRODUCT FUNCTION.
								
        updateProduct(iT_Name, Price, No_Items, Total_Price, index, newName, newPrice, newQuantity, newTotalPrice);

        fstream dump("stock.txt", ios::out);			// TRUNKING THE PREVIOUS DATA IN FILE.

        dump<<head<<endl;				// WRITING THE HEADER TXT.

        for( int a = 0 ; a<i; a++ )			// WRITING UPDATED DATA BACK TO FILE.
        {
            dump<<iT_Name[a] <<" "<< Price[a] <<" "<<No_Items[a] <<" "<<Total_Price[a] <<endl;
        }

        dump.close();					// CLOSING FILE TO PREVENT CORRUPTION.
        
        cout<<"\n PRODUCT UPDATED SUCCESSFULLY.\n\n";
        
    }
    else
    {
        cout<<"\n !!! INVALID INDEX !!! \n\n";
    }
    
    return;
}


//////////////////////////////////////////////// [* SORTING THE MENU *] ////////////////////////////////////////////////


void arrange(int n, int No_Items[], char iT_Name[][30], double Price[], int Total_Price[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (No_Items[j] > No_Items[j + 1])
            {
                
                swap(No_Items[j], No_Items[j + 1]);
                
                char temp[30];
                strcpy(temp, iT_Name[j]);			// COPYING THE CONTENT OF 2ND ARRAY.
                
                strcpy(iT_Name[j], iT_Name[j + 1]);
                
                strcpy(iT_Name[j + 1], temp);
                
                swap(Price[j], Price[j + 1]);
               
                swap(Total_Price[j], Total_Price[j + 1]);
            }
        }
    }
    return;
}


/////////////////////////////////////////////// [ DISPLAY THE MENU ] ///////////////////////////////////////////////////////


void display_stock()
{
	
	cout<<"\n *** [ WELCOME TO THE DISPLAY STOCK PORTAL ] *** \n";
	cout<<" HERE YOU CAN ONLY SEE THE ITEMS AVAILABLE IN THE STOCK. \n";
	
	const int row = 30;
	char head[100];
	char iT_Name[row][30];
	double Price[row];
	int No_Items[row];
	int Total_Price[row];
	int p=0;
	
	
	fstream o( "stock.txt", ios::in );		// OPEN IN READING MODE.
	
	if(!o)
	{
		cout<<"\n FILE NOT EXISTS. \n";
		cout<<"\n CHECK THE FILE NAME. \n";
	}
	else
	{
		o.getline(head,100,'\n') ;			// LOADING DATA IN ARRAYS.
		
		while( o.getline( iT_Name[p] , 30 , ' ') , o >> Price[p] >> No_Items[p] >> Total_Price[p] )
		{
			o.ignore();
			p++ ;
		}
	
	}
		o.close();					// TO PREVENT FILE FROM BEING CORRUPTED.
	
	arrange( p, No_Items, iT_Name, Price, Total_Price);	// CALLING THE SORT FUNCTION [BY-QUANTITY].
	
	cout<<setw(6)<<"\n INDEX "<<head<<endl;
	
	const char* color = ANSI_COLOR_RESET ;
	
	for(int c=0 ; c < p ; c++ )
	{
		if(No_Items[c] == 0)
		{
			color = ANSI_COLOR_YELLOW;
		}
		else if( No_Items[c] > 0 && No_Items[c] <=20 )
		{
			color = ANSI_COLOR_RED;
		}
		else if( No_Items[c] > 20 )
		{
			color = ANSI_COLOR_GREEN ;
		}
		
       cout<<color<<" [ "<<setw(2) << c+1<<" ] "<< setw(10) << iT_Name[c]<<"  |  "<< setw(5)<<Price[c]<<"  |  "
             <<setw(5)<<No_Items[c]<<"  |  "<< setw(7)<<Total_Price[c] <<ANSI_COLOR_RESET<<endl;
	
	}
	
	cout<<"\n\t <<<< [ SO THAT WAS ALL WITH THE MENU. ] >>>> \n\n";
	return;
	
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////  ** [CHANGE-USER PASSWORDS ] ** //////////////////////////////////////


void user_credentials()
{
	const int size = 30;
	char name[20][size];				// FOR READING FILE DATA.
	char pass[20][size];
	
	char nameU[size];				// FOR USER INPUT.
	char passU[size];
	
	int i=0;
	bool login = false;				// FLAG [RED]
	
	ifstream read("user_pass.txt" );		// OPENING FILE IN READING MODE.
	
	if(!read)
	{
		cout<<"\n FILE NOT FOUND. \n";
		cout<<" CHECK THE FILE NAME.";
	}
	
	
	
	while( !read.eof() )			// POPULATING THE ARRAY DATA.
	{	
		read >> name[i] >> pass[i]; 	
	 	read.ignore();
	 	i++ ;	
	}
	read.close();						// CLOSING FILE TO PREVENT CORRUPTION.
	
	do{
	
		cout<<" ENTER THE USER-NAME ::  ";
		cin.ignore();
		cin.getline( nameU , size );
		
		cout<<" ENTER THE USER-PASSWORD ::  ";
		cin.getline( passU , size );
		
		for(int j=0 ; j<i ; ++j)
		{					// COMPARING THE INPUT WITH FILE DATA.
					
			if( ( strcmp( name[j], nameU ) == 0) && ( strcmp( pass[j] , passU ) == 0 ) )
			{
				
							// FLAG[GREEN]
				login = true;
				
				cout<<"\n ****** VERIFICATION COMPLETED ***** \n\n";		// FLAG GREEN [PASSED].
				
			char newPass[size];
                	char newName[size];
                
                	char del;
                	cout<<" DO YOU WANT TO CHANGE HIS/HER NAME AND PASSWORD ? \n";		// ASKING IF CHANGE DEMANDED.
                	cout<<"\n ENTER [Y/y] FOR YES OR [N/n] FOR NO. \n";
                	cin>>del;
                
                	if(del=='Y' || del=='y')
                	{
                					//  RE-PLACING IT WITH THE NEW-NAME.
                		
                		cin.ignore();
                		cout<<"\n ENTER THE NEW NAME OF THAT USER >>> ";
                		cin.getline( newName , size );
	
                		cout<<"\n\n ENTER THE NEW PASSWORD >>> ";
                		cin.getline( newPass , size );
		
                		strcpy(name[j] , newName );		// COPYING THE DATA OF THE NEW ARRAY.
                		strcpy(pass[j] , newPass );	// 1st ARRAY COPY THE DATA OF THE 2nd ARRAY.
                		
                		break;
                	}
               		else if(del=='N' || del=='n')
                	{
                		cout<<"\n\n <<< YOU CAN DO THIS LATER AS WELL >>> \n";		// EXITTING WITHOUT CHANGING.
               		 	return;
               		}
               		else
               		{
               		 	cout<<"\n\t\t--------------------------------------\n";
		  		cout<<"\t\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
				cout<<"\t\t----------------------------------------\n";
               		 	break;
               		}

            		}
            
        	}

        if(!login)				// VALIDATING THE USERNAME - PASS.
        {
            cout<<"\n WRONG CREDENTIALS. PLEASE RE-ENTER THE EMPLOYEE NAME AND PASSWORD.\n";
            
        }

    }while(!login);					// FLAG.

    
    ofstream write("user_pass.txt" );			// WRITING THE SPECIFIC DATA OF INDEX BACK TO THE FILE.
    
    for (int k = 0; k < i ; ++k )
    {
        write<< name[k] <<" "<<pass[k] <<endl;
    }
    
    write.close();					// CLOSSING THE FILE TO PREVENT THE CORRUPTION.
    
    cout<<"\n <<< THE NAME OF THE EMPLOYE OR THE PASSWORD NAME HAS BEEN CHANGED >>> \n";
    cout<<"\n >>> THE CHANGES HAVE ALSO BEEN SAVED TO THE FILE TO PREVENT DATA LOSS <<< \n";
    
    
    return;
    
    // The problem that i faced a lot here was that there was an issue displaying because of the same name for naming and writing in the file. It was not with the object but it was decleraing the operand wrong like [ << ] insertion operator as illegal.
			
}


/////////////////////////////////////////////////////////////////////////////////////


void admin_credentials()
{
	const int size = 20;	
	char newPass[size];
        char newName[size];
                
        char del;
        
        cout<<" DO YOU WANT TO CHANGE YOUR NAME AND PASSWORD ? \n";		// ASKING IF CHANGE DEMANDED.
        cout<<"\n ENTER [Y/y] FOR YES OR [N/n] FOR NO. \n";
        cin>>del;
                
                if(del=='Y' || del=='y')
                {
                				//  RE-PLACING IT WITH THE NEW-NAME.
                		
                	cin.ignore();
                	cout<<"\n ENTER THE NEW ADMIN NAME >>> ";
                	cin.getline( newName , size );
	
                	cout<<"\n\n ENTER THE NEW ADMIN PASSWORD >>> ";
                	cin.getline( newPass , size );
                		
              
                }
               	else if(del=='N' || del=='n')
                {
                	cout<<"\n\n <<< YOU CAN DO THIS LATER AS WELL >>> \n";		// EXITTING WITHOUT CHANGING.
               	 	return;
               	}

	ofstream write("admin_pass.txt", ios::out );			// WRITING THE SPECIFIC DATA BACK TO THE FILE.

        write<<newName<<" "<<newPass<<endl;

    
    	write.close();					// CLOSSING THE FILE TO PREVENT THE CORRUPTION.
    
    	cout<<"\n\t <<< THE NAME OF THE EMPLOYE OR THE PASSWORD NAME HAS BEEN CHANGED >>> \n";
    	cout<<"\n\t >>> THE CHANGES HAVE ALSO BEEN SAVED TO THE FILE TO PREVENT DATA LOSS <<< \n";
    
    
    return;

}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void track_sales()
{
	cout<< "\n\t\t------------------------------------------"; 
        cout<< "\n\t\t| >> WELCOME TO THE TRACK SALES MENU <<  |";
        cout<< "\n\t\t------------------------------------------\n\n";
        
        int n ;
        
        buttons();				// CALLING THE BUTTONS FUNCTION.
        
        cout<<"\t\t -"<<setfill('-')<<setw(57)<<"-"<<setfill(' ')<<endl;
  	cout<<"\t\t | "<<setw(55)<<left<<"<< ENTER THE RESEPCTED NUMBER TO PROCEED >> "<<"|\n";
  	cout<<"\t\t | "<<setw(55)<<left<<" [1]. TRACK THE SALES PER-DAY. "<<"|\n";
  	cout<<"\t\t | "<<setw(55)<<left<<" [2]. TRACK THE TOTAL SALES. "<<"|\n";
  	cout<<"\t\t | "<<setw(55)<<left<<" [3]. TOTAL PRICE OF STOCK ITEMS. "<<"|\n";
  	cout<<"\t\t | "<<setw(55)<<left<<" [4]. EXIT. "<<"|\n";
        cout<<"\t\t -"<<setfill('-')<<setw(57)<<"-"<<setfill(' ')<<endl;
        cin>>n;
        
        switch(n)
        {
        	case 1:
        	
        			day_sales();
        	
        	break;
        	case 2:
        	
        			total_sales();
        	
        	break;
        	case 3:
        	
        			stock_price();
        	
        	break;
        	case 4:
        		cout<<"\n *** EXITING THE SALES TRACK MENU. \n";
        		cout<<"\n <<<<  خدا حافظ  >>>>  \n\n";
        	
        	break;
        	default:
        	
        		cout<<"\n\t\t--------------------------------------\n";
		  	cout<<"\t\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
			cout<<"\t\t----------------------------------------\n";
        		cout<<"\t\t RE-DIRECTING TO THE MENU_BAR. \n";
        		
        		track_sales();
        
        }
        
        return;
        
}


//////////////////////////////////////////////// *[ DAY-SALES RECORD ]*/////////////////////////////////////////////


void day_sales()
{
	char ye;
	int day;
	cout<<"\n WELCOME TO THE DAY-SALES TRACKING CENTER. \n";
	
	buttons();				// CALLING THE BUTTONS FUNCTION.
	
	cout<<"\t\t -"<<setfill('-')<<setw(32)<<"-"<<setfill(' ')<<endl;
	cout<<"\t\t | "<<setw(30)<<left<<" >>> [ SELECT THE DAY ] <<< "<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<" [1].   MONDAY. "<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<" [2].   TUESDAY. "<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<" [3].   WEDNESDAY. "<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<" [4].   THURSDAY. "<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<" [5].   FRIDAY. "<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<" [6].   SATURDAY. "<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<" [7].   SUNDAY.  "<<"|\n";
  	cout<<"\t\t | "<<setw(30)<<left<<" [8].   EXIT.  "<<"|\n";
  	cout<<"\t\t -"<<setfill('-')<<setw(32)<<"-"<<setfill(' ')<<endl;
	cin>>day;
	
	
	switch(day)
	{
		case 1:
		
				monday_sales();
				
		break;
		case 2:
				
				tuesday_sales();
		
		break;
		case 3:
				
				wed_sales();
				
		break;
		case 4:
		
				thursday_sales();
				
		break;
		case 5:
		
				friday_sales();
				
		break;
		case 6:
		
				sat_sales();
		break;
		case 7:
		
				sun_sales();
				
		break;		
		case 8:
				cout<<"\n\t RETURNING FROM THE SALES TRACKING MENU. \n";
				return;
		
		break;
		
		default:
			
			cout<<"\n\t DAY NOT FOUND IN MY CALENDER. THERE ARE ONLY 7-DAYS.  \n";
  	 		cout<<"\n\t\t--------------------------------------\n";
			cout<<"\t\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
			cout<<"\t\t----------------------------------------\n";
			day_sales();
		
		break;
		
		
	
	}
	
	
	cout<<"\n\t\t---------------------------------------------\n";
	cout<<"\t\t| DO YOU WANT TO SEE OTHER'S  > DAY < SALES ? |\n";
	cout<<"\t\t| PROCEED WITH  [Y/Y] AND RETURN WITH  [N/n]  |\n";
	cout<<"\t\t-----------------------------------------------\n";
	
	cin>>ye;
	
	if(ye=='y' || ye=='Y')
	{
		day_sales();
	}
	else
	{
		return;
	}
	
}	
	
	
//////////////////////////////////////////// ** [ MONDAY ] ***	
	
void monday_sales()
{
  	 	const int s = 50 ;
    		char id_p[s][20];
    		int pri[s];
    		double T_Pri[s];
    		int Quan[s];
    		int sum = 0;
    		int w=0 ;
    
    
    		ifstream q( "monday.txt" , ios::in );		// READING FROM FILE.
    
    		if(!q)
    		{
    			cout<<" FILE NOT FOUND ! \n";
    		
    		}
    
    		int R=0;
    		
    		cout<<"\n\t\t---------------------------------------\n";
		cout<<"\t\t| TOTAL SALES MADE  ON  MONDAY  ARE ::  |\n";
		cout<<"\t\t-----------------------------------------\n\n";
    		
    		cout<<" ORDER "<<"  PRODUCT_NAME   "<<" PRICE "<<"  QUANTITY "<<"  TOTAL_PRICE"<<endl<<endl;
    
    		while( !q.eof() )
    		{
    			q>>id_p[R] >>pri[R] >>Quan[R] >>T_Pri[R] ;	// DISPLAYING CONTENT OF FILE.
    			
    			if( !q.eof() )
    			{
	    	cout<<setw(4)<<" [ "<<R+1<<" ]  "<<setw(10)<<id_p[R]<<"  |  "<<setw(5)<<pri[R]<<"  |  "<<setw(5)<<Quan[R]<<"  |  "<<setw(5)<<T_Pri[R]<<endl  ;
    	    			R++;    
    			}
    				
    		}
    			
    
    		q.close();			// CLOSING FILE TO AVOID CORRUPTION.
    		
    				
   		for( ; w<R ; w++ )
    		{
    			sum += T_Pri[w] ;			// CALCULATING THE TOTAL SALE SUM.
   		}
    		
    		
    		cout<<"\n\n\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(25)<<left<<" NO. OF ORDERS   >>  "<<"   ::  "<<setw(8)<<w<<"|\n";
   		cout<<"\t\t | "<<setw(25)<<left<<" TOTAL BILLINGS  >>  "<<"   ::  "<<setw(8)<<sum<<"|\n";
		cout<<"\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		
		return;
    	        
    	        	
}

//////////////////////////////////////////// ** [ TUESDAY ] ***

void tuesday_sales()
{
  	 	const int s = 50 ;
    		char id_p[s][20];
    		int pri[s];
    		double T_Pri[s];
    		int Quan[s];
    		int sum = 0;
    		int w=0 ;
    
    
    		ifstream q( "tuesday.txt" , ios::in );		// READING FROM FILE.
    
    		if(!q)
    		{
    			cout<<" FILE NOT FOUND ! \n";
    		
    		}
    
    		int R=0;
    		
    		cout<<"\n\t\t---------------------------------------\n";
		cout<<"\t\t| TOTAL SALES MADE  ON  TUESDAY  ARE :: |\n";
		cout<<"\t\t-----------------------------------------\n\n";
    		
    		cout<<" ORDER "<<"  PRODUCT_NAME   "<<" PRICE "<<"  QUANTITY "<<"  TOTAL_PRICE"<<endl<<endl;
    
    		while( !q.eof() )
    		{
    			q>>id_p[R] >>pri[R] >>Quan[R] >>T_Pri[R] ;	// DISPLAYING CONTENT OF FILE.
    			
    			if( !q.eof() )
    			{
	    	cout<<setw(4)<<" [ "<<R+1<<" ]  "<<setw(10)<<id_p[R]<<"  |  "<<setw(5)<<pri[R]<<"  |  "<<setw(5)<<Quan[R]<<"  |  "<<setw(5)<<T_Pri[R]<<endl  ;
    	    			R++;    
    			}
    				
    		}
    			
    
    		q.close();			// CLOSING FILE TO AVOID CORRUPTION.
    		
    				
   		for( ; w<R ; w++ )
    		{
    			sum += T_Pri[w] ;			// CALCULATING THE TOTAL SALE SUM.
   		}
    		
    		
    		cout<<"\n\n\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(25)<<left<<" NO. OF ORDERS   >>  "<<"   ::  "<<setw(8)<<w<<"|\n";
   		cout<<"\t\t | "<<setw(25)<<left<<" TOTAL BILLINGS  >>  "<<"   ::  "<<setw(8)<<sum<<"|\n";
		cout<<"\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		
		return;
    	        
    	        	
}
 
//////////////////////////////////////////// ** [ WEDNESDAY ] *** 
	 
void wed_sales()
{ 	 
 	 	const int s = 50 ;
    		char id_p[s][20];
    		int pri[s];
    		double T_Pri[s];
    		int Quan[s];
    		int sum = 0;
    		int w=0 ;
    
    
    		ifstream q( "wednesday.txt" , ios::in );		// READING FROM FILE.
    
    		if(!q)
    		{
    			cout<<" FILE NOT FOUND ! \n";
    		
    		}
    
    		int R=0;
    		cout<<"\n\t\t---------------------------------------\n";
		cout<<"\t\t| TOTAL SALES MADE  ON WEDNESDAY ARE :: |\n";
		cout<<"\t\t-----------------------------------------\n\n";
    		
    		cout<<" ORDER "<<"  PRODUCT_NAME   "<<" PRICE "<<"  QUANTITY "<<"  TOTAL_PRICE"<<endl<<endl;
    
    		while( !q.eof() )
    		{
    			q>>id_p[R] >>pri[R] >>Quan[R] >>T_Pri[R] ;	// DISPLAYING CONTENT OF FILE.
    			
    			if( !q.eof() )
    			{
	    	cout<<setw(4)<<" [ "<<R+1<<" ]  "<<setw(10)<<id_p[R]<<"  |  "<<setw(5)<<pri[R]<<"  |  "<<setw(5)<<Quan[R]<<"  |  "<<setw(5)<<T_Pri[R]<<endl  ;
    	    			R++;    
    			}
    				
    		}
    			
    
    		q.close();			// CLOSING FILE TO AVOID CORRUPTION.
    		
    				
   		for( ; w<R ; w++ )
    		{
    			sum += T_Pri[w] ;			// CALCULATING THE TOTAL SALE SUM.
   		}
    		
    		cout<<"\n\n\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(25)<<left<<" NO. OF ORDERS   >>  "<<"   ::  "<<setw(8)<<w<<"|\n";
   		cout<<"\t\t | "<<setw(25)<<left<<" TOTAL BILLINGS  >>  "<<"   ::  "<<setw(8)<<sum<<"|\n";
		cout<<"\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		
		return;
    	        
    	        	
}

//////////////////////////////////////////// ** [ THURSDAY ] ***

void thursday_sales()
{

  	 	const int s = 50 ;
    		char id_p[s][20];
    		int pri[s];
    		double T_Pri[s];
    		int Quan[s];
    		int sum = 0;
    		int w=0 ;
    
    
    		ifstream q( "thursday.txt" , ios::in );		// READING FROM FILE.
    
    		if(!q)
    		{
    			cout<<" FILE NOT FOUND ! \n";
    		
    		}
    
    		int R=0;
    		
    		cout<<"\n\t\t---------------------------------------\n";
		cout<<"\t\t| TOTAL SALES MADE  ON  THURSDAY ARE :: |\n";
		cout<<"\t\t-----------------------------------------\n\n";
    		
    		cout<<" ORDER "<<"  PRODUCT_NAME   "<<" PRICE "<<"  QUANTITY "<<"  TOTAL_PRICE"<<endl<<endl;
    
    		while( !q.eof() )
    		{
    			q>>id_p[R] >>pri[R] >>Quan[R] >>T_Pri[R] ;	// DISPLAYING CONTENT OF FILE.
    			
    			if( !q.eof() )
    			{
	    	cout<<setw(4)<<" [ "<<R+1<<" ]  "<<setw(10)<<id_p[R]<<"  |  "<<setw(5)<<pri[R]<<"  |  "<<setw(5)<<Quan[R]<<"  |  "<<setw(5)<<T_Pri[R]<<endl  ;
    	    			R++;    
    			}    				
    		}
  		q.close();			// CLOSING FILE TO AVOID CORRUPTION.
   		for( ; w<R ; w++ )
    		{
    			sum += T_Pri[w] ;			// CALCULATING THE TOTAL SALE SUM.
   		}
   		cout<<"\n\n\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(25)<<left<<" NO. OF ORDERS   >>  "<<"   ::  "<<setw(8)<<w<<"|\n";
   		cout<<"\t\t | "<<setw(25)<<left<<" TOTAL BILLINGS  >>  "<<"   ::  "<<setw(8)<<sum<<"|\n";
		cout<<"\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		
		return;


}

//////////////////////////////////////////// ** [ FRIDAY ] ***

void friday_sales()
{

		const int s = 50 ;
    		char id_p[s][20];
    		int pri[s];
    		double T_Pri[s];
    		int Quan[s];
    		int sum = 0;
    		int w=0 ;    
    		ifstream q( "friday.txt" , ios::in );		// READING FROM FILE.    
    		if(!q)
    		{
    			cout<<" FILE NOT FOUND ! \n";
    		
    		}    
    		int R=0;
    		
    		cout<<"\n\t\t---------------------------------------\n";
		cout<<"\t\t| TOTAL SALES MADE  ON  FRIDAY   ARE :: |\n";
		cout<<"\t\t-----------------------------------------\n\n";  
		 		
    		cout<<" ORDER "<<"  PRODUCT_NAME   "<<" PRICE "<<"  QUANTITY "<<"  TOTAL_PRICE"<<endl<<endl;    
    		while( !q.eof() )
    		{
    			q>>id_p[R] >>pri[R] >>Quan[R] >>T_Pri[R] ;	// DISPLAYING CONTENT OF FILE.
    			
    			if( !q.eof() )
    			{
	    	cout<<setw(4)<<" [ "<<R+1<<" ]  "<<setw(10)<<id_p[R]<<"  |  "<<setw(5)<<pri[R]<<"  |  "<<setw(5)<<Quan[R]<<"  |  "<<setw(5)<<T_Pri[R]<<endl  ;
    	    			R++;    
    			}   				
    		}    
    		q.close();			// CLOSING FILE TO AVOID CORRUPTION.    				
   		for( ; w<R ; w++ )
    		{
    			sum += T_Pri[w] ;			// CALCULATING THE TOTAL SALE SUM.
   		}    		
    		cout<<"\n\n\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(25)<<left<<" NO. OF ORDERS   >>  "<<"   ::  "<<setw(8)<<w<<"|\n";
   		cout<<"\t\t | "<<setw(25)<<left<<" TOTAL BILLINGS  >>  "<<"   ::  "<<setw(8)<<sum<<"|\n";
		cout<<"\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		
		return;  	        	
}

//////////////////////////////////////////// ** [ SATURDAY ] ***

void sat_sales()
{
  	 	const int s = 50 ;
    		char id_p[s][20];
    		int pri[s];
    		double T_Pri[s];
    		int Quan[s];
    		int sum = 0;
    		int w=0 ;    
    		ifstream q( "saturday.txt" , ios::in );		// READING FROM FILE.    
    		if(!q)
    		{
    			cout<<" FILE NOT FOUND ! \n";   		
    		}    
    		int R=0;
    		
    		cout<<"\n\t\t---------------------------------------\n";
		cout<<"\t\t| TOTAL SALES MADE  ON  SATURDAY ARE :: |\n";
		cout<<"\t\t-----------------------------------------\n\n";
    		  		
    		cout<<" ORDER "<<"  PRODUCT_NAME   "<<" PRICE "<<"  QUANTITY "<<"  TOTAL_PRICE"<<endl<<endl;   
    		while( !q.eof() )
    		{
    			q>>id_p[R] >>pri[R] >>Quan[R] >>T_Pri[R] ;	// DISPLAYING CONTENT OF FILE.    			
    			if( !q.eof() )
    			{
	    	cout<<setw(4)<<" [ "<<R+1<<" ]  "<<setw(10)<<id_p[R]<<"  |  "<<setw(5)<<pri[R]<<"  |  "<<setw(5)<<Quan[R]<<"  |  "<<setw(5)<<T_Pri[R]<<endl  ;
    	    			R++;    
    			}    				
    		}   
    		q.close();			// CLOSING FILE TO AVOID CORRUPTION.    				
   		for( ; w<R ; w++ )
    		{
    			sum += T_Pri[w] ;			// CALCULATING THE TOTAL SALE SUM.
   		}    		
   		cout<<"\n\n\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(25)<<left<<" NO. OF ORDERS   >>  "<<"   ::  "<<setw(8)<<w<<"|\n";
   		cout<<"\t\t | "<<setw(25)<<left<<" TOTAL BILLINGS  >>  "<<"   ::  "<<setw(8)<<sum<<"|\n";
		cout<<"\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		
		return;    	        	


}

//////////////////////////////////////////// ** [ SUNDAY ] ***

void sun_sales()
{
  	 
  	 	const int s = 50 ;
    		char id_p[s][20];
    		int pri[s];
    		double T_Pri[s];
    		int Quan[s];
    		int sum = 0;
    		int w=0 ;   
    		ifstream q( "sunday.txt" , ios::in );		// READING FROM FILE.
    		if(!q)
    		{
    			cout<<" FILE NOT FOUND ! \n";
       		}   
    		int R=0;
    		
    		cout<<"\n\t\t---------------------------------------\n";
		cout<<"\t\t| TOTAL SALES MADE  ON   SUNDAY  ARE :: |\n";
		cout<<"\t\t-----------------------------------------\n\n";
		
		
    		cout<<" ORDER "<<"  PRODUCT_NAME   "<<" PRICE "<<"  QUANTITY "<<"  TOTAL_PRICE"<<endl<<endl;  
    		while( !q.eof() )
    		{
    			q>>id_p[R] >>pri[R] >>Quan[R] >>T_Pri[R] ;	// DISPLAYING CONTENT OF FILE.    			
    			if( !q.eof() )
    			{
	    	cout<<setw(4)<<" [ "<<R+1<<" ]  "<<setw(10)<<id_p[R]<<"  |  "<<setw(5)<<pri[R]<<"  |  "<<setw(5)<<Quan[R]<<"  |  "<<setw(5)<<T_Pri[R]<<endl  ;
    	    			R++;    
    			}   				
    		}   
    		q.close();			// CLOSING FILE TO AVOID CORRUPTION.
       		for( ; w<R ; w++ )
    		{
    			sum += T_Pri[w] ;			// CALCULATING THE TOTAL SALE SUM.
   		}
		cout<<"\n\n\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(25)<<left<<" NO. OF ORDERS   >>  "<<"   ::  "<<setw(8)<<w<<"|\n";
   		cout<<"\t\t | "<<setw(25)<<left<<" TOTAL BILLINGS  >>  "<<"   ::  "<<setw(8)<<sum<<"|\n";
		cout<<"\t\t -"<<setfill('-')<<setw(42)<<"-"<<setfill(' ')<<endl; 
		
		return;   	        	
}
 	 
  	

//////////////////////////////////////////// *[ TOTAL-SALES RECORD. ]* ///////////////////////////////////////////////////


void total_sales()
{
	cout<<"\n\t <<< WELCOME TO THE TOTAL SALES-TRACKING MENU. \n";
	cout<<"\t >>> YOU CAN TRACK THE TOTAL SALES AND ORDER FROM HERE. \n";
	
	
		const int s = 70 ;
    		char id_p[s][30];
    		int pri[s];
    		double T_Pri[s];
    		int Quan[s];
    		int sum = 0;
    		int w=0 ;
    
    
    		ifstream q( "sales.txt" , ios::in );		// READING FROM FILE.
    
    		if(!q)
    		{
    			cout<<" FILE NOT FOUND ! \n";
    		
    		}
    
    		int R=0;
    		cout<<"\n\t\t---------------------------------------\n";
		cout<<"\t\t| TOTAL SALES MADE THROUGHT PERIOD    = |\n";
		cout<<"\t\t-----------------------------------------\n\n";
    		
    		cout<<" ORDER "<<"  PRODUCT_NAME   "<<" PRICE "<<"  QUANTITY "<<"  TOTAL_PRICE"<<endl<<endl;
    
    		while( !q.eof() )
    		{
    			q>>id_p[R] >>pri[R] >>Quan[R] >>T_Pri[R] ;	// DISPLAYING CONTENT OF FILE.
    			
    			if( !q.eof() )
    			{
	    	cout<<setw(4)<<" [ "<<R+1<<" ]  "<<setw(10)<<id_p[R]<<"  |  "<<setw(5)<<pri[R]<<"  |  "<<setw(5)<<Quan[R]<<"  |  "<<setw(5)<<T_Pri[R]<<endl  ;
    	    			R++;    
    			}
    				
    		}
    			
    
    		q.close();			// CLOSING FILE TO AVOID CORRUPTION.
    		
    				
   		for( ; w<R ; w++ )
    		{
    			sum += T_Pri[w] ;			// CALCULATING THE TOTAL SALE SUM.
   		}
    		
    		cout<<"\n\n\t\t -"<<setfill('-')<<setw(47)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(25)<<left<<" NO. OF ORDERS            >>  "<<"   ::  "<<setw(8)<<w<<"|\n";
   		cout<<"\t\t | "<<setw(25)<<left<<" TOTAL REVINUE GENERATED  >>  "<<"   ::  "<<setw(8)<<sum<<"|\n";
		cout<<"\t\t -"<<setfill('-')<<setw(47)<<"-"<<setfill(' ')<<endl<<endl;
		
	return;
}


///////////////////////////////////////*[ TOTAL-STOCK PRICE ]*///////////////////////////////////////////////////////


void stock_price()
{
	
	const int row = 30;
	char head[100];
	char iT_Name[row][30];
	double Price[row];
	int No_Items[row];
	int Total_Price[row];
	int p=0;
	long double sum_item=0;
	long int quan_item=0;
	char yes;
	
	
	fstream o( "stock.txt", ios::in );		// OPEN IN READING MODE.
	
	if(!o)
	{
		cout<<"\n FILE NOT EXISTS. \n";
		cout<<"\n CHECK THE FILE NAME. \n";
	}
	else
	{
		o.getline(head,100,'\n') ;			// LOADING DATA IN ARRAYS.
		
		while( o.getline( iT_Name[p] , 30 , ' ') , o >> Price[p] >> No_Items[p] >> Total_Price[p] )
		{
			o.ignore();
			p++ ;
		}
	
	}
		o.close();					// TO PREVENT FILE FROM BEING CORRUPTED.
	
	arrange( p, No_Items, iT_Name, Price, Total_Price);	// CALLING THE SORT FUNCTION [BY-QUANTITY].
	
	cout<<setw(6)<<"\n INDEX "<<head<<endl;
	
	const char* color = ANSI_COLOR_RESET ;
	
	for(int c=0 ; c < p ; c++ )
	{
		if(No_Items[c] == 0)
		{
			color = ANSI_COLOR_YELLOW;
		}
		else if( No_Items[c] > 0 && No_Items[c] <=20 )
		{
			color = ANSI_COLOR_RED;
		}
		else if( No_Items[c] > 20 )
		{
			color = ANSI_COLOR_GREEN ;
		}
		
       cout<<color<<" [ "<<setw(2) << c+1<<" ] "<< setw(10) << iT_Name[c]<<"  |  "<< setw(5)<<Price[c]<<"  |  "
             <<setw(5)<<No_Items[c]<<"  |  "<< setw(7)<<Total_Price[c] <<ANSI_COLOR_RESET<<endl;
	
	}
	
	for(int j=0 ; j<p ; j++)
	{
		sum_item += Total_Price[j];
	}
	
	for(int j=0 ; j<p ; j++)
	{
		quan_item += No_Items[j];
	}
	
		cout<<"\n\t\t------------------------------------------\n";
		cout<<"\t\t| TOTAL RECORD OF THE ITEMS AND PRICE :: |\n";
		cout<<"\t\t------------------------------------------\n";
	
	cout<<"\n\t\t-----------------------------------------------\n";
	cout<<"\t\t| FOR TOTAL PRICE OF STOCK AND NO. OF ITEMS   |\n";
	cout<<"\t\t| PROCEED WITH  [Y/Y] AND RETURN WITH  [N/n]  |\n";
	cout<<"\t\t-----------------------------------------------\n";
	
	cin>>yes;
	
	if(yes=='y' || yes=='Y')
	{
		
		cout<<"\n\n\t\t -"<<setfill('-')<<setw(47)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(25)<<left<<" TOTAL STOCK PRICE        >>  "<<"   ::  "<<setw(8)<<sum_item<<"|\n";
   		cout<<"\t\t | "<<setw(25)<<left<<" TOTAL NUMBER OF ITEMS    >>  "<<"   ::  "<<setw(8)<<quan_item<<"|\n";
		cout<<"\t\t -"<<setfill('-')<<setw(47)<<"-"<<setfill(' ')<<endl<<endl;
	}
	else
	{
		
		return;
	}
	
	return;
	

}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



