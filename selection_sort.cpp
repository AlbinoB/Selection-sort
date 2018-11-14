#include<iostream>
using namespace std;
	void accept(int *,int);
	void display(int *,int);
	void selectiosort(int *,int);
int main()
{

	int arrsize,c;
	cout<<"\n Enter the number of elements:";
    cin>>arrsize;
    int arr[arrsize];
	do
	{
		cout<<"\n\n\n enter your choice \n 1.Accept \n 2.Display \n 3.Selection sort. \n 0.exit.";
		cin>>c;
		switch(c)
		{
			case 1:{

				accept(arr,arrsize);
				break;
				}
			case 2:{
				display(arr,arrsize);
				break;
				}
			case 3:{
				selectiosort(arr,arrsize);
				break;
				}

			 default:{
					cout<<"\n wrong input entered!!!";
					break;
				      }
		}
	    cout<<"\n___________________________________________________\n";
	}while(c!=0 && c<4 && c>0);
	return 0;
}

	void accept(int *arr,int arrsize)
	{
		for(int i=0;i<arrsize;i++)
        {
            cout<<"\n enter the element at position "<<i+1<<":";
            cin>>arr[i];
        }

	}

	void display(int *arr,int arrsize)
		{
			for(int i=0;i<arrsize;i++)
			{
				cout<<arr[i]<<" ";
			}
		}

void selectiosort(int *arr,int arrsize){

    int smallest,smallest_index;

    for(int i=0;i<arrsize-1;i++)
    {    cout<<"pass "<<i+1<<"=>";
         smallest=arr[i];
         smallest_index=i;
        for(int j=i+1;j<arrsize;j++)
        {
            if(arr[j]<smallest)
            {
                smallest=arr[j];
                smallest_index=j;
            }
        }
        arr[smallest_index]=arr[i];
        arr[i]=smallest;
        display(arr,arrsize);
        cout<<"\n";
    }

}

