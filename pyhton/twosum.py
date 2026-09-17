
arr = [2,3,4,5,6,76,11,6,7,8,81,1,1,1,45]
target = int(input('masukkan target angka'))

for i in range(len(arr)):
    for j in range (i+1, len(arr)):
        if arr[i] + arr[j] == target:
            print (f'target ditemukan  {arr[i]} {arr[j]}')


