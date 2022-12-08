
#include<iostream>
#include<string>
#include<time.h>
using namespace std;

class hotel
{  
   int room[100];
   int roomN[5] = {101,102,103,104,105};
   int Ncount[5] = {1,1,1,1,1};
   int roomA[5] = {201,202,203,204,205};
   int Acount[5] = {1,1,1,1,1};
   int roomD[5] = {301,302,303,304,305};
   int Dcount[5] = {1,1,1,1,1};
   int roomS[5] = {401,402,403,404,405};
   int Scount[5] = {1,1,1,1,1};

   char room_type[4] = {'N','A','D','S'};                      
   int room_count[4] = {5,5,5,5};
   int prices[4] = {200,500,1000,1500};
   
   string name[100];
   string id[100];
   string phn[100];
   string city[100];
   char rt[100];
   int payment[100];
   int paid[100];
   string indate_time[100];
   string outdate_time[100];

   public:

   void info(int a)
   {
      cout<<"Name : "<<name[a]<<endl;
      cout<<"Room no : "<<room[a]<<endl;
      cout<<"Phn no : "<<phn[a]<<endl;
      cout<<"City : "<<city[a]<<endl;
      cout<<"Aadhar id : "<<id[a]<<endl;
      cout<<"Checkin date&time : "<<indate_time[a];
      cout<<"Checkout date&time : "<<outdate_time[a]<<endl;
      cout<<endl;
   }

   void cust_info()
   {  
      string m;
      cout<<"Enter customer name : ";
      cin>>m;
      cout<<endl;

      for(int i=0; i<100; i++)
      {
         if(m==name[i])
         {
            info(i);
         }
      }
   }
   
   void details(int a)
   {
      cout<<"Name : "<<name[a]<<endl;
      cout<<"Phone no : "<<phn[a]<<endl;
      cout<<"City : "<<city[a]<<endl;
      cout<<"Aadhar id : "<<id[a]<<endl;
      cout<<"Checkin date & time : "<<indate_time[a]<<endl;
      cout<<"Amount paid : "<<paid[a]<<endl;
      cout<<endl;
   }

   void checkout()
   {  
      int p;
      cout<<"Enter customer room number : ";
      cin>>p;
      cout<<endl;
      
      for(int i = 0; i<100; i++)
      {  
         
         if(p == room[i])
         {
            
            cout<<"Name : "<<name[i]<<endl;
            cout<<"Checkin date & time : "<<indate_time[i]<<endl;
            cout<<"Amount paid : "<<paid[i]<<endl;
            cout<<endl;
            cout<<"Thank you Visit again :)"<<endl;
            cout<<endl;

          
          time_t ct = time(0);
          outdate_time[i] = ctime(&ct);

          for(int j=0; j<4;j++)
          {
            if(rt[i] == room_type[j])
            {
               room_count[j]++;
            }

            if(room[i] == roomN[j])
            {
              Ncount[j] = 1;
            }

            if(room[i] == roomA[j])
            {
              Acount[j] = 1;
            }

            if(room[i] == roomD[j])
            {
              Dcount[j] = 1;
            }

            if(room[i] == roomS[j])
            {
              Scount[j] = 1;
            }

          }

         }

      }
   }
	
   void rooms_data()
   {
      cout<<"ROOM TYPE\tCOST\tROOMS AVAILABLE"<<endl;
      cout<<"NORMAL      \t"<<prices[0]<<"\t"<<room_count[0]<<endl;
      cout<<"AC          \t"<<prices[1]<<"\t"<<room_count[1]<<endl;
      cout<<"DELUXE      \t"<<prices[2]<<"\t"<<room_count[2]<<endl;
      cout<<"SUPER DELUXE\t"<<prices[3]<<"\t"<<room_count[3]<<endl;
      cout<<endl;
   }
    
   void Hotel_managing()
   {
      
      for(int i=0; i<100; i++)
      {

      outdate_time[i] = "Nil";
      indate_time[i] = "Nil";

		int m;
        cout<<"1) CHECKIN\n2) CHECKOUT\n3) AVAILABLE ROOMS\n4) CUSTOMER INFO\n5) EXIT"<<endl;
        cin>>m;
        cout<<endl;
        

      if(m==2)
      {
        checkout();
      }
      
      else if(m==3)
      {
        rooms_data();
        cout<<endl;
      }

      else if(m==4)
      {
         cust_info();
      } 

      else if(m==5)
      {
        break;
      }

	   else if(m==1)
      {
    
      cout<<"Enter customer name : ";
      cin>>name[i];
      cout<<"Enter customer phn number : ";
      cin>>phn[i];
      cout<<"Enter customer city : ";
      cin>>city[i];
      cout<<"enter customer aadhar id : ";
      cin>>id[i];
      cout<<endl;

      cout<<"Select room type(N/A/D/S) :\nNormal\nAC\nDeluxe\nSuperDeluxe"<<endl;
      cin>>rt[i];
      cout<<endl;

      for(int j=0; j<4; j++)
      {  
         if(room_count[j]>0)
         {
         if(rt[i] == room_type[j])
         {
            cout<<"Pay "<<prices[j]<<" rupees"<<endl;
            paid[i] = prices[j];

            if(rt[i]=='N')
            {
              for(int j=0; j<5; j++)
              {
                if(Ncount[j]==1)
                {
                  room[i] = roomN[j];
                  Ncount[j] = 0;
                  break;

                } 
              }
            }

            if(rt[i]=='A')
            {
              for(int j=0; j<5; j++)
              {
                if(Acount[j]==1)
                {
                  room[i] = roomA[j];
                  Acount[j] = 0;
                  break;
                } 
              }
            }

            if(rt[i]=='D')
            {
              for(int j=0; j<5; j++)
              {
                if(Dcount[j]==1)
                {
                  room[i] = roomD[j];
                  Dcount[j] = 0;
                  break;
                } 
              }
            }

            if(rt[i]=='S')
            {
              for(int j=0; j<5; j++)
              {
                if(Scount[j]==1)
                {
                  room[i] = roomS[j];
                  Scount[j] = 0;
                  break;
                } 
              }
            }
            
            cout<<"Room no-"<<room[i]<<" is allocated"<<endl;
            room_count[j]--;

            time_t cti = time(0);
            indate_time[i] = ctime(&cti);
            cout<<endl;
         }
         }

         else if(room_count[j]<=0)
         {
            cout<<"Sorry that type of room is unavailable now"<<endl;
         }

      }
      
      }
	 } 
  }

};

int main()
{ 

  cout<<endl;
	cout<<"\t\t\t\t\t\t---------"<<endl;
	cout<<"\t\t\t\t\t\tHOTEL CPP"<<endl;
	cout<<"\t\t\t\t\t\t---------"<<endl;

   hotel h;
   h.Hotel_managing();

   return 0;
}
