#include "header.h"
char name[100], pass[100];			// to send them in complains as the ID.

///////////////////////////////////////////////// [ DEFINITION OF FUN. ] ///////////////////////////////////////////////

void std_stafflogin() 
{
    char std[100];
    char password[100];
    
    bool login = false;
    
    int count = 4 ;

    do{
    	
        cout<<"\n\n ENTER THE USER [STUDENT / STAFF] NAME ::  ";
        cin>>name;
        cout<<"\n ENTER THE [STUDENT / STAFF] PASSWORD ::  ";
        cin>>pass;

        ifstream f("user_pass.txt");				// OPEN FILE IN READING MODE.

        while(!f.eof() )
        {
            f>>std>>password;
            
            if ( ( strcmp( std, name ) == 0 ) && ( strcmp(password, pass) == 0 ) )
            {
                login = true;
                cout<<"\n ****** VERIFICATION COMPLETED ***** \n\n";
                break;  
            }
        }
         
        f.close();					// CLOSING FILE TO PREVENT CORRUPTION.

        count--  ;					// DECRIMENTING IN CHANCES.
        
        if(!login)
        {
            cout<<"\n WRONG CREDENTIALS PLEASE RE-ENTER THE [STUDENT / STAFF] NAME AND PASSWORD.\n";
            cout<<"\n                      !!!  BE-AWARE !!!    \n";
            cout<<"\t YOU ARE LEFT WITH ONLY  [ "<< count - 1 <<" ]  CHANCES.  \n\n";
        }
        
        
        if(count == 0 )				// RESTRICTING TO ONLY THREE ATTEMPTS.
        {
        	cout<<"n\t NO MORE CHANCE WILL BE ALLOCATED. \n\n";
        	return;
        }

    }while(!login);
    
    std_staffMenu();
    
}

				// [* A KIND OF LOCAL MAIN FOR STUDENT / STAFF FUNCTIONS *] //
				
///////////////////////////////////// *[ FUNCTION TO DISPLAY THE STUDENT MENU. ]* ///////////////////////////////////////


