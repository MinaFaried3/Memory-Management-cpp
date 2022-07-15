# Memory-Management-cpp-
<a href="https://www.w3schools.com/cpp/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" alt="cplusplus" width="40" height="40"/> </a>

## In This Repo, we will discuss different topics about memory management in c++ like how the computer deals with executable programs and how it stores its data in memory, dealing with pointers and reference and heap, call stack

### this repo contains lessons about memory management in cpp :
* pointers and reference
* stack and heap
* how to avoid memory leak
* 1d,2d array under the hood
*  advanced tips and tricks

 example 
```
    /*
      TODO : int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

      * - arr in last example:
          - is the pointer to the 2d array = arr
          - is pointer to first node(array) in 2d array = *arr = arr[0] = &arr[0]
          - is address to first element in first array = &arr[0][0]
          ? arr = *arr = arr[0]  = &arr[0] = &arr[0][0]

     * - arr+1 in last example:
          - is pointer to second node(array) in 2d array = arr+1 = arr[1] = &ptr1[1]
          - is address to first element in first array = &arr[1][0]= *(arr+1)
          ? arr+1 = arr[1] = &arr[1] = &arr[1][0] = *(arr+1)

      * - (**arr) in last example:
          - is the value of the first element in first array = **arr = arr[0][0]
          ? **arr = arr[0][0] = *arr[0] = *(*arr+0)

      * - *(*arr+1) in last example:
          - is the value of the second element in first array = *(*arr+1) = arr[0][1]
          ? *(*arr+1) = arr[0][1]


      * - **(arr+1) in last example:
          - is the value of the first element in second array = **(arr+1) = arr[1][0]
          ? **(arr+1) = arr[1][0] = *arr[1]


      * - *(arr+1)+2 in last example:
          -  is address of last element in  second array = *(arr + 1) + 2 = &arr[1][2]
          ? *(arr + 1) + 2 = &arr[1][2]

      ! notice that:
          - when increase arr + 1 this jump to second node(array) in the 2d array
          - when increase *arr + 1 this jump to second element in the 1d array


  */


```

<h3 align="left">Connect with me:</h3>
click the icon to contact 👆 :
<p align="left">
<a href="https://twitter.com/mina_eldihabi" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/twitter.svg" alt="mina_eldihabi" height="30" width="40" /></a>
<a href="mina.el.dihabi3.6.9@gmail.com" target="blank"><img align="center" src="https://image.similarpng.com/very-thumbnail/2021/09/Gmail-icon-design-template-on-transparent-background-PNG.png" alt="mina_eldihabi" height="30" width="30" /></a>
<a href="https://linkedin.com/in/minafaried" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="minafaried" height="30" width="40" /></a>
<a href="https://fb.com/mina.f.eldihabi" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/facebook.svg" alt="mina.f.eldihabi" height="30" width="40" /></a>
<a href="https://instagram.com/mino_f.eldihabi" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/instagram.svg" alt="mino_f.eldihabi" height="30" width="40" /></a>
</p>







