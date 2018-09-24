bool checkEqualFrequency(std::vector<int> inputArray) {
    sort(inputArray.begin(),inputArray.end());
    int local_count = 1, first_count=1;
    for(int i =0;i < inputArray.size()-1;i++) {
        if(inputArray[i] == inputArray[i+1])
            first_count++;
        else 
            break;
    }
    
    for(int i =0;i < inputArray.size()-1;i++) {
        if(inputArray[i] == inputArray[i+1]) 
            local_count++;
        else { 
            if ( first_count == local_count )
            local_count= 1 ;
            else 
               return false; 
        }
    }
    if(first_count == local_count )
    return true;
    else return false;
  
}
