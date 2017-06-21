//おみくじ　コード

#include <stdio.h>

#include <stdlib.h>

#include <time.h>



int main(void) {
    
    int fortune_slip;
    
    
    
    printf("おみくじを引こう！　（「enter」キーを押してね。）\n");
    
    getchar();
    
    printf("今日の運勢は・・・\n");
    
    
    
    srand((unsigned)time(NULL));
    
    fortune_slip = rand()%10;
    
    
    
    if(fortune_slip >= 0 && fortune_slip <= 2){
        
        printf("\nおみくじの結果は　：　「大吉」です！！\n");
        
    }else if (fortune_slip >=3 && fortune_slip <= 4){
        
        printf("\nおみくじの結果は　：　「中吉」です！！\n");
        
    }else if (fortune_slip >=5 && fortune_slip <=6){
        
        printf("\nおみくじの結果は　：　「小吉」です！！\n");
        
    }else{
        
        printf("\nおみくじの結果は　：　「吉」です！！\n");
        
    }
    
}