void std_staffMenu()
{
    
    char choice;
    char exit;

    do{
       	
    	
        cout<< "\n\t\t------------------------------------------"; 
        cout<< "\n\t\t| >> WELCOME TO STUDENT / STAFF MENU  << |";
        cout<< "\n\t\t------------------------------------------\n\n";
        
        buttons();				// CALLING THE BUTTONS FUNCTION.
        
        cout<<"\t -"<<setfill('-')<<setw(57)<<"-"<<setfill(' ')<<endl;
  	cout<<"\t | "<<setw(55)<<left<<"<< ENTER THE RESEPCTED NUMBER TO PROCEED >> "<<"|\n";
  	cout<<"\t | "<<setw(55)<<left<<"1. SEARCH AND ORDER FOOD "<<"|\n";
  	cout<<"\t | "<<setw(55)<<left<<"2. GIVE COMPLAINTS THROUGH CDS "<<"|\n";
  	cout<<"\t | "<<setw(55)<<left<<"3. SEARCH ITEMS THROUGH CDS "<<"|\n";
  	cout<<"\t | "<<setw(55)<<left<<"4. GIVE ONLINE AND SCHEDULED ORDERS. "<<"|\n";
  	cout<<"\t | "<<setw(55)<<left<<"5. SEE NOTIFICATIONS THROUGH CDS. "<<"|\n";
  	cout<<"\t | "<<setw(55)<<left<<"6. PLAY GAMES. [ NEWLY ADDED ] "<<"|\n";
  	cout<<"\t | "<<setw(55)<<left<<"7. SEE [ ADMIN / EMPLOYEE ] RESPONSE. "<<"|\n";
  	cout<<"\t | "<<setw(55)<<left<<"8. LOGOUT FROM THE SITE. "<<"|\n";
        cout<<"\t -"<<setfill('-')<<setw(57)<<"-"<<setfill(' ')<<endl;
        
	cin>> choice;
	
	
    	  if( choice<='0' || choice>='9' )
 		 {
  			cout<<"\n\t #################   WARNING    ###################\n"; 
			cout<<"\n\t !!!!!!!! KINDLY AVOID ENTERING CHARACTRES !!!!!!!! \n\n";
			cout<<"\t         ------ RE-ENTER THE CASE ------- \n";
			cout<<"\n\t ---- THE MAIN MENUE WILL BE SHORTLY DISPLAYED ----\n\n";
			continue;
		
  		  }
    
  	if( choice>='0' && choice<='9' )
  	{
    
        switch(choice)
        {
            case '1':
            		cout<<"\n*** YOU CAN SEARCH AND ORDER FOOD FROM HERE. *****\n\n";
            		search_order();
            		
            		
            break;					// EXITING THE CASE [1].            
            case '2':
           		
           		review();
           		
            break;					// EXITING THE CASE [2].           
            case '3':
                	
                	cout<<"\n **** WELCOME TO THE SEARCH MENU **** \n\n";
                	cout<<" YOU CAN SEARCH ITEMS IN THE MENU FROM HERE. \n";
                	search_item();
                	
            break;					// EXITING THE CASE [3].           
            case '4':
            {
            	char c;
		cout<<"\n **** WELCOME TO ONLINE ORDER SECTION. \n\n";
		cout<<"\n **** DO YOU WANT TO PRE-ORDER [ SCHEDULED ] ANY OF THE ITEM FROM THE MENU \n";
		cout<<" ENTER [Y/y] TO PROCEED & [N/n] TO CANCEL \n";
		cin>>c;
	
		switch(c)
		{
			case 'Y':
			case 'y':
			{
				cout<<"\n THE MENU WILL BE DISPLAYED SHORTELY. \n";
				cout<<"\n YOU CAN ORDER ANY ITEM FROM HERE >>>\n";
				pre_order();
			
			break;
			}
			case 'n':
			case 'N':
			{
				cout<<"\n\t HOPE SO YOUR EXPERIENCE WENT WELL. \n";
				cout<<"\t    THANKS FOR COMMING HERE. \n";
				cout<<"\n\t      ****************\n";
			
			break;
			}
			default:
			
			cout<<"\n\t--------------------------------------\n";
		  	cout<<"\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
			cout<<"\t----------------------------------------\n";
			
			cout<<" REDIRECTING TO THE ONLINE ORDER SECTION. \n";
			
			pre_order();
		
		}
	   }	
                					// EXITING THE CASE [4].
            break;
            case '5':
                	
                	chit_chats();			// FOR INTERESTING NOTIFICATIONS.
                	
            break;        				// EXITING THE CASE [5].    
            case '6':
                            	  	
  			games();
  	
            break;
            case '7':
            
            		see_response();
            
            break;  	        			// EXITING THE CASE [6].    
            case '8':
                	  	
  			cout<<"\t -"<<setfill('-')<<setw(50)<<"-"<<setfill(' ')<<endl;
			cout<<"\t | "<<setw(48)<<left<<"     ** LOGGING OUT OF THE SITE. ** "<<"|\n";
  			cout<<"\t | "<<setw(48)<<left<<"         && THANKS FOR COMING && "<<"|\n";
  			cout<<"\t | "<<setw(48)<<left<<"\t           خدا حافظ "<<"   |\n";
  			cout<<"\t -"<<setfill('-')<<setw(50)<<"-"<<setfill(' ')<<endl;
  			
  			break;
  			
                	
            					// EXITING THE CASE [7].
            default:
            
		 	cout<<"\n\t--------------------------------------\n";
		  	cout<<"\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
			cout<<"\t----------------------------------------\n";
			
            		break;
         }
         
   		// [ ASKING USER IF HE/SHE WANT TO QUIT. ]
              
		cout<<"\n\t\t--------------------------------------------------"; 
        	cout<<"\n\t\t|  DO YOU WANT TO EXIT FROM USER MENU ? [ Y/N ]  |";
        	cout<<"\n\t\t--------------------------------------------------\n\n";
		
		cin>>exit;
		
		if(exit=='y' || exit=='Y')
		{
			cout<<"\t -"<<setfill('-')<<setw(50)<<"-"<<setfill(' ')<<endl;
			cout<<"\t | "<<setw(48)<<left<<"     ** LOGGING OUT OF THE SITE. ** "<<"|\n";
  			cout<<"\t | "<<setw(48)<<left<<"         && THANKS FOR COMING && "<<"|\n";
  			cout<<"\t | "<<setw(48)<<left<<"\t           خدا حافظ "<<"   |\n";
  			cout<<"\t -"<<setfill('-')<<setw(50)<<"-"<<setfill(' ')<<endl;
  			
		break;
		}
		else if(exit=='n' || exit=='N')
		{
		cout<<"\n ******* SELECT THE FUNCTION YOU WANT TO PERFORM AGAIN ******* \n";
		}continue;

	}


    }while(1);			// do -while braces.

}			// fun. braces.


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ##################### ##################### ##################### ##################### ##################### ########## //
//////////////////////////////////////////// *[ USER-STAFF FUNCTIONS ]* //////////////////////////////////////////////////////


void search_order()				// [ 1 ] #####################
{
	int n;
	cout<<"\n *** WELCOME TO THE SEARCH AND ORDER MENU *** \n\n";
	cout<<" ENTER [1] FOR SEARCH & [2] FOR ORDERING THE FOOD. \n";
	cin>>n;
	switch(n)
	{
		case 1:
		{
			char k;
			search_item();
			cout<<"\n *** NOW DO YOU WANT TO ORDER ANYTHING FROM THE MENU ? *** \n";
			cout<<" ENTER [Y/y] FOR ORDER AND [N/n] FOR EXIT. \n";
			cin>>k;
			if(k=='Y' || k=='y')
			{
				cout<<"\n **[ PROGRESSING TOWARDS ORDERING FOOD ]**  \n";
			}
			else if(k=='N' || k=='n')			// EXITING THE CASE IF ENTERED NO.
			{
				cout<<"\n THANKS FOR VISITING OUR SITE \n";
				break;
			}
		}
		
		case 2:
		{
			int q;
			
			cout<<"\n\n ONLY ONE ITEM CAN BE ORDERED AT A TIME THROUGH CDS. ";
			cout<<"\n\t DO YOU WANT TO ORDER ONLINE THROUGH THE CDS ? \n";
			cout<<"\n ENTER\n\t[1]. TO ORDER IT YOURSELF {ONLINE} \n\t[2]. EXIT.  \n";
			
			cin>>q;
			
			if(q==1)
			{
				pre_order();				// VIA ONLINE PORTAL.
				
			}
			else if(q==2)
			{
				cout<<"\n\t EXITING FROM THE ONLINE ORDER SITE. \n";
				return;
			}
			else
			{
				cout<<"\n\t--------------------------------------\n";
		  		cout<<"\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
				cout<<"\t----------------------------------------\n";
			
				break;
			}
		}
		break;
		default:
		
			cout<<"\n\t--------------------------------------\n";
		  	cout<<"\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
			cout<<"\t----------------------------------------\n";
		
		search_order();					// VALIDATING INPUT [ REDIRECTING ].
	}
	
	return;
}

