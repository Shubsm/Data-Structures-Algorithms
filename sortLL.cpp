ListNode* Solution::sortList(ListNode* A) {
   vector<int> vect;
ListNode* temp=A;
while(A!=NULL)
{
vect.push_back(A->val);
A=A->next;
}
A=temp;
sort(vect.begin(), vect.end());
for(int i=0; i<vect.size(); i++)
{
A->val=vect[i];
A=A->next;
}
return temp;}
