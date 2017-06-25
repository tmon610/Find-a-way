  //bot at centre of grid
  //princess at one of the corners
  //output displays the moves you need to rescue the princess
  //m is at m/2,m/2
  #include <graphics.h>
  #include <stdio.h>
  #include <string.h>
  #include <math.h>

  void displayPathtoPrincess(int n, char grid[101][101])
  {
  	

  	int gm;
  	int i,j,k; 
  	int gd=DETECT; 
      initgraph(&gd,&gm,"NULL"); 

    setcolor(BLUE);
    rectangle(0,200,50,250);
    rectangle(50,200,100,250);
    rectangle(100,200,150,250);
    rectangle(0,250,50,300);
    rectangle(100,250,150,300);
    rectangle(0,300,50,350);
    rectangle(50,350,100,350);
    rectangle(100,300,150,350);
    setcolor(YELLOW);
    rectangle(50,250,100,300);

    for(i=0;i<2;i++)
    {
      setcolor(GREEN);
      if(grid[0][0]=='p')
      rectangle(0,200,50,250);
      else
      if(grid[0][2]=='p')
      rectangle(100,200,150,250);
      else
      if(grid[n][0]=='p')
      rectangle(0,300,50,350);
      else
      rectangle(100,300,150,350);

    }

    printf("\n");
       


      //printf("hi\n");

     //logic here
    for(i=0;i<2;i++)
    {  
     //printf("in\n");
     
      for(j=0;j<2;j++)

      { 
        //printf("in2\n");

        if(grid[0][0]=='p')
        {
          //printf("here\n");
          // printf("c1\n");
          for(i=(2/2);i>0;i--)
          printf("UP\t");
          for(j=(2/2);j>0;j--)
          printf("LEFT\t");



          setcolor(BLUE);
          rectangle(300,200,350,250);
          rectangle(200,250,250,300);
          rectangle(300,250,350,300);
          rectangle(200,300,250,350);
          rectangle(250,350,300,350);
          rectangle(300,300,350,350);
          setcolor(RED);
          rectangle(200,200,250,250);
          rectangle(250,200,300,250);
          rectangle(250,250,300,300);
          getch();
        }
        if(grid[2][2]=='p')
        {
           //printf("c2\n");
          for(i=(2/2);i<2;i++)
          printf("DOWN\t");
          for(j=(2/2);j<2;j++)
          printf("RIGHT\t");

          setcolor(BLUE);
          rectangle(200,200,250,250);
          rectangle(250,200,300,250);
          rectangle(300,200,350,250);
          rectangle(200,250,250,300);
          rectangle(300,250,350,300);
          rectangle(200,300,250,350);
          setcolor(RED);
          rectangle(250,300,300,350);
          rectangle(300,300,350,350);
          rectangle(250,250,300,300);

          getch();
        }
        if(grid[0][2]=='p')
        {
            // printf("c3\n");
          for(i=(2/2);i>0;i--)
          printf("UP\t");
          for(j=(2/2);j<2;j++)
          printf("RIGHT\t");



          setcolor(BLUE);
          rectangle(200,250,250,300);
          rectangle(300,250,350,300);
          rectangle(200,300,250,350);
          rectangle(250,350,300,350);
          rectangle(300,300,350,350);
          rectangle(200,200,250,250);
          setcolor(RED);
          rectangle(250,200,300,250);
          rectangle(300,200,350,250);
          rectangle(250,250,300,300);
          getch();
        }
        if(grid[2][0]=='p')
        {
          //   printf("c4\n");
          for(i=(2/2);i<2;i++)
          printf("DOWN\t");
          for(j=(2/2);j>0;j--)
          printf("LEFT\t");


          setcolor(BLUE);
          rectangle(200,200,250,250);
          rectangle(250,200,300,250);
          rectangle(300,200,350,250);
          rectangle(200,250,250,300);
          rectangle(300,250,350,300);
          rectangle(300,300,350,350); 
          setcolor(RED);
          rectangle(200,300,250,350);
          rectangle(250,300,300,350);
          rectangle(250,250,300,300);
          getch();
        }
      } 

    } 
         
         


    cleardevice();
    getch(); 

  }


int main(void) {
    		


   int n,i=0,j=0;
   char c;
   printf("enter matrix size");
   scanf("%d",&n);
   scanf("%c",&c);
   char grid[101][101];
   printf("enter matrix\n");
   for( i=0; i<n; i++) 
    {
      for( j=0; j<n; j++) 
      {
        printf("Enter b%d%d:",i,j);
                   
        scanf("%c", &grid[i][j]);      
        scanf("%c",&c);
        
      }
    }


    /*
         for( i=0; i<n; i++) {
            for( j=0; j<n; j++) {
            
            printf("%c\t", grid[i][j]);      
        
        }
      printf("\n");
        }
    */


    printf("\n");
    displayPathtoPrincess(n,grid);
    printf("end\n");
    return 0;
}
