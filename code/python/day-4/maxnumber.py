#program to find maximum number 

def max(list):
    
    ma=lst[0]

    for i in lst:
        if i>ma:
            ma=i

            return ma


            lst=[10,55,1,45,23,56,6,8,4]

            m= max(lst)
            c_list=lst[:]

            c_list.remove(m)
            m2=max(c_list)
            print("Maximum is {} and Second Maximum  is {} " . format(m,m2))
