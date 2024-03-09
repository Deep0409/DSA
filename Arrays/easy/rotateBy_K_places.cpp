// Approach 1: Using a temp array 

// For Rotating the Elements to right
// Step 1: Copy the last k elements into the temp array.

// Step 2: Shift n-k elements from the beginning by k position to the right

// Step 3: Copy the elements into the main array from the temp array.

// Time Complexity: O(n)

// Space Complexity: O(k) since k array element needs to be stored in temp array

void Rotatetoright(int arr[], int n, int k)
{
  if (n == 0)
    return;
  k = k % n;
  if (k > n)
    return;
  int temp[k];
  for (int i = n - k; i < n; i++)
  {
    temp[i - n + k] = arr[i];
  }
  for (int i = n - k - 1; i >= 0; i--)
  {
    arr[i + k] = arr[i];
  }
  for (int i = 0; i < k; i++)
  {
    arr[i] = temp[i];
  }
}


// Approach 2: Using ” Reversal Algorithm “

// Approach:

// For Rotating Elements to right
// Step 1: Reverse the last k elements of the array

// Step 2: Reverse the first n-k elements of the array.

// Step 3: Reverse the whole array.


void Reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
// Function to Rotate k elements to right
void Rotateeletoright(int arr[], int n, int k)
{
  // Reverse first n-k elements
  Reverse(arr, 0, n - k - 1);
  // Reverse last k elements
  Reverse(arr, n - k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
}

// Time Complexity – O(N) where N is the number of elements in an array

// Space Complexity – O(1) since no extra space is required