#include <iostream>
using namespace std;
//display of array
void display(int ar[], int k);
//deleting array elements
void deletion(int arr[], int p);
//inserting elements in array
void insertAtpos(int arr[], int p)
{
  int l, i;
  cout << "Enter number you want to insert ";
  cin >> l;
  int pos;
  cout << "Enter position to insert ";
  cin >> pos;

  for (i = p; i >= pos - 1; i--)
  {
    arr[i + 1] = arr[i];
  }
  arr[pos - 1] = l;
  p++;
  if (pos <= 0 || pos > p)
    cout << "invalid position ";
  else
  {
    cout << "after inserting Array consists of ";
    display(arr, p);
  }
  cout << endl;
}
void deletion(int arr[], int p)
{
  int j, i;
  cout << "Enter positon of element you want to delete ";
  cin >> j;
  if (j <= 0 || j > p)
    cout << "invalid input ";
  else
  {
    for (i = j - 1; i <= p - 1; i++)
    {
      arr[i] = arr[i + 1];
    }
    p--;
    display(arr, p);
  }
  cout << endl;
}
void display(int ar[], int k)
{
  int i;
  for (i = 0; i < k; i++)
  {
    cout << ar[i] << " ";
  }
}
int main()
{
  int n, l;
  cout << "Enter size of array :";
  cin >> n;
  int a[n], i;
  cout << "Enter elements of array :";
  for (i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << "Elements in array are ";
  for (i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  insertAtpos(a, n);
  deletion(a, n);
  return 0;
}
