#include <iostream>
#include <unordered_map>
//configured/changed path to allow library above

#define ARRAY_SIZE 5

int  *twoSum(int container[],int target) {
    static int answerArray[2]={-1,-1};
    std::unordered_map<int, int> umap;
    
    for(int i=0;i<ARRAY_SIZE;i++){
        if(umap.count(container[i])==1){\
            answerArray[0]=umap[container[i]];
            answerArray[1]=i;
        } 
        umap[target-container[i]]=i;
    }
    return answerArray;
}

int main(void){
    int container[ARRAY_SIZE]={1,5,10,20,38};
    
    int target=6;
    int *answer;
    int index1;
    int index2;

    answer=twoSum(container,target);
    std::cout<<container[answer[0]] <<" + "<< container[answer[1]] << " = "<< target;
    return 0;
}