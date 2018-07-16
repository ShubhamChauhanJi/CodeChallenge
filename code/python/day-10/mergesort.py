def merge(arr,l,m,r):
    n1=m-1+1
    n2=r-m
    L=[0]*(n1)
    R=[0]*(n2)
    for i in range(0,n1):
        L[i]=arr[l+i]
        for j in range (0,n2):
            R[j]=arr[m+l+j]
            i=0
            j=0
            k=0
            while i<n1 and j<n2:
                if L[i]<=R[j]:
                    arr[k]=L[i]
                    i +=1
                    else:
                        arr[k]=R[j]
                        j+=1
                        K+=1
                        while i<n1:
                            arr[k]=L[i]
                            i+=1
                            k+=1
                            while J<n2:
                                arr[k]=R[j]
                                j+=1
                                K+=1
                                def mergeSort(arr,l,r):
                                    if l<r:
                                        m=(l+(r-1))/2
                                        mergeSort(arr,l,m)
                                        mergeSort(arr,m+1,r)
                                        merge(arr,l,m,r)
                                        arr=[5,4,9,6,56,89]
                                        n=len(arr)
                                        print("given array is")
                                        for i in range(n):
                                            print("%d"%arr[i])
                                            mergeSort(arr,0,n-1)
                                            print("sorted array is")
                                            for i in range(n):
                                                print("%d"%arr[i])
