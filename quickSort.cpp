#include<bits/stdc++.h>
using namespace std;

int partition(int input[], int start, int end)
	{
		int pivot = input[end];
		int i = start - 1;

		for (int j = start; j < end; j++)
		{
			if (input[j] < pivot)
			{
				i++;
				int temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}
		i++;
		int temp = input[i];
		input[i] = pivot;
		input[end] = temp;

		return i;
	}

	void quick_Sort(int input[], int start, int end)
	{
    		if (start < end)
    		 {
    		 	int pivot = partition(input, start, end);

    		 	quick_Sort(input, start, pivot - 1);
    		 	quick_Sort(input, pivot + 1, end);

    		 } 
	}
	void quickSort(int input[], int size)
	{
    		quick_Sort(input, 0, size - 1);
	}



int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}