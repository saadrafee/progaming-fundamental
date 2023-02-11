#include <iostream>
using namespace std;
main()

{
    string word,word2;
    int counter =0;
    cout<<"Enter String ";
    cin>>word;
    cout<<"Enter String ";
    cin>>word2;
    
    for (int idx = 0 ; word[idx]!='\0' ; idx++)
    {
        for (int idx2 = 0 ; word2[idx2]!='\0' ; idx2++)
        {
            if (word[idx]== word2[idx2])
            {
                counter ++;
                word2[idx2]='`';
                break;
            }
        }
        
    }
    cout<<counter;


}
