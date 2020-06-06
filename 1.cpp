//
//  GenImpl.cpp
//  ARM_Project1
//
//  Created by Baron on 3/24/19.
//  Copyright © 2019 Baron. All rights reserved.
//
#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Generation.h"

#ifndef inpliment_cpp
#define inpliment_cpp

template<class T>
Generation<T>::~Generation(){
    std::cout<<"\nGarbege colected!\n";
}
template<class T>
int Generation<T>::_getGenCoficient(){
    std::cout<<"Please enter the coficients:"<<std::endl;
    for(int x = 0; x < this -> _sizeArray; x++)
    {
        std::cin>>_arry[x];
    }
    return  * _arry;
}



template<class T>
void Generation<T>::_DisplayArray()const{
    std::cout<<"The elements in array are:"<<std::endl;
    for(int x = 0; x < this -> _sizeArray; x++)
    {
        std::cout<<std::setw(4);
        std::cout <<_arry[x];
    }
    std::cout<<std::endl;
}


template<class T>
void Generation<T>::_lostGen()const{
    int a=0;
    for( int x{0}; x< this ->_sizeArray; x++)
    {
        if(_arry[x]>=102 and _arry[x]<=128){
            a++;
        }
    }
    std::cout<< "\nLost Generation: "<<a;
};

template<class T>
void Generation<T>::_greastGen()const{
        int a =0;
        for( int x{0}; x< this -> _sizeArray; x++)
        {
            if(_arry[x]>=93 and _arry[x]<=101)
            {
                a++;
            }
        }
        std::cout<< "\nGreatest Generation: "<<a;
};



template<class T>
void Generation<T>::_bbBoomer()const{
    int a=0;
    for( int x{0}; x< this -> _sizeArray; x++)
        {
            if(_arry[x]>=53 and _arry[x]<=92)
            {
                a++;
            }
        }
        std::cout<<"\nBaby Boomer Generation: "<<a;
};


template<class T>
void Generation<T>::_genX()const{
    int a=0;
    for( int x{0}; x< this -> _sizeArray; x++)
        {
            if(_arry[x]>=38 and _arry[x]<=52)
            {
               a++;
            }
        }
    std::cout<<"\nGeneration X: "<<a;
};


template<class T>
void Generation<T>::_genY()const{
        int a=0;
        for( int x{0}; x< this -> _sizeArray; x++)
        {
            if(_arry[x]>=22 and _arry[x]<=37)
            {
                 a++;
            }
        }
    std::cout<<"\nGeneration Y: "<<a;
};

template<class T>
void Generation<T>::_genZ()const{
        int a=0;
        for( int x{0}; x< this -> _sizeArray; x++)
        {
            if(_arry[x]>=7 and _arry[x]<=21)
            {
            
                a++;
            }
        }
    std::cout<<"\nGeneration Y: "<<a;
};


template<class T>
void Generation<T>::_OutOfRange()const{
        int a=0;
        for( int x{0}; x< this -> _sizeArray; x++)
            if(_arry[x]<=0 and _arry[x]>=128)
                a++;
        std::cout<<"\nOut of range : "<<a;
};
#endif
