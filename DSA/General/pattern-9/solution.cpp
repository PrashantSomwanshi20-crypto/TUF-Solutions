class Solution {
public:
    void pattern9(int n) {
             //upper half pyramid 
             for(int i=0;i<n;i++){
                

                //for spaces
                for(int j=0;j<n-i-1;j++){
                 cout<<" ";
                }

                //for stars
                for(int j=0;j<2*i+1;j++){
                    cout<<"*";
                }
                cout <<endl;
                
                
             }
               //for lower triangular pyramis 

             for(int i=0;i<n;i++){

                //for spaces 

                for(int j=0;j<i;j++){
                    cout<<" ";
                }
                //for stars
                for(int j=0;j<2*n-(2*i+1);j++){
                    cout<<"*";

                }
                cout<<endl;
             }
;

             



    }
};