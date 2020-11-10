/*#include <stdio.h>    
  
int main() {
  int a;
  printf("Inserire Int: ");
  scanf("%d", &a);  
  printf("%d",a);
  return 0;
}

#include <stdio.h>
int main()
{
    int a;
    float b;

    printf("Enter integer and then a float: ");
  
    // Taking multiple inputs
    scanf("%d%f", &a, &b);

    printf("You entered %d and %f", a, b);  
    return 0;
}

#include <stdio.h>


int somma(int x, int y)
{
  int f = x + y;
  if(x == y) {
    printf("Numeri uguali\n");
    return 100;
  }
  return f;
}


int main()
{
    int a;
    int b;

    printf("Inserire primo Int: ");
    scanf("%d", &a);

    printf("Inserire secondo Int: ");
    scanf("%d", &b);

    int c = somma(a,b);
    printf("Somma: %d\n",c);
    return 0;
}
#include <stdio.h>

int main() {

   const int maxInput = 100;
   int i;
   double number, average, sum = 0.0;

   for (i = 1; i <= maxInput; ++i) {
      printf("%d. Enter a number: ", i);
      scanf("%lf", &number);
      
      // go to jump if the user enters a negative number
      if (number < 0.0) {
         goto jump;
      }
      sum += number;
   }

jump:
   average = sum / (i - 1);
   printf("Sum = %.2f\n", sum);
   printf("Average = %.2f", average);

   return 0;
}

#include <stdio.h>

int somma(int x, int y);



int main()
{
    int a;
    int b;

    printf("Inserire primo Int: ");
    scanf("%d", &a);

    printf("Inserire secondo Int: ");
    scanf("%d", &b);

    int c = somma(a,b);
    printf("Somma: %d\n",c);
    return 0;
}



int somma(int x, int y)
{
  int f = x + y;
  if(x == y) {
    printf("Numeri uguali\n");
    return 100;
  }
  return f;
}#include <stdio.h>
int main()
{
  float a[5][5], b[5][5], result[5][5];

  // Taking input using nested for loop
  printf("Enter elements of 1st matrix\n");
  for (int i = 0; i < 5; ++i)
    for (int j = 0; j < 5; ++j)
    {
      printf("Enter a%d%d: ", i + 1, j + 1);
      scanf("%f", &a[i][j]);
    }

  // Taking input using nested for loop
  printf("Enter elements of 2nd matrix\n");
  for (int i = 0; i < 5; ++i)
    for (int j = 0; j < 5; ++j)
    {
      printf("Enter b%d%d: ", i + 1, j + 1);
      scanf("%f", &b[i][j]);
    }

  // adding corresponding elements of two arrays
  for (int i = 0; i < 5; ++i)
    for (int j = 0; j < 5; ++j)
    {
      result[i][j] = a[i][j] + b[i][j];
    }

  // Displaying the sum
  printf("\nSum Of Matrix:\n");

  for (int i = 0; i < 5; ++i)
    for (int j = 0; j < 5; ++j)
    {
      printf("%.1f\t", result[i][j]);

      if (j == 1)
        printf("\n");
    }
  return 0;
}#include <stdio.h>
int main()
{
  int a = 5;
  int b = 10;
  printf("a: %d\n", a);
  printf("b: %d\n", b);

  printf("address of a: %p\n", &a);  
  printf("address of b: %p\n", &b); 

  int *f = &a;

  printf("a: %d\n", a);
  printf("b: %d\n", b);

  printf("address of a: %p\n", &a);  
  printf("address of b: %p\n", &b);


  return 0;
}#include <stdio.h>
int main()
{
   int* pc, c;
   
   c = 22;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  // 22
   
   pc = &c;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 22
   
   c = 11;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 11
   
   *pc = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); // 2
   return 0;
}
#include <stdio.h>
int main() {
   int x[4];
   int i;

   for(i = 0; i < 4; ++i) {
      printf("&x[%d] = %p\n", i, &x[i]);
   }

   printf("Address of array x: %p", x);

   return 0;
}#include <stdio.h>
void swap(int *n1, int *n2);

int main()
{
    int num1 = 5, num2 = 10;


    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);


    // address of num1 and num2 is passed
    swap( &num1, &num2);

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    return 0;
}

void swap(int* n1, int* n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
#include <stdio.h>

void addOne(int* ptr) {
  (*ptr)++; // adding 1 to *ptr
}

int main()
{
  int* p, i = 10;
  p = &i;
  addOne(p);

  printf("%d", *p); // 11
  return 0;
}
#include <stdio.h>
struct Distance
{
    int feet;
    float inch;
} dist1, dist2, sum;

int main()
{
    printf("1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &dist1.feet);

    printf("Enter inch: ");
    scanf("%f", &dist1.inch);
    printf("2nd distance\n");

    printf("Enter feet: ");
    scanf("%d", &dist2.feet);

    printf("Enter inch: ");
    scanf("%f", &dist2.inch);

    // adding feet
    sum.feet = dist1.feet + dist2.feet;
    // adding inches
    sum.inch = dist1.inch + dist2.inch;
}

#include <stdio.h>
#include <string.h>
#define MAX 20

typedef struct
{
  char cognome[30];
  char nome[20];
  int voto;
} alunno;

int main()
{
  alunno a[MAX];
  int n, i, j, trovato;
  char cognome_alunno[20];

  do
  {
    printf("Inserisci il numero di alunni:");
    scanf("%d", &n);
  } while (n < 1 || n > MAX);

  for (i = 0; i < n; i++)
  {
    printf("Inserisci il cognome dell'alunno:");
    scanf("%s", a[i].cognome);
    printf("Inserisci il nome dell'alunno:");
    scanf("%s", a[i].nome);
    printf("Inserisci il voto:");
    scanf("%d", &a[i].voto);
  }

  printf("\nInserisci il cognome dell'alunno da cercare: ");
  scanf("%s", cognome_alunno);

  trovato = 0;
  for (j = 0; j < n; j++)
  {
    if (strcmp(a[j].cognome, cognome_alunno) == 0)
    {
      printf("\nAlunno trovato in posizione %d\nnome:%s\nvoto:%d", j + 1, a[j].nome, a[j].voto);
      trovato = 1;
    }
  }

  if (!trovato)
    printf("\nAlunno non trovato.\n");

  return 0;
}

    if(st[i].name == " " || st[i].name == ""){
      printf("Vuoto");


#include <stdio.h>
#include <string.h>


struct student
{
  int age;
  int voti;
  char CorsodiStudi[30];
  char name[30];
  char surname[30];
};


int main()
{
  int i;
  struct student st[i];
  
  printf("Enter 2 students\n");
  for (i = 0; i < 2; i++)
  {
    printf("\nEnter Name: ");
    scanf("\n%29s", st[i].name);
    printf("\nEnter Surname: ");
    scanf("\n%29s", st[i].surname);
    printf("\nEnter Age: ");
    scanf("\n%d", &st[i].age);
    printf("\nEnter Corso di studi: ");
    scanf("\n%29s", st[i].CorsodiStudi);
    printf("\nEnter Media dei voti: ");
    scanf("\n%d", &st[i].voti);
    printf("\n###################################################################################\n");
  }

  int x;
  printf("\nStudent Information List:\n");
  for (x = 0; x < 2; x++)
  {
    printf("\nName: %s", st[x].name);
    printf("\nSurname: %s", st[x].surname);
    printf("\nAge: %d", st[x].age);
    printf("\nCorso di studi: %s", st[x].CorsodiStudi);
    printf("\nMedia dei Voti: %d", st[x].voti);
    printf("\n###################################################################################\n");
  }
  return 0;
}



#include <stdio.h>
#include <string.h>

int main(){
  int x,y,d;
  printf("\nEnter first number: ");
  scanf("\n%d", &x);
  printf("\nEnter second number: ");
  scanf("\n%d", &y);
  
  if(x == y)
  {
    printf("Numeri uguali\n");
  } else if(x > y){
    d = x - y;
    printf("%d valore più alto di %d\n",x, d);
  } else {
    d = y - x;
    printf("%d valore più alto di %d\n",y, d);
  }
  return 0;
}


#include <stdio.h>
#include <string.h>
#include "test-import.c"


int main(int argc, char const *argv[])
{
  int x;
  printf("Inserisci numero: ");
  scanf("%d",&x);
  testprint(x);
  int *f = poin(x);
  printf("\nPuntatore: %p", f);
  printf("\nPuntatore: %p", &x);
  printf("\nMoltiplicato: %d", x);
  printf("\nMoltiplicato: %d", multy(x));
  return 0;
}


#include <stdio.h>
#include <string.h>
#include "testi.c"



int main(int argc, char const *argv[])
{
  int c[5][5];
  int f = 0;

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      c[i][j] = f++;

      if(find(c[i][j],10) == 0){
        printf("VT  ");
      }else
      {
        printf("%d  ",c[i][j]);
      }
    }
    printf("\n\n");
  }
  return 0;
}

#include <stdio.h>
#include <string.h>
#include "testi.c"



int main(int argc, char const *argv[])
{
  
  char s[] = "Andrea";
  int i;
  size_t f = sizeof(s) / sizeof(char);

  for (i = 0; i < f; i++)
  {
    if(s[i] =='\0'){
      printf("Valore Finale\n");
    }else{
      printf("%c\n",s[i]);
    }
    
  }
  



  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
  int id = fork();
  int n;
  if (id == 0){
    n = 1;
    printf("Processo ID: %d\n", id);
  } else{
    n = 6;
  }

  if(id != 0){
    wait();
  }

  int i;
  for (i = n; i < n + 5; i++)
  {
    printf("%d ",i);
    fflush(stdout);
  }
  if(id != 0){
    printf("\n");
  }
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>

int main(int argc, char const *argv[])
{
  int id1 = fork();
  int id2 = fork();

  if (id1 == 0)
  {
    if (id2 == 0)
    {
      printf("We are process y\n");
    }
    else
    {
      printf("We are process x\n");
    }
  }
  else
  {
    if (id2 == 0)
    {
      printf("We are process z\n");
    }
    else
    {
      printf("We are parent process!!! \n");
    }
  }
  while (wait(NULL) != -1 || errno != ECHILD){
    printf("Waited for a child\n");
  }
  return 0;
}

*/



#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>

int main(int argc, char const *argv[])
{
  int id = fork();
  if( id == 0){
    sleep(1);
  }
  printf("Curret ID: %d, Parrent ID: %d\n", 
  getpid(),
  getppid()
  );

  int res = wait(NULL);
  if( res == -1){
    printf("No childer wait\n");
  }else{
    printf("%d finisced \n",res);
  }
  return 0;
}
