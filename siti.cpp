#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#define xmap 25
#define ymap 25
using namespace std;

//function
char getInput (int posisix, int posisiy) {
	cout << "\ \"a\" \"d\" w\"s\" \" untuk menggerakkan mario] [& = MARIO] [x = MUSUH] [* = Point]";
	cout<<endl<<"posisi x = "<<posisix<<" posisi y = "<<posisiy;
  char input=getch();
  return input;
}
//struct
struct Data {
	string nama;
	string nim;
	string kelas;
} data;
int main()
{
 data.nama = "SITI NURHAYATI GUNAWAN ";
 data.nim = "1217050135";
 data.kelas = "PrakAlpro G";		
 int x,y,posisix,posisiy;
 char input;
 int point = 0 ;
 
 string dir = "";

//pointer
char *arah[4];

 *arah ="Start!";
 int map[xmap][ymap]= {
 	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
 	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
 	1,1,0,0,0,0,0,0,0,0,0,4,1,4,0,3,0,4,0,0,4,0,0,1,1,
 	1,1,0,0,0,0,4,0,0,0,3,4,1,0,4,0,0,0,0,0,0,0,0,1,1,
 	1,1,0,0,0,0,0,0,0,0,0,3,0,4,0,0,0,0,0,3,0,0,0,1,1,
 	1,1,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,3,0,0,4,0,1,1,
 	1,1,0,0,0,0,0,0,4,0,0,0,1,0,0,0,0,3,0,0,0,0,0,1,1,
	1,1,0,0,3,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,
 	1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,
 	1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,
 	1,1,3,0,0,3,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,1,
 	1,1,0,4,0,0,3,0,0,0,0,0,0,0,3,0,0,0,3,0,0,3,0,0,1,
 	1,1,3,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,4,0,0,0,0,1,
 	1,1,0,0,0,0,0,0,0,0,0,2,0,0,3,0,0,0,4,0,0,3,0,0,1,
 	1,1,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
 	1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,
 	1,1,0,0,4,0,0,0,0,3,0,0,1,0,4,0,0,0,0,0,0,0,0,0,1,
 	1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,
 	1,1,0,0,3,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,3,0,1,
 	1,1,0,0,3,0,4,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,1,
 	1,1,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,4,0,0,0,3,0,0,1,
 	1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,3,0,0,0,1,
 	1,1,0,0,3,0,0,0,0,0,3,0,1,0,0,0,0,0,3,0,0,0,0,0,1,
 	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	

 
};
 while(input != 'x'){
  cout<<"\t\t				(-----MARIO MENCARI POINT-----)"<<endl;
  cout<<"\t\t 	"<<data.nama << endl;
  cout<<"\t\t 		"<<data.nim  << endl;
  cout<<"\t\t			"<<data.kelas << endl;
  cout<< "Point : "<< point<<endl;
  
   //lopping untuk draw map
  for (x=0;x<xmap;x++){
   for (y=0;y<ymap;y++){
    if (map[x][y]==1){
     cout<<"#";
    }
    else if (map[x][y]==2){
     cout<<*arah;
     posisix=x;
     posisiy=y;
    }
    else if (map[x][y]==3){
     cout<<"*";
    }
    else if (map[x][y]==4){
     cout<<"x";
    }
    else {cout<<" ";}
   }
   cout<<" "<<endl;
  }
   input = getInput(posisix, posisiy);
  if(input=='s'){
  	
   if (map[posisix+1][posisiy]==0 || map[posisix+1][posisiy]==2){
    dir = "Bawah";
	map[posisix][posisiy]=0;
    map[posisix+1][posisiy]=2;
    *arah="&";
    }
    else if(map[posisix+1][posisiy]==3){
    	point += 100;
    map[posisix][posisiy]=0;
    map[posisix+1][posisiy]=2;
   }
    else if(map[posisix+1][posisiy]==4){
    	point -= 100;
    map[posisix][posisiy]=0;
    map[posisix+1][posisiy]=2;
   }
   }
  else if(input=='d'){
  	
   if (map[posisix][posisiy+1]==0 || map[posisix][posisiy+1]==2){
    dir = "Kanan";
	map[posisix][posisiy]=0;
    map[posisix][posisiy+1]=2;
    *arah="&";
    }
    else if(map[posisix][posisiy+1]==3){
    	point += 100;
    	map[posisix][posisiy]=0;
    	map[posisix][posisiy+1]=2;
	}
	else if(map[posisix][posisiy+1]==4){
    	point -= 100;
    	map[posisix][posisiy]=0;
    	map[posisix][posisiy+1]=2;
	}
	
   }
  else if(input=='a'){
   if (map[posisix][posisiy-1]==0 || map[posisix][posisiy-1]==2){
    dir = "Kiri";
	map[posisix][posisiy]=0;
    map[posisix][posisiy-1]=2;
    *arah="&";
   }
     else if(map[posisix][posisiy-1]==3){
     	point += 100;
    	map[posisix][posisiy]=0;
    	map[posisix][posisiy-1]=2;
  }
  else if(map[posisix][posisiy-1]==4){
     	point -= 100;
    	map[posisix][posisiy]=0;
    	map[posisix][posisiy-1]=2;
  }
  }
  else if(input=='w'){
  	
   if (map[posisix-1][posisiy]==0 || map[posisix-1][posisiy]==2){
    dir = "Atas";
	map[posisix][posisiy]=0;
    map[posisix-1][posisiy]=2;
    *arah="&";
    }
      else if(map[posisix-1][posisiy]==3){
      	point += 100;
    	map[posisix][posisiy]=0;
    map[posisix-1][posisiy]=2;
   }
   else if(map[posisix-1][posisiy]==4){
      	point -= 100;
    	map[posisix][posisiy]=0;
    map[posisix-1][posisiy]=2;
   }
   }
   if (map[posisix][posisiy] == 3)
{
    map[posisix][posisiy] = 1;
}
	if(point < 0){
		input = 'x';
	}
  system("cls");
 }
 
  system("cls");
  cout << "\t\t\tGame Over ";
 
}
