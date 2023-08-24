bool checkPal(string &str,int i)

{

    if(i>=str.size()/2)

    {

        return true;

    }

    if(str[i]!=str[str.size()-i-1])

    {

        return false;

    }

    return checkPal(str,i+1);

}

bool isPalindrome(string& str) {

    return checkPal(str,0);

}