#include "function.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    int choice;          // Khai bao bien choice
    int choiceDanhmuc;   // Khai bao bien choiceDanhmuc

    do {
        lobbyMenu(choice);
        scanf("%d", &choice);
        switch(choice){
            case 1:
                do {
                    // Lua chon 
                    danhmucMenu(choiceDanhmuc); 
                    scanf("%d", &choiceDanhmuc);
                    switch(choiceDanhmuc){
                        case 1:
                            viewdanhmuc();
                            break;
                        case 2:
                            adddanhmuc();
                            break;
                        case 3:
                            editdanhmuc(); 
                            break;
                        case 4:
                            deleteDanhMuc();
                            break;
                    }
                } while(choiceDanhmuc != 6);
                break;
            case 2:
                break;    
        }
    } while(choice != 3);
    return 0;
}

