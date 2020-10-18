
#include<iostream> 
using namespace std; 

struct Pair { 
    int min; 
    int max; 
}; 

struct Pair getMinMax(int arr[], int low, int high) { 
    struct Pair minmax, mml, mmr;    
    int mid; 
    
    if (low == high) { 
        minmax.max = arr[low]; 
        minmax.min = arr[low];
        cout<<minmax.min << " " <<minmax.max<<endl;
         
        return minmax; 
    } 
    
    if (high == low + 1) { 
        if (arr[low] > arr[high]) { 
            minmax.max = arr[low]; 
            minmax.min = arr[high]; 
        } 
        else { 
            minmax.max = arr[high]; 
            minmax.min = arr[low]; 
        } 
        return minmax; 
    }
    
    mid = (low + high) / 2;
    mml = getMinMax(arr, low, mid);
    mmr = getMinMax(arr, mid + 1, high);
    // cout<<mml.min << " " <<mml.max<<endl;
    // cout<<mmr.min << " " <<mmr.max<<endl;    

    mml.min < mmr.min ? minmax.min = mml.min : minmax.min = mmr.min;
    
    mml.max > mmr.max ? minmax.max = mml.max : minmax.max = mmr.max;
    //cout<<mmr.min << " " <<mmr.max<<endl; 

    return minmax; 
} 

// Driver code 
void c_p_c() {
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
}


int main() {
    c_p_c();

    int arr[] = { 1000, 11, 4453, 1, 330, 3000, -134,3523,4,34,5,335,53,233,5 }; 
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    
    struct Pair minmax = getMinMax(arr, 0, arr_size - 1); 
                            
    cout << "Minimum: "<< minmax.min << endl; 
    cout << "Maximum: "<< minmax.max; 
        
    return 0; 
} 

