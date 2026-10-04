class Solution {
  public:
  int merge(vector<int>&arr, int s, int mid, int e){
      vector<int>temp;
      int count = 0;
      int left = s, right = mid + 1;
      while(left <= mid && right <= e){
          if(arr[left] <= arr[right]){
              temp.push_back(arr[left]);
              left++;
          }else{
              count = count + mid - left + 1;
              temp.push_back(arr[right]);
              right++;
          }
      }
      while (left <= mid) {
          temp.push_back(arr[left]);
          left++;
      }

      // Remaining elements in right half
      while (right <= e) {
          temp.push_back(arr[right]);
          right++;
      }

      // Copy sorted elements back into arr
      for (int i = s; i <= e; i++) {
          arr[i] = temp[i - s];
      }

      return count;
  }
  
  int mergeSort(vector<int>&arr, int s, int e){
      if(s >= e) return 0;
      int mid = s + (e - s)/2;
      int leftcnt = mergeSort(arr,s, mid);
      int rytcnt = mergeSort(arr, mid + 1, e);
      int cnt = merge(arr,s,mid,e);
      return leftcnt + rytcnt + cnt;
  }
    int inversionCount(vector<int> &arr) {
        // code here
       int s = 0, e = arr.size() - 1;
       return mergeSort(arr,s,e);
    }
};