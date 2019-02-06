//
//  main.c
//  Test
//
//  Created by 张伟达 on 2019/2/6.
//  Copyright © 2019 张伟达. All rights reserved.
//

#include <stdio.h>


int *sort(int arr[]) {
    int length = sizeof(arr)/sizeof(arr[0]);
    int result[length];
    for (int i = 0; i < length; i++) {
        result[i] = arr[i];
        printf("---->%d\n",result[i]);
    }
    return result;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int arr[] = {8, 4, 7, 3, 6};
    int result = sort(arr);
    return 0;
}
