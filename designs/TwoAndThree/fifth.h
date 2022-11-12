int enqueue(datatype elem, queue a) {
	if(a->rear->next == a->front)
	{
		return -1;
	}
	else
	{
		a->rear->data = elem;
		a->lenth ++;
		a->rear = a->rear->next;
	}
	
	return 1;
}

int dequeue(queue a) {
	if(a->rear == a->front)
	{
		return -1;
	}
	a->front->data = 0;
	a->lenth --;
	a->front = a->front->next;
	
	return 0;
}

