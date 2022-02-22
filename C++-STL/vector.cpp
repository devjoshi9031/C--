#include<iostream>
#include<vector>

using namespace std;

/**
 * @brief  Print the whole vector DS.
 * @note   
 * @param  my_vector: vector that you want to print.
 * @retval None
 */
void print(const vector <int>& my_vector){
    cout << "The content of the vector is: ";
    for(int i=0; i<my_vector.size(); i++)
            cout<<my_vector[i]<<" ";
    cout << "\nEnd of the print function\n\n";
}
/**
 * @brief  Insert or fill the array from the other end. Pushing from the end.
 * @note   
 * @retval None
 */
void insertion_using_push_back(vector<int>&num){
    int number=0, num_values=0;
    cout << "Enter the number of values you want in a vector\n";
    cin >> num_values;
    for(int i=0; i<num_values; i++){
        cout << "Enter the " << i << "th value in the vector\n";
        cin>>number;
        num.push_back(number);
    }
    
    return;
}
/**
 * @brief  Insert vector components using insert method but from the begining. 
 * @note   Vector does not have a push_front so this method can replicate that function.
 * @retval None
 */
void insertion_using_insert(vector<int>&num){
        int number=0, num_values=0;
    cout << "Enter the number of values you want in a vector\n";
    cin >> num_values;
    for(int i=0; i<num_values; i++){
        cout << "Enter the " << i << "th value in the vector\n";
        cin>>number;
        num.insert(num.begin(),number);
    }
    return;
}

/**
 * @brief  Insert a value at a particular index. Put in the index and the value you want to insert.
 * @note   
 * @retval None
 */
void insertion_at_index(vector<int>&num){
    int number=0, index=0;
    cout << "Enter the index at which you want to insert the number\n";
    cin >> index;
    cout << "Enter the value you want to insert at "<< index <<endl; 
    cin>>number;
    num.insert(num.begin()+index,number);
    return;
}

/**
 * @brief  Runs an infinite loop to select all the different options to insert in a vector.
 * @note   
 * @retval 
 */
int main(){
    vector<int> num;
    int choice=0;
    while(1){
        cout << "Enter a number according to the options below:\n\
                    1. Insert numbers using 'push_back' method\n\
                    2. Insert numbers using insertion method\n\
                    3. Insert a value at a specific index\n\
                    4. Break the infinite loop.\n";
        cin >> choice;
        switch (choice){
            case 1:
                insertion_using_push_back(num);
                break;
            case 2:
                insertion_using_insert(num);
                break;
            case 3:
                insertion_at_index(num);
                break;
            case 4:
                return -1;
                break;
            deafult:
                cout << "Incorrect choice. Please try again by choosing 1 or 2.\n";
        }
        print(num);
    }
    return 0;
}