//////////////////////////////////////////// [ COMPLAINS ] ////////////////////////////////////////////////////////


void review()					// [ 2 ] #############################
{
		
	char yes;
	const int size = 300;
	char rev[size];
	char pro[size] ;
	
	cout<<" --- ARE YOU SETISFIED WITH OUR SERVICES --- \n";
	cout<<"\n  PRESS [Y/y] IF AGREE OTHERWISE [N/n] IF DISAPPOINTED \n";
	cin>>yes;
	if(yes=='y' || yes=='Y')
	{
				cout<<"\n\t HURRAH.THANKS GIVING. \n";
				cout<<"\t **** SHUKRIA **** \n";	
	}
	else if(yes=='n' || yes=='N')
	{
				cout<<"\n ACCEPT OUR APPOLOGY FOR ANY INCONVINENCE. \n";
				cout<<"\n WE WILL LOOK DEEPLY IN TO THIS MATTER. \n";
				cout<<"\n **** SORRY FOR INCONVINENCE FROM OUR SIDE **** \n\n";
	}
	
	cout<<"\n\t BTW. YOU CAN GIVE YOUR RESPONSE HERE. \n";
								// about which thing like[food,cleanliness,etc.]
	cin.ignore();
	cout<<"\n ON WHICH THING YOU WANT TO GIVE YOUR RESPONSE [FOOD, EMPLOYEE, CLEANLINESS, etc.]\n";
	cin.getline(pro, size);
	
	cout<<"\n ENTER YOUR REVIEW >>> \n";
	
	cin.getline(rev, size);
	
	ofstream review("review.txt", ios::app);		// OPEN IN APPEND MODE TO AVOID TRUNKING.
	
	if(review.is_open() )
	{							// WRITING IN FILE.
	
        	review<<" ON { " <<pro<<" } BY : [ "<<name<<" ] ::  "<<rev<<endl;
        	review.close();					// CLOSING FILE TO AVOID CORRUPTION.
        }
        else
        {
        	cout<<"\n FILE NOT FOUND. \n";
        }
	
	cout<<"\n\n ****** THANKS FOR YOUR REVIEW ***** \n";
	
	return;
}

////////////////////////////////////////////// [ * SEARCH ITEMS IN CDS * ] ///////////////////////////////////////////////


void search_item()					// [ 3 ] #############################			
{
    char loader[200];
    char iT_Name[30][30];
    const int a = 30;
    double Price[a];
    int No_Items[a];
    int Total_Price[a];
    int i = 0;

    fstream stock("stock.txt", ios::in);

    if(!stock)						// VALIDATING THE FILE EXISTANCE.
    {
        cout<<"\n !!! FILE NOT FOUND !!!";
        cout<<"\n CHECK THE FILE NAME.";
    }
    else
    {
        							// LOADING DATA IN ARRAYS FROM FILE.
        stock.getline(loader, 100, '\n');

        while(stock.getline(iT_Name[i], 20, ' '), stock >> Price[i] >> No_Items[i] >> Total_Price[i])
        {
            stock.ignore();
            i++;
        }
    }

    stock.close();						// CLOSING FILE TO AVOID CORRUPTION.
    	
    arrange(i, No_Items, iT_Name, Price, Total_Price);		// CALLING THE SORT FUNCTION [BY-QUANTITY].

    cout<<setw(6)<<"\n INDEX "<<loader<<endl;		// DISPLAYING THE MENU.
    
    for(int k = 0; k < i; k++)					// DISPLAY THE FILE CONTENT STORED IN ARRAYS.
    {				// to prevent variable data from changing.
    
        const char* color = ANSI_COLOR_RESET;			// NON-CONSTANT POINTER TO CONSTANT DATA.

        if(No_Items[k] == 0)
        {
            color = ANSI_COLOR_YELLOW;				// ASSINING THE YELLOW COLOR FOR EMPTY.
        }
        else if(No_Items[k] > 0 && No_Items[k] <= 20)
        {
            color = ANSI_COLOR_RED;				// ASSINING THE RED COLOR FOR THRESHOLD.
        }
        else
        {
            color = ANSI_COLOR_GREEN;				// ASSINING GREEN COLOR TO NORMAL PRODUCTS.
        }

        cout<<color<<" [ "<<setw(2)<<k + 1<<" ] "<<setw(10)<<iT_Name[k]<<"  |  "<<setw(5)<<Price[k]<<"  |  "
             <<setw(5)<<No_Items[k]<<"  |  "<<setw(7)<<Total_Price[k]<<ANSI_COLOR_RESET<<endl;
    }

    const int g = 20;
    char search[g];				// GETTING THE KEY.
    cout << "\n\n ENTER THE PRODUCT NAME >>>   ::   ";
    cin >> search;
    int p = 0;

    while(p < i)
    {
        if(strcmp(iT_Name[p], search) == 0)
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
    }
    
    return;
}

