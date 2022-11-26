#include<bits/stdc++.h>
using namespace std; 

class product{
    public: 
    int id;         // unique for each product 
    string name;    
    int price; 
    int gst; 
    int qty; 
   
    product(int id1, string name1, int price1, int gst1, int qty1){
      id=id;
      name=name1;
      price=price1;
      gst=gst1;
      qty=qty1;
    }
}; 

int main(){
  
  product p0(0,"Leather Wallet", 1100, 18, 1);
  product p1(1, "Umbrella", 900, 12, 4);
  product p2(2, "Cigaretee", 200, 28, 3);
  product p3(3, "Honey", 100, 0, 2);
  
  vector<product> p;       // vector for further ease in calculation
  p.push_back(p0);
  p.push_back(p1);
  p.push_back(p2);
  p.push_back(p3);
  
  float maxGst=0;         // as gst can be in decimal
  float totalAmount=0;   // to store m
  string name;          // to store product name with maxm gst. 
  
  for(int i=0; i<4; i++){
     
     int cost;
     if(p[i].price >= 500){                   // apply discount if unit price >=500 
       cost = p[i].price * p[i].qty * .95;
     }
     else{                                  
       cost = p[i].price * p[i].qty;
     }
     float gst = cost*p[i].gst/100.0;  // calculate gst on final price. 
     
     totalAmount += cost + gst; 
     if(gst > maxGst ){
        maxGst = gst;
        name = p[i].name; 
     } 
  }
  
  cout<<name<<" has maximum gst of : "<<maxGst<<"\n"; 
  cout<<"total amount to be paid to shopkeeper is : "<<totalAmount<<"\n"; 
  return 0; 
}

/*

Sangam kumar 
registration number : 2019UGEC047R
IIIT RANCHI
year of passing : 2023 
mobile no : 8115684727
email id : sangamkumar.btech.ec19@iiitranchi.ac.in

*/