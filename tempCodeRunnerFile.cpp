void merge(int arr1[], int size1, int arr2[], int size2, int ans[])
{
    int i = 0, j = 0, k = 0;
    int l = size1 + size2;
    while (k < l)
    {
        if (arr1[i] <= arr2[j] && i < size1)
        {
            ans[k] = arr1[i];
            k++;
            i++;
            if (i == size1)
            {
                for (int p = j; p < size2; p++)
                {
                    ans[k] = arr2[p];
                    k++;
                }
            }
        }
        else if (arr1[i] > arr2[j] && j < size2)
        {
            ans[k] = arr2[j];

            k++;
            j++;
            if (j == size2)
            {
                for (int p = i; p < size1; p++)
                {
                    ans[k] = arr1[p];
                    k++;
                }
            }
        }
    }
}
