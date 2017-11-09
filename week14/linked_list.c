/*
Visualization for this code
https://tinyurl.com/y9ktpo4o
*/

#include<stdio.h>
#include<stdlib.h>


//Node to hold integer val
struct node{
  int val;
  struct node* next;
};

typedef struct node node;


node* create_node(){
  node* p_node;
  p_node = (node*)malloc(sizeof(node));
  printf("Enter val : ");
  scanf("%d", &p_node->val);
  p_node->next = NULL;
  
  return p_node;
}

node* create_list(node* p_head, int n){
  if(p_head==NULL){
  	p_head = create_node();
  	n--;
  }
  
  if (n>0){
	  node* curr_node;
	  curr_node = p_head;
	  
	  for(int i=0; i<n; i++){                
	    node* p_new_node;
	    p_new_node = create_node();
	    curr_node->next = p_new_node;
	    curr_node = p_new_node;
	  }
	}
  printf("log: end of list creation\n");
  
  return p_head;
}

void add_node(node* p_head){
  if(p_head==NULL){
  	printf("No head found\n");
  }
  else{
  	node* itr;
  	itr = p_head;
  	while(itr->next!=NULL){
  		itr=itr->next;
  	}
  	node* p_new_node = create_node();
  	itr->next = p_new_node;
  	itr = p_new_node;
  }
}


node* insert(node* p_head, int pos){
	if(pos==0){
		node* p_new_node = create_node();
		p_new_node->next = p_head;
		p_head = p_new_node;
	}
	else{
		int i=0;
		node* itr=p_head;
		
		while(i+1<pos){
			itr=itr->next;
			i++;
		}
		node* p_new_node = create_node();
		node* next_node = itr->next;
		itr->next = p_new_node;
		p_new_node->next = next_node;
	}
	
	return p_head;
}

node* del(node* p_head, int pos){
	if(pos==0){
		node* temp = p_head->next;
		free(p_head);
		p_head = temp;
	}
	else{
		int i=0;
		node* itr=p_head;
		
		while(i+1<pos){
			itr=itr->next;
			i++;
		}
		node* next_node = itr->next;
		itr->next = itr->next->next;
		free(next_node);
	}
	
	return p_head;
}

void print(node* p_head){
	printf("\nList contains : \n");
	
	if(p_head==NULL){
		printf("Empty list\n");
	}
	else{
		node* temp = p_head;
		while(temp->next!=NULL){
		    printf("Node value : %d  \nNext node  : %u \n---\n", temp->val, temp->next);
		    temp=temp->next;
		}
		printf("Node value : %d  \nNext node  : %u \n---\n", temp->val, temp->next);
	}
}

int main(){
  node* p_head=NULL;

  p_head = create_list(p_head,1);
  add_node(p_head);
  add_node(p_head);
  add_node(p_head);
  
  print(p_head);
  
  insert(p_head, 1);
  p_head = insert(p_head, 0);
  
  print(p_head);
  
  p_head = del(p_head, 2);
  p_head = del(p_head, 3);
  
  print(p_head);
  return 0;
}
