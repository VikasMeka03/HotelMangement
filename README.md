                                                       ## HOTEL MANAGEMENT ##



by                
VIKAS MEKA             
RAM CHARAN             

How to run the program :-                   

*The 'HOTEL CPP' contains 4 floors, each floor has 5 rooms.                  
 Rooms in the first floor(101to105) are normal rooms. RS200 per day.                   
 Rooms in the first floor(201to205) are AC rooms. RS500 per day.                    
 Rooms in the first floor(301to305) are deluxe rooms. RS1000 per day                 
 Rooms in the first floor(401to405) are super deluxe rooms. RS1500 per day.                            

*This program contains five options.  1)CHECK IN  2)CHECK OUT  3)AVAILABLE ROOMS  4)CUSTOMER INFO  5)EXIT.     
*A customer selects a room among the four types of rooms through 'CHECK IN' option, his data will be taken and room will be alloted if available.  
![hm_1](https://user-images.githubusercontent.com/119169280/206503526-be2be672-e1d3-4f07-a4ce-61f2acc30997.png)




 
*The customer checkouts through 'CHECK OUT' option by entering his room number, paying the amount and his outtime will be recorded.   
![hm_2](https://user-images.githubusercontent.com/119169280/206503605-999a1b26-c4ba-4adf-8fff-adeb292ffbf5.png)
                              
                 
                             


*For the next cutomer who checks in, the immediate checked out room will be alloted or the availabl room.
![hm_3](https://user-images.githubusercontent.com/119169280/206503764-42232468-0c36-41e2-b5f0-affdd97f6d96.png)
                       
                    
                     


*The 'AVAILABLE ROOMS' option displays the information about the rooms, their cost and which rooms are available.
![hm_4](https://user-images.githubusercontent.com/119169280/206503860-4041b4f0-cbfe-4754-80e1-7f3981abd8cb.png)
                                
                          
                           


*The 'CUSTOMER INFO' option displays the full information about a customer when his/her name is entered.                
 The information contains his room number,contact number,address,aadhar id, date&time he visited and left the hotel. 
 ![hm_5](https://user-images.githubusercontent.com/119169280/206504000-ab4bef77-d884-418e-9291-305cc424fc2d.png)
                               
                            
                                  
*You can stop the program through 'EXIT' option.                    
                                                                            
                           
UML:-                   
                  
![htl_uml](https://user-images.githubusercontent.com/119169280/206509135-5a8168b5-3c3d-44bd-93c8-49d87f7a8d95.png)
 
 CODE DETAILS :              
                    
*We have declared 4 arrays each contain the room numbers of rooms in each floor.           
                         
*Another 4 arrays are declared with ???1???s initially, implying that every room is ready for allotment.              
              
*When a room is allotted, 1 is replaced with 0 so that when the next customer asks for the room, same room is not allotted.                
               
*Some string, int arrays were declared to store the data of the customers.              
                   
*The for loop from i=1 takes the necessary information of the customer and stores in the respective arrays with ???i??? as index.              
                  
*The  ???customer info??? option calls the cust_info function ,prints the data of the customer when his/her name is entered. It finds the index of the name entered and prints the corresponding data from the string arrays with the index.             
          
*When a room is allotted, its count will be decremented. So that when the count becomes 0, rooms are unavailable and some message will be displayed.                      
               
*The ???Available rooms??? option calls the rooms_data function, prints the all types of rooms and their prices which are initially declared and number of rooms available with count array.                       
                   
*When the customer checks out entering his/her room number, then the ???0??? in the count array is again replaced with ???1??? , so that the room can be allotted to next customer.                    
                       
*We used time.h header file to record the checkin and check out time of customers.           
                  
*When the user enters the exit option the for loop breaks and the program stops.           

                   
                                                                                        
                
