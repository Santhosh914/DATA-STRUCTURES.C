include <stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int ele=4;
    for(int i=0;i<=4;i++){
      if(ele==arr[i]){
        printf("THE POSITION OF THE ELEMENT IS: %d",i);
      }
    }
}
