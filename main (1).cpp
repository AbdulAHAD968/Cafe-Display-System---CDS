#include "header.h"

////////////////////////////////////////// [ MAIN FUNCTION ] ///////////////////////////////////////////////

int main(){

	  char role;			// Taking the role in CHARACTER data-type to manage input in character.
	  char exit;
	
	  	cout<< "\n\t\t---------------------------------------";
        	cout<< "\n\t\t| ----------------------------------- |"; 
        	cout<< "\n\t\t| | >> WELCOME TO THE FAST CAFE <<  | |";
        	cout<< "\n\t\t| |   >>    [ جَنابِ مُحْتَرَم ]    <<    | |";
        	cout<< "\n\t\t| ----------------------------------- |";
        	cout<< "\n\t\t---------------------------------------\n\n";

   do{
  
  	cout<< "\n\t\t------------------------------------------"; 
        cout<< "\n\t\t| >>>   PLEASE DEFINE YOUR ROLE    <<<   |";
        cout<< "\n\t\t------------------------------------------\n\n";
	
	buttons();
	
  	cout<<"\n\t\t -"<<setfill('-')<<setw(50)<<"-"<<setfill(' ')<<endl;
  	cout<<"\t\t | "<<setw(48)<<left<<"<< ENTER THE RESEPCTED NUMBER TO PROCEED >> "<<"|\n";
  	cout<<"\t\t | "<<setw(48)<<left<<"1. ADMIN OF THE CAFE DISPLAY SYSTEM "<<"|\n";
  	cout<<"\t\t | "<<setw(48)<<left<<"2. EMPLOYEES OF THE CAFE DISPLAY SYSTEM "<<"|\n";
  	cout<<"\t\t | "<<setw(48)<<left<<"3. STUDENTS / STAFF OF THE CAFE DISPLAY SYSTEM "<<"|\n";
  	cout<<"\t\t | "<<setw(48)<<left<<"4. EXIT THE CAFE DISPLAY SYSTEM "<<"|\n";
  	cout<<"\t\t -"<<setfill('-')<<setw(50)<<"-"<<setfill(' ')<<endl;
  
  	cin>>role;
  
  	if( role<='0' || role>='9' )
  	{
  		cout<<"\n\t #################   WARNING    ###################\n"; 
		cout<<"\n\t !!!!!!!! KINDLY AVOID ENTERING CHARACTRES !!!!!!!! \n\n";
		cout<<"\t ------- RE-ENTER THE CASE ------- \n";
		cout<<"\n\t ------- THE MAIN MENUE WILL BE SHORTLY DISPLAYED -------\n\n";
		continue;
			
  	}
  	
  	
  	if( role>='0' && role<='9' )
  {
  	  
  	cout<< "\n\t\t--------------------------------------------------"; 
        cout<< "\n\t\t|    ** [ THANKS FOR YOUR COOPERATION ] **       |";
        cout<< "\n\t\t| GRANTING YOU ACCESS ACCORDING TO YOUR CHOICE > |";
       	cout<< "\n\t\t--------------------------------------------------\n\n";
 	
  	
////////////////////////////////////////// [ ENTERING THE RELEVANT CASE USING SWITCH ] ////////////////////////////////////
 
  	
  	switch(role)
  	  {
  		case '1':
  		
  		cout<< "\n\t\t--------------------------------------------------"; 
        	cout<< "\n\t\t|     >>>  WELCOME BACK! ESTEEMED ADMIN  <<<     |";
        	cout<< "\n\t\t|    <<<  FIRST LET US VERIFY YOUR IDENITY >>>   |";
        	cout<< "\n\t\t--------------------------------------------------\n\n";
        	
  		Adminlogin();					// CALLING THE ADMIN LOGIN FUNCTION.
  		
  		break;
  		case '2':
  	
  		cout<< "\n\t\t--------------------------------------------------"; 
        	cout<< "\n\t\t|     >>>  WELCOME BACK! DEAR EMPLOYEE   <<<     |";
        	cout<< "\n\t\t|    <<<  FIRST LET US VERIFY YOUR IDENITY >>>   |";
        	cout<< "\n\t\t--------------------------------------------------\n\n";
        	
  		Employeelogin(); 				// CALLING THE EMPLOYEE LOGIN FUNCTION.
  		
  		break;
  		case '3':
  		{
  			
  			char no;
  			
  			cout<< "\n\t\t---------------------------------------------------"; 
        		cout<< "\n\t\t|  DO YOU HAVE AN ACCOUNT OR YOU ARE NEW [ Y/N ]  |";
        		cout<< "\n\t\t|  ALREADY HAVE AN ACCOUNT [ Y/y ]  OR DONT [N/n] |";
        		cout<< "\n\t\t---------------------------------------------------\n\n";
        		
        		cin>>no;
        		
        		if(no=='Y' || no=='y')
  			{
  				cout<< "\n\t\t--------------------------------------------------"; 
        			cout<< "\n\t\t|     >>>  WELCOME BACK! ESTEEMED USER   <<<     |";
        			cout<< "\n\t\t|    <<<  FIRST LET US VERIFY YOUR IDENITY >>>   |";
        			cout<< "\n\t\t--------------------------------------------------\n\n";
        		
  				std_stafflogin(); 				// CALLING THE CUSTOMER LOGIN FUNCTION.
  			}
  			else if(no=='n' || no=='N')
  			{
  				new_user();
  			}
  			else
  			{
  				cout<<"\n\t INVALID INPUT \n";
  				break;
  			}
  		}
  		
  		break;
  		case '4':
  		
  		cout<<"\t\t -"<<setfill('-')<<setw(50)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(48)<<left<<"          ** TERMINATING THE PROGRAM ** "<<"|\n";
  		cout<<"\t\t | "<<setw(48)<<left<<"             && THANKS FOR COMING && "<<"|\n";
  		cout<<"\t\t | "<<setw(48)<<left<<"\t              خدا حافظ "<<"   |\n";
  		cout<<"\t\t -"<<setfill('-')<<setw(50)<<"-"<<setfill(' ')<<endl<<endl;
  		
  		return 0;
  		
  		break;
  		default:
  		
  		cout<<"\t -"<<setfill('-')<<setw(40)<<"-"<<setfill(' ')<<endl;
  		cout<<"\n\t !!!!!!!  ENTER A VALID INPUT  !!!!!!! \n";
		cout<<"\t -"<<setfill('-')<<setw(40)<<"-"<<setfill(' ')<<endl;
	
  		break;
  	  }
  	  
   
	cout<< "\n\t\t--------------------------------------------------"; 
        cout<< "\n\t\t|  DO YOU WANT TO TERMINATE THE PROGRAM [ Y/N ]  |";
        cout<< "\n\t\t--------------------------------------------------\n\n";
	
	cin>>exit;

	if(exit=='y' || exit=='Y')
	{
		cout<<"\t\t -"<<setfill('-')<<setw(50)<<"-"<<setfill(' ')<<endl;
		cout<<"\t\t | "<<setw(48)<<left<<"    ** THE PROGRAM TERMINATED SUCCESSFULLY ** "<<"|\n";
	  	cout<<"\t\t | "<<setw(48)<<left<<"             && THANKS FOR COMING && "<<"|\n";
	  	cout<<"\t\t | "<<setw(48)<<left<<"\t              خدا حافظ "<<"   |\n";
	  	cout<<"\t\t -"<<setfill('-')<<setw(50)<<"-"<<setfill(' ')<<endl;
	  	
	  	
		return 0;
	}
	else if(exit=='n' || exit=='N')
	{
		cout<<"\n ******* SELECT THE FUNCTION YOU WANT TO PERFORM AGAIN ******* \n\n";
		
	}continue;
	
	}
	
	
     }while(1);


return 0;
}