////////////////////////////////////////////// [ ONLINE ORDERS ] //////////////////////////////////////////////////////////


void pre_order()					// [ 4 ] #############################
{
	const int row = 30;
	char header[100];
	char iT_Name[row][30];
	const int a = row;
	double Price[a];
	int No_Items[a];
	int Total_Price[a];
	int quantity;
	int i = 0;
	int orderPrice;
	char choice;

    	fstream read("stock.txt", ios::in);				// OPENING FILE IN READING MODE.

    	if(!read)								// VALIDATING FILE EXISTANCE.
    	{	
      		  cout<<"\n !!! FILE NOT FOUND !!!";
      	 	  cout<<"\n CHECK THE FILE NAME.";
      	 	  return;
   	}
    	else
    	{
        	read.getline(header, 100, '\n');				// LOADING HEADER + DATA IN ARRAYS.

        	while(read.getline(iT_Name[i], 20, ' '), read >> Price[i] >> No_Items[i] >> Total_Price[i])
        	{
           		read.ignore();		
            		i++;
        	}
    	}

    	read.close();							// CLOSING FILE TO PREVENT CORRUPTION.
    	
    	arrange(i, No_Items, iT_Name, Price, Total_Price);		// CALLING THE SORT FUNCTION [BY-QUANTITY].

    	cout<<setw(6)<<"\n INDEX "<<header<<endl;
    
    	for(int k = 0; k < i; k++)					// DISPLAY THE FILE CONTENT STORED IN ARRAYS.
    	{
    					// to prevent variable data from changing.
    
        	const char* color = ANSI_COLOR_RESET;			// NON-CONSTANT POINTER TO CONSTANT DATA.

        	if(No_Items[k] == 0)
        	{
          	     color = ANSI_COLOR_YELLOW;				// ASSINING THE YELLOW COLOR FOR EMPTY.
        	}
        	else if(No_Items[k] > 0 && No_Items[k] <= 20)
        	{
         	     color = ANSI_COLOR_RED;				// ASSINING THE RED COLOR FOR THRESHOLD.
       		}
        	else
        	{
              	     color = ANSI_COLOR_GREEN;				// ASSINING GREEN COLOR TO NORMAL PRODUCTS.
       	 	}

        cout<<color<<" [ "<< setw(2) <<k + 1<<" ] "<<setw(10) <<iT_Name[k] <<"  |  "<<setw(5) <<Price[k] <<"  |  "
             <<setw(5)<<No_Items[k]<<"  |  "<<setw(7)<<Total_Price[k] <<ANSI_COLOR_RESET<< endl;
    	}

    	const int g = 20;
    	char search[g];
    	int p = 0;
    	bool found = false;			// CHECK IF THE PRODUCT EXISTS.
    
    	do{
    
    		cout<<"\n\n ENTER THE PRODUCT NAME >>>   ::   ";
        	cin>>search;
        
        	p=0 ;				// SET THE INDEX BACK TO 0.
        
    		while(p < i)
    		{
    	  	 	 if (strcmp(iT_Name[p], search) == 0)		// FINDING THE PRODUCT.
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
    	  	    cout<<" ITEM NOT FOUND IN THE CART. \n";    	    
    		}
    		else
    		{
    	   	    cout<<"\n ITEM FOUND IN THE CART AT [ "<<p+1<<" ] \n\n";
    	   	    break;
    		}
    	
    	  }while(!found);			// CHECKING THE FLAG.
    	
    		cout<<" ENTER THE NUMBER OF [ "<< search <<" ] YOU WANT TO ORDER :: ";
    	        cin>>quantity;
    		
    	    	if( (No_Items[p] < quantity) || (quantity<0) )
    	    	{
    	       		 cout<<"\n INSUFFICENT QUANTITY IN THE STOCK. [ SORRY ] \n\n";
    	       		 cout<<"\n REDIRECTING TO THE MENU AGAIN. \n";
    	       		 pre_order();
    	    	}
    	    	else
    	    	{
    	        	No_Items[p] -= quantity;			// OREDRS DETAILS.
    	        	Total_Price[p] -= Price[p] * quantity;
    	        	orderPrice = Price[p] * quantity;
	
    	        	cout<<"\n ORDER SUCCESSFUL \n\n";
    	        	
    	        	char time1[10],time2[10];
    	        	char NAME[30];
    	        	
    	        	cin.ignore();
    	        	cout<<"\n ENTER YOUR CURRENT TIME IN ( h - min - sec ) FORMAT :: ";
    	        	cin.getline(time1,10);
    	        	
    	        	cout<<"\n ENTER THE TIME TO COLLECT THE ORDER IN ( hrs - min - sec ) FORMAT :: ";
    	        	cin.getline(time2,10);
    	        	
    	        	cout<<"\n DON'T HAVE TO USE THE ENCRYPTED NAME. USE YOUR REAL NAME. ( SHY ) :: ";
    	        	cin.getline(NAME,30);
    	        	
    	        	
    	        	ofstream online("online.txt", ios::app);	// WRITING IN APPEND MODE TO AVOID TRUNKING.

    			if(!online)
    			{
    			    cout << "\n !!! UNABLE TO WRITE ORDER DETAILS IN FILE !!! \n\n";
     			    return;
    			}				// WRITING DATA IN FILE TO PREVENT DATA LOSS.

   			online<<"ORDERED BY : " << NAME <<endl;
    			online<<"PRODUCT NAME : " << iT_Name[p] <<endl;
    			online<<"ORDERED AT TIME : " << time1 <<endl;
    			online<<"TO BE DELIVERED AT : " << time2 <<endl;
    			online<<"NUMBER OF PRODUCTS : " << quantity <<endl;
    			online<<"TOTAL PRICE PAYABLE  =/ : " << orderPrice <<endl;
    			online<<setfill('-') << setw(50) << "-" << "\n";

    			online.close();			// CLOSING FILE TO PREVENT CORRUPTION.
    	        	
    	        	
    	        	cout<<"\n DO YOU WANT TO SEE ORDER DETAILS ::  ";	// ASKING IF HE/SHE WANTS TO SEE ORDER DETAILS.
    	        	cin>>choice;
    	        
 	         switch(choice)
                 {
            		case 'Y':			// DISPLAY THE ORDER DETAILS.
            		case 'y':
            		{
            			cout<<setw(25)<<"\n\t  ORDER DETAILS ARE MENTIONED HERE :: \n\n";
            			cout<<"\t "<<setfill('-')<<setw(49)<<"-"<<endl;
            			cout<<"\t |"<<setw(25)<<setfill(' ')<<"  ORDERED BY "<<"  ::  "<<setw(15)<< NAME <<" |"<< endl;
            			cout<<"\t |"<<setw(25)<<"  PRODUCT NAME "<<"  ::  "<<setw(15)<< iT_Name[p] <<" |"<<endl ;
            			cout<<"\t |"<<setw(25)<<"  ORDERED AT TIME "<<"  ::  "<<setw(15)<< time1 <<" |"<<endl ;
            			cout<<"\t |"<<setw(25)<<"  PRICE "<<"  ::  "<<setw(15)<< Price[p] <<" |"<<endl;
            			cout<<"\t |"<<setw(25)<<"  TO BE DELIVERED AT "<<"  ::  "<<setw(15)<< time2 <<" |"<<endl ;
            			cout<<"\t |"<<setw(25)<<"  NUMBER OF PRODUCTS "<<"  ::  "<<setw(15)<< quantity <<" |"<<endl ;
           			cout<<"\t |"<<setw(25)<<"  TOTAL PRICE PAYABLE  =/"<<"  ::  "<<setw(15)<< orderPrice <<" |"<<endl;
            			cout<<"\t "<<setfill('-')<<setw(49)<<"-"<<endl;
            			
            		break;	
            		}
            		case 'N':
            		case 'n':			// RE-DIRECT TO COUNTER.
            		{
            			cout<<"\n THANKS. YOU CAN RECIEVE ORDER FROM THE COUNTER. \n";
            			cout<<"\n\t\t  خدا حافظ  \n\n";
            		break;	
            		}
            		default:
            		{
            			cout<<"\n\t--------------------------------------\n";
		  		cout<<"\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
				cout<<"\t----------------------------------------\n";
            			break;
                        }
                 }   

					// OPEN FILE IN WRITING MODE.
					
            	ofstream d("stock.txt", ios::out);			// TRUNCKING THE PREVIOUS FILE DATA.

            	if (!d)							// CHECK TO SEE THE FILE EXISTANCE.
            	{
            	    cout<<"\n !!! UNABLE TO WRITE TO FILE !!!";
            	}

            	d<<header<<endl;					// WRITING DATA BACK TO FILE.
            	for (int k = 0; k < i; k++)
            	{
              		  d<<iT_Name[k] <<" "<< Price[k] <<" "<< No_Items[k] <<" "<<Total_Price[k] <<endl;
            	}

            	d.close();						// CLOSING FILE TO PREVENT CORRUPTION.
            
            
    	     }
	return;
}

