//˳??ջ??ջ.h
datatype pop(stack*s)
{
	datatype temp;
	s->top--;
	temp=s->elements[s->top+1];
	return temp;
}