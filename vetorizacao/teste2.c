#include <stdlib.h>
#include <stdio.h>

#define n 102400

char s1[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean blandit posuere ipsum, vel sollicitudin elit imperdiet non. Fusce congue sodales velit, sit amet elementum augue hendrerit eget. Vivamus in diam nec neque fringilla ultricies ut eu purus. Maecenas vel aliquam ipsum. Mauris pellentesque libero a orci consectetur blandit. Nam lorem odio, semper sed nunc rutrum, eleifend accumsan diam. Mauris vehicula iaculis velit vitae pharetra. Vivamus sed lectus vitae diam consectetur bibendum non et ligula. Quisque congue nulla eget enim sodales euismod id vel orci. Morbi est arcu, congue vel tellus nec, congue molestie lectus. Pellentesque placerat tempus nisl eu rutrum. Vestibulum ut ex id neque aliquam mollis. Maecenas eu dolor vel mi elementum blandit a vel quam. Nunc diam purus, maximus in sapien ut, porttitor bibendum augue. Phasellus mollis id ex in tempor. Curabitur finibus mi vitae nunc consectetur, eget volutpat est varius. In hac habitasse platea dictumst. Nam venenatis nec nulla et gravida. Morbi aliquam tincidunt neque eget vulputate. Suspendisse a eleifend eros. Fusce facilisis urna enim, eget congue lacus tincidunt et. In at erat nunc. Morbi gravida a mi sollicitudin blandit. In et lectus odio. Praesent scelerisque elit non sagittis dapibus. Sed faucibus, augue a porta aliquet, eros dui vestibulum magna, sit amet sagittis ex erat sed nibh. Vivamus luctus arcu quis lectus suscipit bibendum. Quisque mattis lorem at ex condimentum, sit amet rutrum sem suscipit. Sed placerat lacinia consectetur. Nulla efficitur finibus enim, ac condimentum eros mattis eget. Aenean leo tellus, venenatis id commodo sed, iaculis vel augue. Nunc feugiat molestie purus, ut sagittis arcu pellentesque in. Nulla fermentum mattis velit, eu facilisis ante aliquam in. Suspendisse ornare, est id cursus rhoncus, urna nisi porttitor lorem, a fermentum lectus turpis a lorem. Etiam fringilla ligula vestibulum, malesuada dui sit amet, porttitor urna. Aenean tincidunt auctor velit et semper. Proin eros metus, malesuada in lacus a, dapibus dapibus magna. Maecenas at ullamcorper turpis. Etiam id neque purus. Vivamus et erat orci. Nunc vel ipsum lacinia, blandit turpis vitae, egestas justo. Nam vel eros magna. Vivamus elementum quam sed orci lacinia sagittis. Cras pharetra rutrum enim non convallis. Maecenas tincidunt iaculis elit. Curabitur mi ex, porta eget pharetra id, euismod non dui. Aliquam eget sodales tellus, eget vulputate lacus. Aenean diam sapien, tristique id commodo at, lobortis et felis. Fusce in ornare neque. Vestibulum quis nisl sem. Nunc gravida ipsum id vulputate interdum. Aenean fringilla velit pulvinar mattis condimentum. Praesent pellentesque lobortis velit, id fermentum ante. Fusce tincidunt, felis non suscipit posuere, sapien neque luctus massa, a pulvinar magna massa ut metus. Donec luctus, ex a scelerisque hendrerit, purus augue facilisis purus, et semper eros enim eu est. Maecenas sollicitudin semper elit, malesuada venenatis purus tempor at.";

char s2[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean blandit posuere ipsum, vel sollicitudin elit imperdiet non. Fusce congue sodales velit, sit amet elementum augue hendrerit eget. Vivamus in diam nec neque fringilla ultricies ut eu purus. Maecenas vel aliquam ipsum. Mauris pellentesque libero a orci consectetur blandit. Nam lorem odio, semper sed nunc rutrum, eleifend accumsan diam. Mauris vehicula iaculis velit vitae pharetra. Vivamus sed lectus vitae diam consectetur bibendum non et ligula. Quisque congue nulla eget enim sodales euismod id vel orci. Morbi est arcu, congue vel tellus nec, congue molestie lectus. Pellentesque placerat tempus nisl eu rutrum. Vestibulum ut ex id neque aliquam mollis. Maecenas eu dolor vel mi elementum blandit a vel quam. Nunc diam purus, maximus in sapien ut, porttitor bibendum augue. Phasellus mollis id ex in tempor. Curabitur finibus mi vitae nunc consectetur, eget volutpat est varius. In hac habitasse platea dictumst. Nam venenatis nec nulla et gravida. Morbi aliquam tincidunt neque eget vulputate. Suspendisse a eleifend eros. Fusce facilisis urna enim, eget congue lacus tincidunt et. In at erat nunc. Morbi gravida a mi sollicitudin blandit. In et lectus odio. Praesent scelerisque elit non sagittis dapibus. Sed faucibus, augue a porta aliquet, eros dui vestibulum magna, sit amet sagittis ex erat sed nibh. Vivamus luctus arcu quis lectus suscipit bibendum. Quisque mattis lorem at ex condimentum, sit amet rutrum sem suscipit. Sed placerat lacinia consectetur. Nulla efficitur finibus enim, ac condimentum eros mattis eget. Aenean leo tellus, venenatis id commodo sed, iaculis vel augue. Nunc feugiat molestie purus, ut sagittis arcu pellentesque in. Nulla fermentum mattis velit, eu facilisis ante aliquam in. Suspendisse ornare, est id cursus rhoncus, urna nisi porttitor lorem, a fermentum lectus turpis a lorem. Etiam fringilla ligula vestibulum, malesuada dui sit amet, porttitor urna. Aenean tincidunt auctor velit et semper. Proin eros metus, malesuada in lacus a, dapibus dapibus magna. Maecenas at ullamcorper turpis. Etiam id neque purus. Vivamus et erat orci. Nunc vel ipsum lacinia, blandit turpis vitae, egestas justo. Nam vel eros magna. Vivamus elementum quam sed orci lacinia sagittis. Cras pharetra rutrum enim non convallis. Maecenas tincidunt iaculis elit. Curabitur mi ex, porta eget pharetra id, euismod non dui. Aliquam eget sodales tellus, eget vulputate lacus. Aenean diam sapien, tristique id commodo at, lobortis et felis. Fusce in ornare neque. Vestibulum quis nisl sem. Nunc gravida ipsum id vulputate interdum. Aenean fringilla velit pulvinar mattis condimentum. Praesent pellentesque lobortis velit, id fermentum ante. Fusce tincidunt, felis non suscipit posuere, sapien neque luctus massa, a pulvinar magna massa ut metus. Donec luctus, ex a scelerisque hendrerit, purus augue facilisis purus, et semper eros enim eu est. Maecenas sollicitudin semper elit, malesuada venenatis purus tempor at.";

/* Compara a string s1 e s2, sendo 1 para caractere igual e 0 para diferente. */
void compara_string(char *s1, char *s2)
{
    char *p1, *p2;
    int t1, t2, i, *res;
    
    p1 = s1;
    p2 = s2;
    t1 = 0;
    t2 = 0;
        
    /* Calcula o tamanho de ambas. */
    while(*p1 != '\0')
    {
        t1++;
        p1++;
    }
    
    while(*p2 != '\0')
    {
        t2++;
        p2++;
    }
    
    /* Se forem iguais, podem ser comparadas. */
    if(t1 == t2)
    {        
        res = malloc(t1 * sizeof(int));
        for(i = 0; i < t1; i++)
        {
            if(s1[i] == s2[i])
            {
                res[i] = 1;
            }
            else
            {
                res[i] = 0;
            }
        }
    }
    
    /*
    for(i = 0; i < t1; i++)
    {
        printf("%d ", res[i]);
    }
    
    printf("\n");
    */
    
}


int main()
{ 
    int i;
    for(i = 0; i < 100000; i++)
    {
        compara_string(s1, s2);
    }
    return 0;
}


