
#include<iostream>
#include<windows.h>
class Tree{
private:
    class Node{
    private:
        std::string data;
        std::string text;
        std::string rub;
        std::string number;
        bool kat;

        Node* left;
        Node* right;
    public:
        Node(std::string a, std::string b,std::string c,std::string d,bool e):data(a), text(b),rub(c),number(d), left(NULL), right(NULL){kat=e;}
        Node(){left=0,right=0;};
        Node(Node* temp){ this->data=temp->data;
            this->text=temp->text;
            this->rub=temp->rub;
            this->number=temp->number;
            this->kat=temp->kat;
            this->left=temp->left;
            this->right=temp->right;};
        void insert(std::string a, std::string b,std::string c,std::string d,bool e){
            if(a>data&&right) right->insert(a, b,c,d,e);
            else if(a>data&&!right) right=new Node(a, b,c,d,e);
            else if(a<data&&left) left->insert(a, b,c,d,e);
            else left=new Node(a,b,c,d,e);
        }
        void print(){
            if(left) left->print();

            if(kat)
                std::cout<<data<<" - "<<text<<" - "<<rub<<" - "<<number<<" - "<<"prod"<<"\n";
            else
                std::cout<<data<<" - "<<text<<" - "<<rub<<" - "<<number<<" - "<<"kup"<<"\n";

            if(right) right->print();
        }
        void searchrub(std::string a){
            if(left) left->searchrub(a);

            if (rub==a) {
                if (kat)
                    std::cout << data << " - " << text << " - " << rub << " - " << number << " - " << "prod" << "\n";
                else
                    std::cout << data << " - " << text << " - " << rub << " - " << number << " - " << "kup" << "\n";
            }
            if(right) left->searchrub(a);
        }
        Node* delldata(std::string a){
            if(data==a){
                if (left==0&&right==0){
                    delete this;
                }
                else if(left==0){
                    //this = right;
                    data=right->data;
                    text=right->text;
                    rub=right->rub;
                    number=right->number;
                    kat=right->kat;
                    left=right->left;
                    right=right->right;
                }
                else if(right==0){
                    data=left->data;
                    text=left->text;
                    rub=left->rub;
                    number=left->number;
                    kat=left->kat;
                    right=left->right;
                    left=left->left;
                }

                Node* temp=this->findminel();
                this->data=temp->data;
                this->text=temp->text;
                this->rub=temp->rub;
                this->number=temp->number;
                this->kat=temp->kat;

                this->right->delldata(a);
            }
            if (data>a){
                this->right->delldata(a);
            }
            if (data<a){
                this->right->delldata(a);
            }
        }
        Node* findminel(){
            if(left==0)
                return this;
            else
                return this->left->findminel();
        }
    };

    Node* root;
    //int count;
public:
    int count;
    Tree():root(NULL){count=0;}
    void insert(std::string a, std::string b,std::string c,std::string d,bool e);
    void print();
    void searchrub(std::string a);
    void delldata(std::string);
};





