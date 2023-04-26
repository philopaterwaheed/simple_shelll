#include "main.h"
char** token(char* line)
{
    char **arguments;
    char*line_copy, *token;
    size_t words = 0;
    int i; 
    line_copy = malloc(sizeof(char) * (_strlen(line) + 1));
    if (!line_copy)
    /*on memory falling */
    {
        _eputs("Failed to allocate");
        return NULL;
    }
    _strcpy(line_copy, line);
    /*make a copy of the line to edit it*/

    token = strtok(line_copy, " \n");
    words++;
    while (token)
    {
        token = strtok(NULL, " \n");
        words++;
    }
    arguments = malloc(words * sizeof(char*));
    token = strtok(line, " \n");
    for (i = 0 ; token !=NULL ; i++)
    {
        arguments[i] = malloc(sizeof(char) * (_strlen(token) + 1));
        /* allocate memmory into of the i'th element */
        _strcpy(arguments[i], token);
        /*puts the token inside the array*/
        token = strtok(NULL, " \n");
    }
    free(line_copy);
    return arguments;
}
/**
######################################################################################
#                                                                                    # 
#                            ,.--------._                                            #
#                           /            ''.                                         #
#                         ,'                \     |"\                /\          /\  #
#                /"|     /                   \    |__"              ( \\        // ) #
#               "_"|    /           z#####z   \  //                  \ \\      // /  #
#                 \\  #####        ##------".  \//                    \_\\||||//_/   #
#                  \\/-----\     /          ".  \                      \/ _  _ \     #
#                   \|      \   |   ,,--..       \                    \/|(O)(O)|     #
#                   | ,.--._ \  (  | ##   \)      \                  \/ |      |     #
#                   |(  ##  )/   \ `-....-//       |///////////////_\/  \      /     #
#                     '--'."      \                \              //     |____|      #
#                  /'    /         ) --.            \            ||     /      \     #
#               ,..|     \.________/    `-..         \   \       \|     \ 0  0 /     #
#            _,##/ |   ,/   /   \           \         \   \       U    / \_//_/      #
#          :###.-  |  ,/   /     \        /' ""\      .\        (     /              #
#         /####|   |   (.___________,---',/    |       |\=._____|  |_/               #
#        /#####|   |     \__|__|__|__|_,/             |####\    |  ||                #
#       /######\   \      \__________/                /#####|   \  ||                #
#      /|#######`. `\                                /#######\   | ||                #
#     /++\#########\  \                      _,'    _/#########\ | ||                #
#    /++++|#########|  \      .---..       ,/      ,'##########.\|_||  Donkey By     #
#   //++++|#########\.  \.              ,-/      ,'########,+++++\\_\\ Hard'96       #
#  /++++++|##########\.   '._        _,/       ,'######,''++++++++\                  #
# |+++++++|###########|       -----."        _'#######' +++++++++++\                 #
# |+++++++|############\.     \\     //      /#######/++++ S@yaN +++\                #
#      ________________________\\___//______________________________________         #
#     / ____________________________________________________________________)        #
#    / /              _                                             _                #
#    | |             | |                                           | |               #
#     \ \            | | _           ____           ____           | |  _            #
#      \ \           | || \         / ___)         / _  )          | | / )           #
#  _____) )          | | | |        | |           (  __ /          | |< (            #
# (______/           |_| |_|        |_|            \_____)         |_| \_)           #
#                                                                           19.08.02 #
######################################################################################
*/