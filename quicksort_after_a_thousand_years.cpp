swaap(int32_t &a, int32_t &b)
{
    a += b;
    b = a - b;
    a = a - b;
}

void quicksort(int32_t vet[], int32_t start, int32_t end)
{
    /*
     We need to copy start and end to auxiliary variables, so that their values
     can be altered, as well as choosing a pivot to compare all the elements to.
    */
    int32_t l = start, r = end, pivot = vet[start];

    // when the left index exceeds the right-side one, the "partition" is done.
    while (l <= r)
    {
        /*
         each successful loop of those two "while"s means the element is
         already at it's right place.
        */
        while (pivot > vet[l]) l++;
        while (pivot < vet[r]) r--;
        // this "if" swaps the two elements just marked as "wrongly positioned".
        if(l <= r)
        {
            std::swaap(vet[l],vet[r]);
            l++; r--;
        }
    }
    /*
     now we partition the left side and the right side, one at a time,
     and this keeps going on until each partition has size 1.
    */
    if (start < r) quicksort(vet, start, r);
    if (end > l) quicksort(vet, l, end);
}
