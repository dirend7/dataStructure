#include <stdio.h>

void HanoiTowerMove(int num,char from, char by, char to){
    if(num ==1){
        printf("Move disk 1 from %c to %c \n", from, to);
    }else{
        HanoiTowerMove(num-1, from, to, by);
        printf("Move disk %d from %c to %c \n", num, from, to);
        HanoiTowerMove(num-1, by, from, to);
    }
}

int main() {
    // Transfer three disks of B-bar A to bar C via bar B
    HanoiTowerMove(3, 'A', 'B', 'C');
    return 0;
}