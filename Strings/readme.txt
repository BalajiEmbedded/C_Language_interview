need to include -> #include<string.h>

strlen(str1)-> it will return the length of the string.
strcpy(dst,src)-> it will copy the string from source to destination.
strncpy(dest,src,n)-> it will copy n number of characters from source to destination.
strcat(dest,src)-> it will append src to the end of the destination.
strncat(dest,src,n)-> it will append upto n characters of src to destination.
strcmp(str1,str2)-> return "0" if equal , return ">0 0r +ve" if s1>s2, return "<0 or -ve" if s1<s2;
strncmp(str1,str2,n)-> compare upto n characters of str1 and str2;
strchr(str,c)-> find the first occurance of c in the string.
strrchr(str,c)-> find the last occurance of c in the string.
strstr(str,sub)-> find the first occurance of the substring in the string.
