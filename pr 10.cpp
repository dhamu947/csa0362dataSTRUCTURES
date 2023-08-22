//M.Damodaram [192211238]
#include<stdio.h>  
int ILS ( int A [ ] , int n , int key )  
{  
    int i ;  
    for ( i = 0 ; i < n ; i++ )  
    {  
    if ( key == A [ i ] )  
    {  
        return i ;  
    }  
}  
return - 1 ;  
}  

int main ()  
{  
    int A [ 30 ] ;  
    int key , n , i , x ;  
    printf ( " Enter size of array : " ) ;  
    scanf ( "%d" , &n ) ;  
    printf ( "Enter Array \n " ) ;  
    for ( i = 0 ; i < n ; i++ )  
    {  
        scanf ( "%d" , &A [ i ] ) ;  
    }  
    printf ( " Enter value to search : " ) ;  
    scanf("%d" , &key ) ;  
    x = ILS ( A , n , key ) ;  
    if ( x != -1 )  
    {   
        printf ( " Value present at index : %d " , x ) ;  
    }  
    else  
    {  
        printf ( " Value not found ! \n ") ;  
    }  
}  
