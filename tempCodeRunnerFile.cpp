int panjang ()
{
    int count=0;
    if (!isEmpty())
    {
        count=1;
        Barang *bantu;
        bantu=head;
        if (bantu->next==NULL)
        {
            count=1;
        }
        else
        {
            do
            {
                count++;
                bantu=bantu->next;
            }
            while (bantu->next!=NULL);
        }
    }
    else
    {
        count=0;
    }
    return count;
}