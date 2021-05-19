#include <cs50.h>
#include <stdio.h>
int main(void)
{
    //gets len
    int len = get_int("length: ");
    //creats array
    int unsorted[len];
    //checks validity
    if(len < 1)
    {
        return 1;
    }
    
    else
    {
        //get list
        for(int i = 0; i < len; i++)
        {
            unsorted[i] = get_int("%i: ", i+1);
        }
        //finds largest
        int top = 0;
        for(int i = 0; i < len; i++)
        {
            if(top < unsorted[i])
            {
                top = unsorted[i];
            }
        }
        //Creates Storeroom
        int storeroom[top];
        //fills storeroom with air
        for(int i = 0; i < top; i++)
        {
            storeroom[i] = 0;
        }
        //sorts
        for(int i = 0; i < len; i++)
        {
           storeroom[unsorted[i]] = 1;
        }
        //creating sorted array
        int sort[len];
        int j = 0;
        for(int i = 0; i < top + 1; i++)
        {
            if(storeroom[i] != 0)
            {
                sort[j] = i;
                j++;
            }
        }
        //print sorted
        for(int i = 0; i < len; i++)
        {
            printf("%i\n", sort[i]);
        }
    }
    
}
