/**
  ****************************************************************************
  * @file    main.c
  * @author  Nawres Khader
  * @brief   Macros 
  * @version V1.0.0
  * @date    27-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define SOM
#define MUL
#define OTHERS

/* Private function prototypes -----------------------------------------------*/
static int sum(int x  , int y);
static int mul(int x  , int y);
static int min(int  x , int y);
static int max(int  x , int y);

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{ 
  #ifdef SOM
  int ResultSum = sum(5,2);
#endif
  
#ifdef MUL
  int ResultMul = mul(5,2); 
#endif
  
  #ifdef OTHERS
 int ResultMax = max(3,2); /* put the max of two numbers in ResultMax  */
 int ResultMin = min(5,0); /* put the min of two numbers in ResultMin  */
#endif 
 
  while (1)
  {
   
  }
}
#ifdef SOM
static int sum(int x , int y)
{
  return (x+y);
}
#endif

#ifdef MUL
static int mul(int x , int y)
{
  return (x*y);
}
#endif

#ifdef OTHERS

static  int min(int  x , int y) /* we use static before declaring the variable allows to keep the value and the continuous just for this function and is not to be visible for the rest of the program*/
{
  return(((x) < (y)) ? (x) : (y)); /* call of the MIN function which will return the min of two variables*/
}

static  int max(int  x , int y) 
{
  return(((x) > (y)) ? (x) : (y)); /* call of the MAX function which will return the max of two variables */
}

#endif
/**************************************END OF FILE**************************************/

