#include<stdio.h>



void write_a(){
int col=5;
int row=5;
char* draw[row][col];
int i,j;

for (i=0;i<col;i++)
  {
    for(j=0;j<row;j++)
    {
       draw[i][j]="*";
     }

  }
draw[0][0]=" "; 
draw[0][4]=" ";
draw[1][1]=" "; draw[1][2]=" "; draw[1][3]=" "; 
draw[3][1]=" "; draw[3][2]=" "; draw[3][3]=" "; 
draw[4][1]=" "; draw[4][2]=" "; draw[4][3]=" "; 

for (i=0;i<col;i++)
  {
    for(j=0;j<row;j++)
    {
       printf("%s",draw[i][j]);
     }
    printf("\n");
  }


}

void write_b(){
int col=5;
int row=5;
char* draw[row][col];
int i,j;

for (i=0;i<col;i++)
  {
    for(j=0;j<row;j++)
    {
       draw[i][j]="*";
     }

  }
draw[0][4]=" "; 
draw[1][1]=" "; draw[1][2]=" "; draw[1][3]=" "; 
draw[3][1]=" "; draw[3][2]=" "; draw[3][3]=" "; 
draw[4][4]=" "; 

for (i=0;i<col;i++)
  {
    for(j=0;j<row;j++)
    {
       printf("%s",draw[i][j]);
     }
    printf("\n");
  }


}
void write_c(){
int col=5;
int row=5;
char* draw[row][col];
int i,j;

for (i=0;i<col;i++)
  {
    for(j=0;j<row;j++)
    {
       draw[i][j]="*";
     }

  }
draw[0][0]=" ";
draw[1][1]=" "; draw[1][2]=" "; draw[1][3]=" "; draw[1][4]=" "; 
draw[2][1]=" "; draw[2][2]=" "; draw[2][3]=" "; draw[2][4]=" "; 
draw[3][1]=" "; draw[3][2]=" "; draw[3][3]=" "; draw[3][4]=" "; 
draw[4][0]=" ";
for (i=0;i<col;i++)
  {
    for(j=0;j<row;j++)
    {
       printf("%s",draw[i][j]);
     }
    printf("\n");
  }


}

void write_d(){
int col=5;
int row=5;
char* draw[row][col];
int i,j;

for (i=0;i<col;i++)
  {
    for(j=0;j<row;j++)
    {
       draw[i][j]="*";
     }

  }
draw[0][4]=" ";
draw[1][1]=" "; draw[1][2]=" "; draw[1][3]=" "; 
draw[2][1]=" "; draw[2][2]=" "; draw[2][3]=" ";
draw[3][1]=" "; draw[3][2]=" "; draw[3][3]=" ";
draw[4][4]=" ";
for (i=0;i<col;i++)
  {
    for(j=0;j<row;j++)
    {
       printf("%s",draw[i][j]);
     }
    printf("\n");
  }


}

void write_e(){
int col=5;
int row=5;
char* draw[row][col];
int i,j;

for (i=0;i<col;i++)
  {
    for(j=0;j<row;j++)
    {
       draw[i][j]="*";
     }

  }
draw[1][1]=" "; draw[1][2]=" "; draw[1][3]=" "; draw[1][4]=" "; 
draw[3][1]=" "; draw[3][2]=" "; draw[3][3]=" "; draw[3][4]=" "; 
for (i=0;i<col;i++)
  {
    for(j=0;j<row;j++)
    {
       printf("%s",draw[i][j]);
     }
    printf("\n");
  }


}

void write_f(){
int col=5;
int row=5;
char* draw[row][col];
int i,j;

for (i=0;i<col;i++)
  {
    for(j=0;j<row;j++)
    {
       draw[i][j]="*";
     }

  }
draw[1][1]=" "; draw[1][2]=" "; draw[1][3]=" "; draw[1][4]=" ";
draw[3][1]=" "; draw[3][2]=" "; draw[3][3]=" "; draw[3][4]=" ";
draw[4][1]=" "; draw[4][2]=" "; draw[4][3]=" "; draw[4][4]=" ";
for (i=0;i<col;i++)
  {
    for(j=0;j<row;j++)
    {
       printf("%s",draw[i][j]);
     }
    printf("\n");
  }


}

void write_g(){
int col=5;
int row=5;
char* draw[row][col];
int i,j;

for (i=0;i<col;i++)
  {
    for(j=0;j<row;j++)
    {
       draw[i][j]="*";
     }

  }
draw[1][1]=" "; draw[1][2]=" "; draw[1][3]=" "; draw[1][4]=" ";
draw[2][1]=" "; draw[2][2]=" "; 
draw[3][1]=" "; draw[3][2]=" "; draw[3][3]=" "; 

for (i=0;i<col;i++)
  {
    for(j=0;j<row;j++)
    {
       printf("%s",draw[i][j]);
     }
    printf("\n");
  }


}
int main(){

write_a();
write_b();
write_c();
write_d();
write_e();
write_f();
write_g();
}