///////////////////////////////////////////// [ * SEE NOTIFICATIONS BY CDS * ] ////////////////////////////////////////////


void chit_chats()					// [ 5 ] #############################
{
	const int row = 200;
	const int size = 300;
   	char chat[row][size];
    	int line = 0, key;
	int choice;
	
	cout<<"\n ***** WELCOME TO THE NOTIFICATIONS BAR. ***** \n";
	cout<<" YOU CAN SEE EXCIETING NOTIFICATIONS FROM HERE ON. \n";
	cout<<"\n   THIS CAN BE ANYTHING. [ UN-EXCEPTIONAL ] \n";
	
	ifstream d("notification.txt");			// OPENING FILE IN READING MODE.

             while(d.getline(chat[line], size))		// LOADING DATA IN ARRAYS AND DISPLAYING IT AT THE SAME TIME.
             {
        	  cout<<" [ "<<line + 1<<" ] "<<chat[line]<<endl;
        	  line++;
             }
        	    
}


////////////////////////////////////////////////// [* PLAY GAMES *] /////////////////////////////////////////////////////


void games()
{

	char choice;
	char value;
	char num;
	int data;
	srand(time(NULL));
	
  do{
	
	cout<<"\n\t\t------------------------------------------"; 
        cout<<"\n\t\t|   ** [ WELCOME TO THE GAME BAR. ] **   |";
        cout<<"\n\t\t------------------------------------------\n\n";
	
	buttons();				// CALLING THE BUTTONS FUNCTION.
	
	cout<<"\t -"<<setfill('-')<<setw(36)<<"-"<<setfill(' ')<<endl;
	cout<<"\t | "<<setw(34)<<left<<" >>> [ SELECT THE GAME ] <<< "<<"|\n";
  	cout<<"\t | "<<setw(34)<<left<<" [1]. PLAY HIGER LOWER [GUESS]. "<<"|\n";
  	cout<<"\t | "<<setw(34)<<left<<" [2]. PLAY ROCK_PAPER_SCISORS. "<<"|\n";
  	cout<<"\t | "<<setw(34)<<left<<" [3]. GUESS THE NUMBER. "<<"|\n";
  	cout<<"\t | "<<setw(34)<<left<<" [4]. QUIT. "<<"|\n";
  	cout<<"\t -"<<setfill('-')<<setw(36)<<"-"<<setfill(' ')<<endl;
  	
	cin>>choice;

	switch(choice)
	{                                

	   case '1':					// [ HIGHER LOWER GAME.]
		{
			   
			   
			   cout<<"\n\t\t--------------------------------------------"; 
        		   cout<<"\n\t\t|  ** [ WELCOME TO HIGHER-LOWER GAME ] **  |";
        		   cout<<"\n\t\t--------------------------------------------\n\n";
			   
			   int firstnumber=(rand()%20) + 1;
			   int secondnumber=(rand()%20) + 1;
		
			cout<<"\n\n\t -"<<setfill('-')<<setw(47)<<"-"<<setfill(' ')<<endl;
			cout<<"\t | "<<setw(25)<<left<<" FIRST NUMBER IS =        >>  "<<"   ::  "<<setw(8)<<firstnumber<<"|\n";
			cout<<"\t -"<<setfill('-')<<setw(47)<<"-"<<setfill(' ')<<endl;
			
			
			cout<< "\n\t-----------------------------------------------------------------"; 
        		cout<< "\n\t|  [ NOW GUESS THAT WETHER THE 2ND NUMBER IS HIGHER OR LOWER ]  |";
        		cout<< "\n\t|                       >>>   ENTER   <<<                       |";
        		cout<< "\n\t|                       [H/h]. FOR HIGHER.                      |";
        		cout<< "\n\t|                       [L/l]. FOR HIGHER.                      |";
        		cout<< "\n\t-----------------------------------------------------------------\n\n";
			
			cin>>value;
		
		     if( (value=='H' || value=='h' ) && (secondnumber>firstnumber) )
		     {
		     	cout<<"\n\n\t -"<<setfill('-')<<setw(53)<<"-"<<setfill(' ')<<endl;
	cout<<"\t | "<<setw(25)<<left<<"YOU WIN ! THE 2ND NUMBER WAS HIGHER >>> "<<"   ::  "<<setw(4)<<secondnumber<<"|\n";
	cout<<"\t -"<<setfill('-')<<setw(53)<<"-"<<setfill(' ')<<endl;
		     }
		
		      else if( (value=='L' || value=='l' ) && (secondnumber<firstnumber) )
		       {
		       	     cout<<"\n\n\t -"<<setfill('-')<<setw(52)<<"-"<<setfill(' ')<<endl;
	cout<<"\t | "<<setw(25)<<left<<"YOU WIN ! THE 2ND NUMBER WAS LOWER >>> "<<"   ::  "<<setw(4)<<secondnumber<<"|\n";
	cout<<"\t -"<<setfill('-')<<setw(52)<<"-"<<setfill(' ')<<endl;
		       }
		    
		        else if( (value=='H' || value=='h' ) && (secondnumber<firstnumber) )
		         {
		         	cout<<"\n\n\t -"<<setfill('-')<<setw(54)<<"-"<<setfill(' ')<<endl;
	cout<<"\t | "<<setw(25)<<left<<"YOU LOOSE ! THE 2ND NUMBER WAS LOWER >>> "<<"   ::  "<<setw(4)<<secondnumber<<"|\n";
	cout<<"\t -"<<setfill('-')<<setw(54)<<"-"<<setfill(' ')<<endl;
		         }
		    
		         else if( (value=='L' || value=='l' ) && (secondnumber>firstnumber) )
		          {
		          	cout<<"\n\n\t -"<<setfill('-')<<setw(55)<<"-"<<setfill(' ')<<endl;
	cout<<"\t | "<<setw(25)<<left<<"YOU LOOSE ! THE 2ND NUMBER WAS HIGHER >>> "<<"   ::  "<<setw(4)<<secondnumber<<"|\n";
	cout<<"\t -"<<setfill('-')<<setw(55)<<"-"<<setfill(' ')<<endl;
		          }
		    
		  else
		  {
		  	cout<<"\n\t\t--------------------------------------\n";
		  	cout<<"\t\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
			cout<<"\t\t----------------------------------------\n";
		
		  	break;
		  }
		  break;
		  
		} 
              
		 case '2':			// [ ROCK, PAPER & SCISSORS ]
		{  
    	
		   cout<<"\n\t\t--------------------------------------"; 
          	   cout<<"\n\t\t|  [ ROCK - PAPER - SCISSORS GAME ]  |";
        	   cout<<"\n\t\t--------------------------------------\n\n";
		   
	            const int paper=1 , scissor=2, rock=3;
	            
		    int bug=(rand()%3) + 1;    // variable to store random number from 1 - 3.
		    
		        cout<<"\t -"<<setfill('-')<<setw(33)<<"-"<<setfill(' ')<<endl;
			cout<<"\t | "<<setw(31)<<left<<" >>> [ SELECT THE WEAPON ] <<< "<<"|\n";
  			cout<<"\t | "<<setw(31)<<left<<" [P/p].   FOR PAPER "<<"|\n";
  			cout<<"\t | "<<setw(31)<<left<<" [R/r].   FOR ROCK "<<"|\n";
  			cout<<"\t | "<<setw(31)<<left<<" [S/s].   FOR SCISSORS "<<"|\n";
  			cout<<"\t -"<<setfill('-')<<setw(33)<<"-"<<setfill(' ')<<endl;
		        
		        cin>>num;
		         
		    if(  ( ( num=='p' || num=='P' ) && (bug==3) )  || 
		         ( ( num=='r' || num=='R' ) && (bug==2) )  ||
		         ( ( num=='s' || num=='S' ) && (bug==1) )      )
    	
		                 {
		                 	cout<<"\n\t\t----------------------------------------"; 
          				cout<<"\n\t\t|  * [ CONGRATS.YOU WON THE MATCH. ] * |";
        				cout<<"\n\t\t----------------------------------------\n\n";
		                 }
		    
		       else if(  ( (bug==2) && ( num=='p' || num=='P' ) )  || 
		                 ( (bug==1) && ( num=='r' || num=='R' ) )  ||
		                 ( (bug==3) && ( num=='s' || num=='S' ) )     )
		              
    			             {
    			             		cout<<"\n\t\t-----------------------------------"; 
          					cout<<"\n\t\t|  * [ AI-BOT WON THE MATCH. ] *  |";
        					cout<<"\n\t\t-----------------------------------\n\n";
    			             }
		           
		          else if(  ( ( num=='p' || num=='P' ) && (bug==1) )  || 
		                    ( ( num=='r' || num=='R' ) && (bug==3) )  ||
		                    ( ( num=='s' || num=='S' ) && (bug==2) )     )
		              
			                 {
			                 	cout<<"\n\t\t-----------------------------------"; 
          					cout<<"\n\t\t|  * [ NO BODY WON THE MATCH. ] * |";
        					cout<<"\n\t\t-----------------------------------\n\n";
			                 }
		              
		               else
    			           {
    			           	cout<<"\n\t\t--------------------------------------\n";
		  			cout<<"\t\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
					cout<<"\t\t----------------------------------------\n";
    			           	break;
    			           }       
		   
		   break;
		}  

	                     
	 	case '3':  
		{
			  
			  cout<<"\n\t\t------------------------------------------------"; 
          	   	  cout<<"\n\t\t|  ** [ WELCOME TO GUESS THE NUMBER GAME ] **  |";
        	   	  cout<<"\n\t\t------------------------------------------------\n\n";

			  int num1= (rand()%10);
			  int num2= (rand()%10);
			  int num3= (rand()%10);
			  int a, b, c;
	
			  cout<<"\n * GUESS THE FIRST NUMBER BETWEEN   [ 1-9 ]  >>> ::  ";
			  cin>>a;
			  cout<<"\n * GUESS THE SECOND NUMBER BETWEEN  [ 1-9 ]  >>> ::  ";
			  cin>>b;
			  cout<<"\n * GUESS THE THIRD NUMBER BETWEEN   [ 1-9 ]  >>> ::  ";
			  cin>>c;
		  
			  if( (a>=0 && a<=9) && (b>=0 && b<=9) && (c>=0 && c<=9) )
			  {
			   if( (a==num1)&&(b==num2)&&(c==num3) )
			    {
				     cout<<"\n\t\t---------------------------------------------------------------------"; 
          			     cout<<"\n\t\t|  * [ ALL THE NUMBERS ARE MATCHING IN EXACTALLY THE SAME ORDER.] * |";
        			     cout<<"\n\t\t---------------------------------------------------------------------\n\n";
		            }
			    
	    			else if( ( (a==num2) && (b==num3) && (c==num1) ) ||
	        	     		 ( (a==num3) && (b==num1) && (c==num2) )    )
	        	     			 
	        	   	{
	        	   		cout<<"\n\t\t-------------------------------------------------------------------"; 
          				cout<<"\n\t\t|  * [ ALL THE NUMBERS ARE MATCHING BUT NOT IN THE SAME ORDER.] * |";
        				cout<<"\n\t\t-------------------------------------------------------------------\n\n";
	        	   		
	        	   		
	        	   		
	        	   	}
	           
	       		    else if( ( (a==num1) && (b==num2) ) ||
	       		             ( (a==num2) && (b==num1) ) ||
	       		             ( (a==num1) && (c==num3) ) ||
	       		             ( (a==num3) && (c==num1) ) ||
	       		             ( (b==num3) && (c==num3) ) ||
	       		             ( (b==num3) && (c==num2) ) ||
	       		             ( (b==num1) && (c==num3) ) ||
	       		             ( (b==num2) && (c==num1) ) ||
	       		             ( (b==num2) && (c==num3) )    )
	       		             
	       		             {
	       		             	cout<<"\n\t\t-------------------------------------------------"; 
          				cout<<"\n\t\t|  * [ ANY OF THE TWO NUMBERS ARE MATCHING. ] * |";
        				cout<<"\n\t\t-------------------------------------------------\n\n";
	       		             }
                    
               		     else if( (a==num1) || (b==num1) || (c==num1) ||
               		              (a==num2) || (b==num2) || (c==num2) ||
               		              (a==num3) || (b==num3) || (c==num3)    )
               		              
               		              {
               		              	     cout<<"\n\t\t-----------------------------------------"; 
          				     cout<<"\n\t\t|  * [ ONLY ONE NUMBER IS MATCHING. ] * |";
        				     cout<<"\n\t\t-----------------------------------------\n\n";
               		              }
                             
               	              else
               		      {
               		      	     cout<<"\n\t\t-------------------------------------------------------------"; 
          			     cout<<"\n\t\t|  * [ NO MATCH FOUND. POOR LUCK. BTW YOU CAN TRY AGAIN.] * |";
        			     cout<<"\n\t\t-------------------------------------------------------------\n\n";
               		      }
            	}
   
      			else
     			 {
     		 		cout<<"\n\t\t--------------------------------------\n";
		  		cout<<"\t\t|   !!!!  ENTER A  VALID  INPUT  !!!!  |\n";
				cout<<"\t\t----------------------------------------\n";
     			 } 
   
      		break;        
		} 

			 case '4':
			{ 
				   cout<<"\n\t\t------------------------------------------"; 
        			   cout<<"\n\t\t|   >>>  EXITING FROM THE GAME BAR  <<<  |";
        			   cout<<"\n\t\t------------------------------------------\n\n";
				   break;
			}
			default:
			{    
				cout<<"\n\t\t-------------------------------------------"; 
        			cout<<"\n\t\t|  >>  RE-DIRECTING TO THE GAME BAR  <<   |";
        			cout<<"\n\t\t-------------------------------------------\n\n";
				
				games(); 		// CALLING THE GAME FUNCTION.
    
			}
    
	}
		
		char exit;
		
		cout<<"\n\t\t------------------------------------------"; 
        	cout<<"\n\t\t|  DO YOU WANT TO PLAY AGAIN ?  [ Y/N ]  |";
        	cout<<"\n\t\t------------------------------------------\n\n";
		
		cin>>exit;
		if(exit=='n' || exit=='N')
		{
			cout<<"\t -"<<setfill('-')<<setw(37)<<"-"<<setfill(' ')<<endl;
			cout<<"\t | "<<setw(35)<<left<<"   [ ****** GAME ENDED ****** ] "<<"|\n";
  			cout<<"\t | "<<setw(35)<<left<<" REDIRECTING TO THE SELECTION MENU "<<"|\n";
  			cout<<"\t | "<<setw(35)<<left<<"            GOOD BYE ! "<<"|\n";
  			cout<<"\t -"<<setfill('-')<<setw(37)<<"-"<<setfill(' ')<<endl;
			break;
			
		}
		else if(exit=='y' || exit=='Y')
		{
			cout<<"\n ******* SELECT THE GAME YOU WANT TO PLAY AGAIN ******* \n";
	
		}continue;

   


}while(1);

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void see_response()
{
	
	char c;
				
				cout<<"\n\t DO YOU WANT TO SEE THE RESPONSE OF [ ADMIN / EMPLOYEE ] AT YOUR ORDER ? \n";
				cout<<"\t >> PRESS [Y/y] TO SEE AND [ ANY KEY ] TO RETURN << \n";
				
				cin>>c;
				
				if(c=='Y' || c=='y')
				{
					const int f = 400 ;
					char get[f];
					int n=1 ;
					
					ifstream read("responseOrder.txt" , ios::in );		
										
									// READING AND DISPLAYING AT A TIME.
					
					while( read.getline (get , f ) )
					{
						cout<<" [ "<<n<<" ]  ::  "<<get<<endl;
						n++ ;
					}
					read.close();			// CLOSE FILE TO AVOID CORRUPTION.
					
				}
				else
				{
					return;
				}
				
	return;

}


