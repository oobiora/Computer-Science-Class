#include <iostream>
#include <stdlib.h>
#include <array>
using namespace std;

int min_item_count(int *, int);

int main() {
  int array[] = {4,2,3,2,2};
  int h = sizeof(array);
  cout << h;
//   cout << min_item_count(array,0)<< endl;
}



// int min_item_count(int number_seq[], int number_seq_size) 
//     {
//         number_seq_size = sizeof(*number_seq);
//         int acc = 0;

//         int smlNum = number_seq[0];

//         for (int i = 0; i < number_seq_size; i++) {
//             if (smlNum > number_seq[i])
//             {
//             smlNum = number_seq[i];
//             }
//         }
//         for (int i = 0; i < number_seq_size; i++) {
//             if (number_seq[i] == smlNum){
//                 acc+= 1;
//             }
        
//         }
//         return acc;
//     }
