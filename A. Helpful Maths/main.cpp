#include <iostream>

using namespace std;
void insertion_sort (int arr[], int length){
	 	int j, temp;

	for (int i = 0; i < length; i++){
		j = i;

		while (j > 0 && arr[j] < arr[j-1]){
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
			  }
		}
}
int main()
{
    int sum=0,i;
    string str[100];
    cin>>str;
    //getline(cin,str);
    int x=str.length();
    int arr[x];
    for( i=0;i<str.length();i++)
    {
        for(int j=0;j<x;j++)
        {
            arr[j]=str[i]-'0';
        }


    }
    for(int w=0;w<x;w++)
    {
        cout<<"+"<<arr[w];
    }
    insertion_sort(arr,x);
    for(int t=0;t<x;t++)
    {
        cout<<"+"<<arr[t];
    }

    return 0;
}