void new_user()					// [ 4 ] #############################
{
	
	cout<< "\n\t\t--------------------------------------------------"; 
        cout<< "\n\t\t|     >>>  SINCE YOU ARE A NEW USER. SO  <<<     |";
        cout<< "\n\t\t|    <<< YOU CAN JUST ORDER FOOD FROM HERE >>>   |";
        cout<< "\n\t\t--------------------------------------------------\n\n";
	
	
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

   			online<<"ORDERED BY[N.S] : " << NAME <<endl;
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


/////////////////////////////////////////////////// [ BUTTONS-MENU ] ///////////////////////////////////////////////////



void buttons()
{
		cout<<"\n\t\t __________________________________";
		cout<<"\n\t\t|   PRESS THE BUTTON {ONLY ONE}    |";
		cout<<"\n\t\t|    __________________________    |";
		cout<<"\n\t\t|   |                          |   |";
		cout<<"\n\t\t|   |    ' 1 '   ' 2 '   ' 3 ' |   |";
		cout<<"\n\t\t|   |                          |   |";
		cout<<"\n\t\t|   |    ' 4 '   ' 5 '   ' 6 ' |   |";
		cout<<"\n\t\t|   |                          |   |";
		cout<<"\n\t\t|   |    ' 7 '   ' 8 '   ' 9 ' |   |";
		cout<<"\n\t\t|   |__________________________|   |";
		cout<<"\n\t\t|__________________________________|\n\n";
		
		return;
}



