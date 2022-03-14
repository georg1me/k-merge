#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define n 4

void k_merge(std::queue<int> q1, int k, int output[]) 
{
    std::cout << "k-merge";
    }

queue<int> merged_queue;

void new_merge(std::queue<int> q1, queue<int> q2, queue<int> merged_queue)
        {
        {
    if (q1.empty())
            {
        while (!q2.empty())
            merged_queue.push(q2.front());
            q2.pop(); 
            }
    else if  (q2.empty())
            {
        while(!q1.empty())
            merged_queue.push(q1.front());
            q1.pop();    
            }    
        }

        {
    while (!q1.empty()&&!q2.empty())
                {
        if (q1.front() < q2.front()) 
                    {
            merged_queue.push(q1.front());
            q1.pop();
            new_merge(q1,q2,merged_queue);
                    }
        else if (q2.front() < q1.front())
                {
            merged_queue.push(q2.front());
            q2.pop();
            new_merge(q1,q2,merged_queue);
                }
                }
        }
        }
        

int main () {
    int arr1[3][4] = {
                {2, 4, 5, 6},
                {1, 3, 8, 10},
                {7, 9, 12, 20}
                    };

    queue<int> q1;
    queue<int> q2;
    queue<int> q3;
    queue<int> merged_queue;

    q1.push(2);
    q1.push(4);
    q1.push(5);
    q1.push(6);

    q2.push(1);
    q2.push(3);
    q2.push(8);
    q2.push(10);

    q3.push(7);
    q3.push(9);
    q3.push(12);
    q3.push(20);

    new_merge(q1,q2,merged_queue);


   // k_merge(arr1, 4, output);

    }

