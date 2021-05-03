typedef struct {
    int *data;
    int *mins;
    int index;
} MinStack;

/** initialize your data structure here. */

MinStack* minStackCreate() {
    MinStack* s = malloc(sizeof(MinStack));
    s->data = NULL;
    s->mins = NULL;
    s->index = 0;
    return s;        
}

void minStackPush(MinStack* obj, int x) {
    obj->data = realloc(obj->data,sizeof(int)*(obj->index+1));
    obj->mins = realloc(obj->mins,sizeof(int)*(obj->index+1));
    obj->data[obj->index] = x;
    if(obj->index == 0 || obj->mins[obj->index-1] > x)
    {
        obj->mins[obj->index] = x;
    }
    else
    {       
        obj->mins[obj->index] = obj->mins[obj->index -1];
    }
    obj->index++;
}

void minStackPop(MinStack* obj) {
    if(obj->index < 1)
    {
        return;
    }
    obj->index--;
}

int minStackTop(MinStack* obj) {
    if(obj->index < 1)
    {
        return 0;
    }
    return obj->data[obj->index-1];
}

int minStackGetMin(MinStack* obj) {
    return obj->mins[obj->index-1];
}

void minStackFree(MinStack* obj) {
    free(obj->data);
    free(obj->mins);
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, x);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
