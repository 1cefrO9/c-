//给定你三个葡萄牙语单词，这些词将根据下表从左到右定义一个动物。
//
//请你确定并输出这个动物的名称。
//
//输入格式
//根据上表，输入包含三个单词，每行一个，用以识别动物，单词由小写字母构成。
//
//输出格式
//输出识别出的动物的名称。
//
//输入样例：
//vertebrado
//mamifero
//onivoro
//输出样例：
//homem
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main() {
    string x, y, z;
    cin >> x >> y >> z;
    if(x == "vertebrado") {
        if(y == "ave") {
            if(z == "carnivoro") {
                cout << "aguia";
            } else if(z == "onivoro") {
                cout << "pomba";
            }
        } else if(y == "mamifero") {
            if(z == "onivoro") {
                cout << "homem";
            } else if(z == "herbivoro") {
                cout << "vaca" ;
            }
        }
    } else if(x == "invertebrado") {
        if(y == "inseto") {
            if(z == "hematofago") {
                cout << "pulga";
            } else if(z == "herbivoro") {
                cout << "lagarta";
            }
        } else if(y == "anelideo") {
            if(z == "hematofago") {
                cout << "sanguessuga";
            } else if("z==onivoro") {
                cout << "minhoca";
            }
        }
    }
    return 0;
}
