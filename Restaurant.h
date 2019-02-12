#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int debugMode;
typedef enum {FALSE =0,TRUE=1, NO =0,YES=1} boolean;

typedef struct list 
{
    char* groupName;
    int groupSize;
    boolean waitstatus;
     struct list *next;

}group;

//functions included with main
void clearToEoln();
int getNextNWSChar();
int getPosInt();
char *getName();
void printCommands();

//functions inside functions.c
void doAdd(group **head);
void doCallAhead(group **head);
void doWaiting(group **head);
void doRetrieve(group **head);
void doList(group **head);
void doDisplay(group **head);

//linkedlist functions
void addToList(group **head,char *groupname,int groupSize,boolean status);
boolean doesNameExist(group **head, char *groupname);
boolean updateStatus(group **head, char *groupname);
char* retrieveAndRemove(group **head, int size);
int countGroupsAhead(group **head, char* name);
void displayGroupSizeAhead(group **head, char* name);
void displayListInformation(group **head);
void clearlist(group **head);